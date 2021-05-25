#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakInterfacePtr.h"
#include "Logging/LogCategory.h"
#include "Logging/LogVerbosity.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DILogger/Public/DILogHandlerInterface.h"
#include "DILogger/Public/DILoggerSubsystemInterface.h"
#include "DILoggerSubsystem.generated.h"

UCLASS()
class DILOGGER_API UDILoggerSubsystem : public UGameInstanceSubsystem, public IDILoggerSubsystemInterface
{
	GENERATED_BODY()

private:

	TWeakInterfacePtr<IDILogHandlerInterface> LogHandler;
	UPROPERTY()
		class UDILogHandler *DefaultLogHandlerInstance;	

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void SetLogHandler(IDILogHandlerInterface* _LogHandler) override;
	void Log(const FString& Message, const FString& FileName, int32 Line, const FString& CalledFunction, const FLogCategoryBase* Category, ELogVerbosity::Type Verbosity, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToDisplay, const FColor& DisplayColor, const FVector2D& DisplayTextScale) const override;
};