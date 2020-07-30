#include "DILogHandler.h"
#include "Misc/MessageDialog.h"

void UDILogHandler::Log(const FString& Message, const void* Context, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale)
{
	FString DetailMessage;
	if (Context != nullptr)
	{
		UObject* ObjectContext = reinterpret_cast<UObject*>(const_cast<void*>(Context));
		if (IsValid(ObjectContext))
		{
			DetailMessage += ObjectContext->GetName() + ": ";
		}
	}
	DetailMessage += Message + TEXT("\n") + FFrame::GetScriptCallstack();

	FMsg::Logf(TCHAR_TO_ANSI(*FileName), Line, Category->GetCategoryName(), Verbosity, TEXT("%s\n\t-FILE: %s:%d\n\t-FUNCTION: %s"), *DetailMessage, *FileName, Line, *CalledFunction);

	if (WithAssertion)
	{
#if WITH_EDITOR
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(DetailMessage));
#endif
	}

	if (ToScreen && IsValid(GEngine))
	{ 
		GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, DisplayColor, Message, true, DisplayTextScale);
	}
}
