#pragma once

#include "CoreMinimal.h"
#include "Logging/LogCategory.h"
#include "Logging/LogVerbosity.h"
#include "DILoggerPlugin/Public/DILogHandlerInterface.h"
#include "DILogHandler.generated.h"

UCLASS()
class DILOGGERPLUGIN_API UDILogHandler : public UObject, public IDILogHandlerInterface
{
	GENERATED_BODY()

public:

	virtual void Log(const FString& Message, const void* Context, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale) override;

};