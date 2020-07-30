#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Math/Color.h"
#include "DILoggerPlugin/Public/DILogger.h"
#include "DILoggerBlueprintFunctionLibrary.generated.h"

UCLASS()
class DILOGGERPLUGIN_API UDILoggerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:

	static void LogCore(const FString& Message, FName CategoryName, const UObject* Context, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FLinearColor& DisplayColor, const FVector2D& DisplayTextScale);

public:

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void SetLogHandler(const TScriptInterface<IDILogHandlerInterface>& _LogHandler, const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale"))
		static void Log(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool ToScreen = false, float TimeToDisplay = 2.f, FLinearColor DisplayColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D DisplayTextScale = FVector2D(1.f, 1.f));

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale"))
		static void LogVerbose(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool ToScreen = false, float TimeToDisplay = 2.f, FLinearColor DisplayColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D DisplayTextScale = FVector2D(1.f, 1.f));

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale"))
		static void LogVeryVorbose(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool ToScreen = false, float TimeToDisplay = 2.f, FLinearColor DisplayColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D DisplayTextScale = FVector2D(1.f, 1.f));

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale"))
		static void LogWarning(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool ToScreen = false, float TimeToDisplay = 2.f, FLinearColor DisplayColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D DisplayTextScale = FVector2D(1.f, 1.f));

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale"))
		static void LogError(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool ToScreen = false, float TimeToDisplay = 2.f, FLinearColor DisplayColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D DisplayTextScale = FVector2D(1.f, 1.f));

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale"))
		static void LogFatal(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool ToScreen = false, float TimeToDisplay = 2.f, FLinearColor DisplayColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D DisplayTextScale = FVector2D(1.f, 1.f));

};
