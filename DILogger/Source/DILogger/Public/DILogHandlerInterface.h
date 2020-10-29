#pragma once

#include "CoreMinimal.h"
#include "Logging/LogCategory.h"
#include "Logging/LogVerbosity.h"
#include "DILogHandlerInterface.generated.h"

UINTERFACE()
class DILOGGER_API UDILogHandlerInterface : public UInterface
{
	GENERATED_BODY()
};

class DILOGGER_API IDILogHandlerInterface
{
	GENERATED_BODY()

public:

	virtual void Log(const FString& Message, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale) = 0;

};