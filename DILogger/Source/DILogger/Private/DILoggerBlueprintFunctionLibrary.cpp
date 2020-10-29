#include "DILoggerBlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DILogger/Public/DILoggerManager.h"

void UDILoggerBlueprintFunctionLibrary::SetLogHandler(const TScriptInterface<IDILogHandlerInterface>& _LogHandler, const UObject* WorldContextObject)
{
	FDILoggerManager::SetLogHandler(reinterpret_cast<IDILogHandlerInterface*>(_LogHandler.GetInterface()));
}

void UDILoggerBlueprintFunctionLibrary::LogCore(const FString& Message, FName CategoryName, const UObject* Context, ELogVerbosity::Type Verbosity, bool WithAssertion, bool ToScreen, float TimeToDisplay, const FLinearColor& DisplayColor, const FVector2D& DisplayTextScale)
{
	FLogCategory<ELogVerbosity::Log, ELogVerbosity::All> BlueprintLogCategory(CategoryName);
	FDILoggerManager::Log(Message, Context->GetFullName(), 0, TEXT("From Blueprint"), &BlueprintLogCategory, Verbosity, WithAssertion, ToScreen, TimeToDisplay, DisplayColor.ToFColor(false), DisplayTextScale);
}

void UDILoggerBlueprintFunctionLibrary::Log(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool ToScreen, float TimeToDisplay, FLinearColor DisplayColor, FVector2D DisplayTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::Log, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
}

void UDILoggerBlueprintFunctionLibrary::LogVerbose(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool ToScreen, float TimeToDisplay, FLinearColor DisplayColor, FVector2D DisplayTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::Verbose, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
}

void UDILoggerBlueprintFunctionLibrary::LogVeryVorbose(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool ToScreen, float TimeToDisplay, FLinearColor DisplayColor, FVector2D DisplayTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::VeryVerbose, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
}

void UDILoggerBlueprintFunctionLibrary::LogWarning(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool ToScreen, float TimeToDisplay, FLinearColor DisplayColor, FVector2D DisplayTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::Warning, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
}

void UDILoggerBlueprintFunctionLibrary::LogError(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool ToScreen, float TimeToDisplay, FLinearColor DisplayColor, FVector2D DisplayTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::Error, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
}

void UDILoggerBlueprintFunctionLibrary::LogFatal(const FString& Message, FName CategoryName, const UObject* Context, bool WithAssertion, bool ToScreen, float TimeToDisplay, FLinearColor DisplayColor, FVector2D DisplayTextScale)
{
	LogCore(Message, CategoryName, Context, ELogVerbosity::Fatal, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale);
}