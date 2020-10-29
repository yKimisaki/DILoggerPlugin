#include "DILoggerManager.h"
#include "Engine.h" 
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "DILogger/public/DILogHandlerInterface.h"
#include "DILogger/public/DILoggerSubsystem.h"
#include "DILogger/public/DILoggerObject.h"

#if WITH_EDITOR
#include "Editor.h"
#endif

bool FDILoggerManager::CheckCurrentEditorLogger()
{
#if WITH_EDITOR
	if (!CurrentEditorLogger.IsValid() && GEditor)
	{
		UDILoggerObject* LoggerInstance = NewObject<UDILoggerObject>(GEditor);
		LoggerInstance->Initialize();
		CurrentEditorLogger = *LoggerInstance;
	}
	return CurrentEditorLogger.IsValid();
#else
	return false;
#endif
}

TWeakInterfacePtr<IDILoggerSubsystemInterface> FDILoggerManager::CurrentRuntimeLogger;
TWeakInterfacePtr<IDILoggerSubsystemInterface> FDILoggerManager::CurrentEditorLogger;

void FDILoggerManager::SetLogHandler(IDILogHandlerInterface* _LogHandler)
{
	if (CurrentRuntimeLogger.IsValid())
	{
		return CurrentRuntimeLogger->SetLogHandler(_LogHandler);
	}
#if WITH_EDITOR
	if (CheckCurrentEditorLogger())
	{
		return CurrentEditorLogger->SetLogHandler(_LogHandler);
	}
#endif
}

void FDILoggerManager::Log(const FString& Message, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale)
{
	if (CurrentRuntimeLogger.IsValid())
	{
		CurrentRuntimeLogger->Log(Message, FileName, Line, CalledFunction, Category, Verbosity, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
	}
#if WITH_EDITOR
	else if (CheckCurrentEditorLogger())
	{
		CurrentEditorLogger->Log(Message, FileName, Line, CalledFunction, Category, Verbosity, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
	}
#endif
}