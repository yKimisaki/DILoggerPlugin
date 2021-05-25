#pragma once

#include "CoreMinimal.h"
#include "Logging/LogCategory.h"
#include "Logging/LogVerbosity.h"
#include "DILogger/Public/DILogHandlerInterface.h"
#include "DILogHandler.generated.h"

UCLASS()
class DILOGGER_API UDILogHandler : public UObject, public IDILogHandlerInterface
{
	GENERATED_BODY()

public:

	virtual void Log(const FString& Message, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale) override;

};