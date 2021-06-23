#pragma once

#include "CoreMinimal.h"
#include "Logging/LogMacros.h"
#include "DILogger/Public/DILoggerManager.h"

#define DILOGGER_SOURCE_FILE FString(TEXT(UE_LOG_SOURCE_FILE(__FILE__)))

#if PLATFORM_WINDOWS
#define	DILOGGER_FUNCSIG FString(ANSI_TO_TCHAR(__FUNCSIG__))
#else
#define	DILOGGER_FUNCSIG FString(ANSI_TO_TCHAR(__FUNCTION__))
#endif

#if NO_LOGGING
	// This will only log Fatal errors
	#define DI_LOG_CORE(CategoryName, Verbosity, WithAssertion, ToScreen, Color, Time, Scale, Format, ...) \
	{ \
		static_assert(TIsArrayOrRefOfType<decltype(Format), TCHAR>::Value, "Formatting string must be a TCHAR array."); \
		if (ELogVerbosity::Verbosity == ELogVerbosity::Fatal) \
		{ \
			LowLevelFatalErrorHandler(UE_LOG_SOURCE_FILE(__FILE__), __LINE__, Format, ##__VA_ARGS__); \
			_DebugBreakAndPromptForRemote(); \
			FDebug::ProcessFatalError(); \
			UE_LOG_EXPAND_IS_FATAL(Verbosity, CA_ASSUME(false);, PREPROCESSOR_NOTHING) \
		} \
	}
#else
	// Conditional logging. Will only log if Condition is met.
	#define DI_LOG_CORE(CategoryName, Verbosity, WithAssertion, WithFileLine, ToScreen, Color, Time, Scale, Format, ...) \
	{ \
		static_assert(TIsArrayOrRefOfType<decltype(Format), TCHAR>::Value, "Formatting string must be a TCHAR array."); \
		static_assert((ELogVerbosity::Verbosity & ELogVerbosity::VerbosityMask) < ELogVerbosity::NumVerbosity && ELogVerbosity::Verbosity > 0, "Verbosity must be constant and in range."); \
		CA_CONSTANT_IF((ELogVerbosity::Verbosity & ELogVerbosity::VerbosityMask) <= ELogVerbosity::COMPILED_IN_MINIMUM_VERBOSITY && (ELogVerbosity::Warning & ELogVerbosity::VerbosityMask) <= FLogCategory##CategoryName::CompileTimeVerbosity) \
		{ \
			UE_LOG_EXPAND_IS_FATAL(Verbosity, PREPROCESSOR_NOTHING, if (!CategoryName.IsSuppressed(ELogVerbosity::Verbosity))) \
			{ \
				auto UE_LOG_noinline_lambda = [](const auto& LCategoryName, const auto& LFormat, const auto&... DI_LOG_Args) FORCENOINLINE \
				{ \
					TRACE_LOG_MESSAGE(LCategoryName, Verbosity, LFormat, DI_LOG_Args...) \
					UE_LOG_EXPAND_IS_FATAL(Verbosity, \
						{ \
							FMsg::Logf_Internal(UE_LOG_SOURCE_FILE(__FILE__), __LINE__, LCategoryName.GetCategoryName(), ELogVerbosity::Verbosity, LFormat, DI_LOG_Args...); \
							_DebugBreakAndPromptForRemote(); \
							FDebug::ProcessFatalError(); \
						}, \
						{ \
							FDILoggerManager::Log(FString::Printf(Format, DI_LOG_Args...), DILOGGER_SOURCE_FILE, __LINE__, DILOGGER_FUNCSIG, &CategoryName, ELogVerbosity::Verbosity, WithAssertion, WithFileLine, ToScreen, Time, FColor::Color, FVector2D(Scale, Scale)); \
						} \
					) \
				}; \
				UE_LOG_noinline_lambda(CategoryName, Format, ##__VA_ARGS__); \
				UE_LOG_EXPAND_IS_FATAL(Verbosity, CA_ASSUME(false);, PREPROCESSOR_NOTHING) \
			} \
		} \
	}
#endif

#define DI_LOG(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Log, false, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_LOG_LOG(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Log, false, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_LOG_VERBOSE(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Verbose, false, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_LOG_VERYVERBOSE(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, VeryVerbose, false, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_LOG_WARNING(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Warning, false, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_LOG_ERROR(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Error, false, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_LOG_FATAL(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Fatal, false, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)

#define DI_SCREEN(CategoryName, Color, Time, Scale, Format, ...) DI_LOG_CORE(CategoryName, Log, false, true, true, Color, Time, Scale, Format, ##__VA_ARGS__)
#define DI_SCREEN_LOG(CategoryName, Color, Time, Scale, Format, ...) DI_LOG_CORE(CategoryName, Log, false, true, true, Color, Time, Scale, Format, ##__VA_ARGS__)
#define DI_SCREEN_VERBOSE(CategoryName, Color, Time, Scale, Format, ...) DI_LOG_CORE(CategoryName, Verbose, false, true, true, Color, Time, Scale, Format, ##__VA_ARGS__)
#define DI_SCREEN_VERYVERBOSE(CategoryName, Color, Time, Scale, Format, ...) DI_LOG_CORE(CategoryName, VeryVerbose, false, true, true, Color, Time, Scale, Format, ##__VA_ARGS__)
#define DI_SCREEN_WARNING(CategoryName, Color, Time, Scale, Format, ...) DI_LOG_CORE(CategoryName, Warning, false, true, true, Color, Time, Scale, Format, ##__VA_ARGS__)
#define DI_SCREEN_ERROR(CategoryName, Color, Time, Scale, Format, ...) DI_LOG_CORE(CategoryName, Error, false, true, true, Color, Time, Scale, Format, ##__VA_ARGS__)
#define DI_SCREEN_FATAL(CategoryName, Color, Time, Scale, Format, ...) DI_LOG_CORE(CategoryName, Fatal, false, true, true, Color, Time, Scale, Format, ##__VA_ARGS__)

#define DI_ASSERT(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Warning, true, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ASSERT_LOG(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Log, true, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ASSERT_VERBOSE(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Verbose, true, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ASSERT_VERYVERBOSE(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, VeryVerbose, true, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ASSERT_WARNING(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Warning, true, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ASSERT_ERROR(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Error, true, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ASSERT_FATAL(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Fatal, true, true, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)

#define DI_ECHO(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Verbose, false, false, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ECHO_LOG(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Log, false, false, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ECHO_VERBOSE(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Verbose, false, false, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ECHO_VERYVERBOSE(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, VeryVerbose, false, false, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ECHO_WARNING(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Warning, false, false, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ECHO_ERROR(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Error, false, false, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
#define DI_ECHO_FATAL(CategoryName, Format, ...) DI_LOG_CORE(CategoryName, Fatal, false, false, false, Black, 0.f, 0.f, Format, ##__VA_ARGS__)
