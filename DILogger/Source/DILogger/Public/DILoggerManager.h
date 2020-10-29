#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakInterfacePtr.h"
#include "Logging/LogCategory.h"
#include "Logging/LogVerbosity.h"
#include "DILogger/Public/DILoggerSubsystemInterface.h"

class DILOGGER_API FDILoggerManager
{

private:

	static TWeakInterfacePtr<IDILoggerSubsystemInterface> CurrentEditorLogger;
	static bool CheckCurrentEditorLogger();

public:
	
	static TWeakInterfacePtr<IDILoggerSubsystemInterface> CurrentRuntimeLogger;

	static void SetLogHandler(class IDILogHandlerInterface* _LogHandler);
	static void Log(const FString& Message, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale);
};