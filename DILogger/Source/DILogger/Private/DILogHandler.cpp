#include "DILogHandler.h"
#include "Misc/MessageDialog.h"

void UDILogHandler::Log(const FString& Message, const void* Context, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale)
{
	FString _CalledFunction;
	if (Line == 0 /* From Blueprint */)
	{
		TArray<FString> Callstacks;
		FFrame::GetScriptCallstack().ParseIntoArray(Callstacks, L"\n");
		if (Callstacks.Num() > 1)
		{
			_CalledFunction = Callstacks.Last();
		}
	}
	else
	{
		_CalledFunction = CalledFunction;
	}
	FMsg::Logf(TCHAR_TO_ANSI(*FileName), Line, Category->GetCategoryName(), Verbosity, TEXT("%s\n\t-FILE: %s:%d\n\t-FUNCTION: %s"), *Message, *FileName, Line, *_CalledFunction);

	if (WithAssertion)
	{
#if WITH_EDITOR
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(Message));
#endif
	}

	if (ToScreen && IsValid(GEngine))
	{ 
		GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, DisplayColor, Message, true, DisplayTextScale);
	}
}
