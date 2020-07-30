#include "DILogger.h"
#include "DILoggerPlugin/Public/DILogHandler.h"

IDILogHandlerInterface* UDILogger::LogHandler = nullptr;

void UDILogger::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	SetLogHandler(NewObject<UDILogHandler>());
}

void UDILogger::Deinitialize()
{
	SetLogHandler(nullptr);

	Super::Deinitialize();
}

void UDILogger::SetLogHandler(const IDILogHandlerInterface* _LogHandler)
{
	if (_LogHandler == LogHandler)
	{
		return;
	}

	LogHandler = const_cast<IDILogHandlerInterface*>(_LogHandler);
}

void UDILogger::Log(const FString& Message, const void* Context, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale)
{
	if (LogHandler != nullptr)
	{
		LogHandler->Log(Message, Context, FileName, Line, CalledFunction, Category, Verbosity, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
	}
}
