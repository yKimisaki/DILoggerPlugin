#include "DILoggerFunctionLibrary.h"
#include "DILogger/Public/DILoggerManager.h"

void UDILoggerFunctionLibrary::SetLogHandler(const TScriptInterface<IDILogHandlerInterface>& _LogHandler, const UObject* WorldContextObject)
{
	FDILoggerManager::SetLogHandler(reinterpret_cast<IDILogHandlerInterface*>(_LogHandler.GetInterface()));
}

void UDILoggerFunctionLibrary::LogCore(const FString& Message, FName CategoryName, const UObject* Context, ELogVerbosity::Type Verbosity, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToScreen, const FLinearColor& ScreenTextColor, const FVector2D& ScreenTextScale)
{
	FLogCategory<ELogVerbosity::Log, ELogVerbosity::All> BlueprintLogCategory(CategoryName);
	FDILoggerManager::Log(
		Message,
		IsValid(Context) ? Context->GetFullName() : FString(""),
		0,
		TEXT("From Blueprint"),
		&BlueprintLogCategory,
		Verbosity,
		WithAssertion,
		WithFileLine,
		ToScreen,
		TimeToScreen,
		ScreenTextColor.ToFColor(false),
		ScreenTextScale
	);
}

void UDILoggerFunctionLibrary::Log(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToScreen, FLinearColor ScreenTextColor, FVector2D ScreenTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::Log, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale);
}

void UDILoggerFunctionLibrary::LogVerbose(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToScreen, FLinearColor ScreenTextColor, FVector2D ScreenTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::Verbose, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale);
}

void UDILoggerFunctionLibrary::LogVeryVorbose(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToScreen, FLinearColor ScreenTextColor, FVector2D ScreenTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::VeryVerbose, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale);
}

void UDILoggerFunctionLibrary::LogWarning(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToScreen, FLinearColor ScreenTextColor, FVector2D ScreenTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::Warning, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale);
}

void UDILoggerFunctionLibrary::LogError(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToScreen, FLinearColor ScreenTextColor, FVector2D ScreenTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::Error, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale);
}

void UDILoggerFunctionLibrary::LogFatal(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToScreen, FLinearColor ScreenTextColor, FVector2D ScreenTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::Fatal, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale);
}