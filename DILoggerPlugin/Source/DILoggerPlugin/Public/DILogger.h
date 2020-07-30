﻿#pragma once

#include "CoreMinimal.h"
#include "Logging/LogCategory.h"
#include "Logging/LogVerbosity.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DILoggerPlugin/Public/DILogHandlerInterface.h"
#include "DILogger.generated.h"

UCLASS()
class DILOGGERPLUGIN_API UDILogger : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:

	static IDILogHandlerInterface* LogHandler;

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void SetLogHandler(const IDILogHandlerInterface* _LogHandler);
	static void Log(const FString& Message, const void* Context, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale);
};