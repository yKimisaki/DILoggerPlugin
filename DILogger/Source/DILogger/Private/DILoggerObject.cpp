#include "DILoggerObject.h"
#include "DILogger/Public/DILogHandler.h"
#include "DILogger/Public/DILoggerManager.h"

void UDILoggerObject::Initialize()
{
	DefaultLogHandlerInstance = NewObject<UDILogHandler>();
	IDILogHandlerInterface* NewLogHandler = DefaultLogHandlerInstance;
	SetLogHandler(NewLogHandler);
}

void UDILoggerObject::SetLogHandler(IDILogHandlerInterface* _LogHandler)
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

void UDILoggerObject::Log(const FString& Message, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale) const
{
	if (LogHandler.IsValid())
	{
		LogHandler->Log(Message, FileName, Line, CalledFunction, Category, Verbosity, WithAssertion, WithFileLine, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
	}
}
