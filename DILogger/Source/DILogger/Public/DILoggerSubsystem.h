#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakInterfacePtr.h"
#include "Logging/LogCategory.h"
#include "Logging/LogVerbosity.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DILogger/Public/DILogHandlerInterface.h"
#include "DILoggerSubsystem.generated.h"

UCLASS()
class DILOGGER_API UDILoggerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:

	static TWeakInterfacePtr<IDILogHandlerInterface> LogHandler;
	UPROPERTY()
		UObject* DefaultLogHandlerInstance;

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void SetLogHandler(IDILogHandlerInterface* _LogHandler);
	static void Log(const FString& Message, const void* Context, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale);
};