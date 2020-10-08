#include "DILogger.h"
#include "DILoggerPlugin/Public/DILogHandler.h"

TWeakInterfacePtr<IDILogHandlerInterface> UDILogger::LogHandler;

void UDILogger::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UDILogHandler* NewLogHandler = NewObject<UDILogHandler>();
	DefaultLogHandlerInstance = NewLogHandler;
	SetLogHandler(NewLogHandler);
}

void UDILogger::Deinitialize()
{
	SetLogHandler(nullptr);

	Super::Deinitialize();
}

void UDILogger::SetLogHandler(IDILogHandlerInterface* _LogHandler)
{
	if (&*LogHandler == _LogHandler)
	{
		return;
	}

	if (_LogHandler != nullptr)
	{
		LogHandler = *_LogHandler;
	}
	else
	{
		LogHandler = TWeakInterfacePtr<IDILogHandlerInterface>();
	}
}

void UDILogger::Log(const FString& Message, const void* Context, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale)
{
	if (LogHandler.IsValid())
	{
		LogHandler->Log(Message, Context, FileName, Line, CalledFunction, Category, Verbosity, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
	}
}
