#include "DILoggerSubsystem.h"
#include "DILogger/Public/DILogHandler.h"
#include "DILogger/Public/DILoggerManager.h"

void UDILoggerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	DefaultLogHandlerInstance = NewObject<UDILogHandler>();
	IDILogHandlerInterface* NewLogHandler = DefaultLogHandlerInstance;
	SetLogHandler(NewLogHandler);

	IDILoggerSubsystemInterface* SubsystemInterface = Cast<IDILoggerSubsystemInterface>(this);
	FDILoggerManager::CurrentRuntimeLogger = *SubsystemInterface;
}

void UDILoggerSubsystem::Deinitialize()
{
	SetLogHandler(nullptr);

	Super::Deinitialize();
}

void UDILoggerSubsystem::SetLogHandler(IDILogHandlerInterface* _LogHandler)
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

void UDILoggerSubsystem::Log(const FString& Message, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale) const
{
	if (LogHandler.IsValid())
	{
		LogHandler->Log(Message, FileName, Line, CalledFunction, Category, Verbosity, WithAssertion, WithFileLine, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
	}
}
