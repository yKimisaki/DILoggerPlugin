#pragma once

#include "CoreMinimal.h"
#include "Logging/LogCategory.h"
#include "Logging/LogVerbosity.h"
#include "UObject/Interface.h"
#include "DILoggerSubsystemInterface.generated.h"

UINTERFACE()
class DILOGGER_API UDILoggerSubsystemInterface : public UInterface
{
	GENERATED_BODY()
};

class DILOGGER_API IDILoggerSubsystemInterface
{
	GENERATED_BODY()

public:

	virtual void SetLogHandler(class IDILogHandlerInterface* _LogHandler) = 0;
	virtual void Log(const FString& Message, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale) const = 0;

};