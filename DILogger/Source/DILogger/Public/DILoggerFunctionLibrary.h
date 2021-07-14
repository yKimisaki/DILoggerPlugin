#pragma once

#include "CoreMinimal.h"
#include "Math/Color.h"
#include "DILoggerFunctionLibrary.generated.h"

UCLASS()
class DILOGGER_API UDILoggerFunctionLibrary : public UObject
{
	GENERATED_BODY()

private:

	static void LogCore(const FString& Message, FName CategoryName, const UObject* Context, ELogVerbosity::Type Verbosity, bool WithAssertion, bool WithFileLine, bool ToScreen, float TimeToScreen, const FLinearColor& ScreenTextColor, const FVector2D& ScreenTextScale);

public:

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void SetLogHandler(const TScriptInterface<IDILogHandlerInterface>& _LogHandler, const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale"))
		static void Log(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool WithFileLine = false, bool ToScreen = false, float TimeToScreen = 2.f, FLinearColor ScreenTextColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D ScreenTextScale = FVector2D(1.f, 1.f));

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale"))
		static void LogVerbose(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool WithFileLine = false, bool ToScreen = false, float TimeToScreen = 2.f, FLinearColor ScreenTextColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D ScreenTextScale = FVector2D(1.f, 1.f));

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale"))
		static void LogVeryVorbose(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool WithFileLine = false, bool ToScreen = false, float TimeToScreen = 2.f, FLinearColor ScreenTextColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D ScreenTextScale = FVector2D(1.f, 1.f));

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale"))
		static void LogWarning(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool WithFileLine = false, bool ToScreen = false, float TimeToScreen = 2.f, FLinearColor ScreenTextColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D ScreenTextScale = FVector2D(1.f, 1.f));

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale"))
		static void LogError(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool WithFileLine = false, bool ToScreen = false, float TimeToScreen = 2.f, FLinearColor ScreenTextColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D ScreenTextScale = FVector2D(1.f, 1.f));

	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "Context", AdvancedDisplay = "Context, WithAssertion, WithFileLine, ToScreen, TimeToScreen, ScreenTextColor, ScreenTextScale"))
		static void LogFatal(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion = false, bool WithFileLine = false, bool ToScreen = false, float TimeToScreen = 2.f, FLinearColor ScreenTextColor = FLinearColor(0.f, 0.66f, 1.f), FVector2D ScreenTextScale = FVector2D(1.f, 1.f));

};
