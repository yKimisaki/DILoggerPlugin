// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DILoggerPlugin/Public/DILoggerBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDILoggerBlueprintFunctionLibrary() {}
// Cross Module References
	DILOGGERPLUGIN_API UClass* Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_NoRegister();
	DILOGGERPLUGIN_API UClass* Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DILoggerPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DILOGGERPLUGIN_API UClass* Z_Construct_UClass_UDILogHandlerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDILoggerBlueprintFunctionLibrary::execLogFatal)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_UBOOL(Z_Param_WithAssertion);
		P_GET_UBOOL(Z_Param_ToScreen);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_GET_STRUCT(FLinearColor,Z_Param_DisplayColor);
		P_GET_STRUCT(FVector2D,Z_Param_DisplayTextScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDILoggerBlueprintFunctionLibrary::LogFatal(Z_Param_Message,Z_Param_CategoryName,Z_Param_Context,Z_Param_WithAssertion,Z_Param_ToScreen,Z_Param_TimeToDisplay,Z_Param_DisplayColor,Z_Param_DisplayTextScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDILoggerBlueprintFunctionLibrary::execLogError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_UBOOL(Z_Param_WithAssertion);
		P_GET_UBOOL(Z_Param_ToScreen);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_GET_STRUCT(FLinearColor,Z_Param_DisplayColor);
		P_GET_STRUCT(FVector2D,Z_Param_DisplayTextScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDILoggerBlueprintFunctionLibrary::LogError(Z_Param_Message,Z_Param_CategoryName,Z_Param_Context,Z_Param_WithAssertion,Z_Param_ToScreen,Z_Param_TimeToDisplay,Z_Param_DisplayColor,Z_Param_DisplayTextScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDILoggerBlueprintFunctionLibrary::execLogWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_UBOOL(Z_Param_WithAssertion);
		P_GET_UBOOL(Z_Param_ToScreen);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_GET_STRUCT(FLinearColor,Z_Param_DisplayColor);
		P_GET_STRUCT(FVector2D,Z_Param_DisplayTextScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDILoggerBlueprintFunctionLibrary::LogWarning(Z_Param_Message,Z_Param_CategoryName,Z_Param_Context,Z_Param_WithAssertion,Z_Param_ToScreen,Z_Param_TimeToDisplay,Z_Param_DisplayColor,Z_Param_DisplayTextScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDILoggerBlueprintFunctionLibrary::execLogVeryVorbose)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_UBOOL(Z_Param_WithAssertion);
		P_GET_UBOOL(Z_Param_ToScreen);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_GET_STRUCT(FLinearColor,Z_Param_DisplayColor);
		P_GET_STRUCT(FVector2D,Z_Param_DisplayTextScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDILoggerBlueprintFunctionLibrary::LogVeryVorbose(Z_Param_Message,Z_Param_CategoryName,Z_Param_Context,Z_Param_WithAssertion,Z_Param_ToScreen,Z_Param_TimeToDisplay,Z_Param_DisplayColor,Z_Param_DisplayTextScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDILoggerBlueprintFunctionLibrary::execLogVerbose)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_UBOOL(Z_Param_WithAssertion);
		P_GET_UBOOL(Z_Param_ToScreen);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_GET_STRUCT(FLinearColor,Z_Param_DisplayColor);
		P_GET_STRUCT(FVector2D,Z_Param_DisplayTextScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDILoggerBlueprintFunctionLibrary::LogVerbose(Z_Param_Message,Z_Param_CategoryName,Z_Param_Context,Z_Param_WithAssertion,Z_Param_ToScreen,Z_Param_TimeToDisplay,Z_Param_DisplayColor,Z_Param_DisplayTextScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDILoggerBlueprintFunctionLibrary::execLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_UBOOL(Z_Param_WithAssertion);
		P_GET_UBOOL(Z_Param_ToScreen);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_GET_STRUCT(FLinearColor,Z_Param_DisplayColor);
		P_GET_STRUCT(FVector2D,Z_Param_DisplayTextScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDILoggerBlueprintFunctionLibrary::Log(Z_Param_Message,Z_Param_CategoryName,Z_Param_Context,Z_Param_WithAssertion,Z_Param_ToScreen,Z_Param_TimeToDisplay,Z_Param_DisplayColor,Z_Param_DisplayTextScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDILoggerBlueprintFunctionLibrary::execSetLogHandler)
	{
		P_GET_TINTERFACE_REF(IDILogHandlerInterface,Z_Param_Out__LogHandler);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDILoggerBlueprintFunctionLibrary::SetLogHandler(Z_Param_Out__LogHandler,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UDILoggerBlueprintFunctionLibrary::StaticRegisterNativesUDILoggerBlueprintFunctionLibrary()
	{
		UClass* Class = UDILoggerBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Log", &UDILoggerBlueprintFunctionLibrary::execLog },
			{ "LogError", &UDILoggerBlueprintFunctionLibrary::execLogError },
			{ "LogFatal", &UDILoggerBlueprintFunctionLibrary::execLogFatal },
			{ "LogVerbose", &UDILoggerBlueprintFunctionLibrary::execLogVerbose },
			{ "LogVeryVorbose", &UDILoggerBlueprintFunctionLibrary::execLogVeryVorbose },
			{ "LogWarning", &UDILoggerBlueprintFunctionLibrary::execLogWarning },
			{ "SetLogHandler", &UDILoggerBlueprintFunctionLibrary::execSetLogHandler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics
	{
		struct DILoggerBlueprintFunctionLibrary_eventLog_Parms
		{
			FString Message;
			FName CategoryName;
			const UObject* Context;
			bool WithAssertion;
			bool ToScreen;
			float TimeToDisplay;
			FLinearColor DisplayColor;
			FVector2D DisplayTextScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayTextScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_ToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToScreen;
		static void NewProp_WithAssertion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithAssertion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_DisplayTextScale = { "DisplayTextScale", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLog_Parms, DisplayTextScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_DisplayColor = { "DisplayColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLog_Parms, DisplayColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLog_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_ToScreen_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLog_Parms*)Obj)->ToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_ToScreen = { "ToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLog_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_ToScreen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_WithAssertion_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLog_Parms*)Obj)->WithAssertion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_WithAssertion = { "WithAssertion", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLog_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_WithAssertion_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLog_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLog_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLog_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_DisplayTextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_DisplayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_ToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_WithAssertion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale" },
		{ "CPP_Default_DisplayColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DisplayTextScale", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_TimeToDisplay", "2.000000" },
		{ "CPP_Default_ToScreen", "false" },
		{ "CPP_Default_WithAssertion", "false" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/DILoggerBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary, nullptr, "Log", nullptr, nullptr, sizeof(DILoggerBlueprintFunctionLibrary_eventLog_Parms), Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics
	{
		struct DILoggerBlueprintFunctionLibrary_eventLogError_Parms
		{
			FString Message;
			FName CategoryName;
			const UObject* Context;
			bool WithAssertion;
			bool ToScreen;
			float TimeToDisplay;
			FLinearColor DisplayColor;
			FVector2D DisplayTextScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayTextScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_ToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToScreen;
		static void NewProp_WithAssertion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithAssertion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_DisplayTextScale = { "DisplayTextScale", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogError_Parms, DisplayTextScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_DisplayColor = { "DisplayColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogError_Parms, DisplayColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogError_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_ToScreen_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLogError_Parms*)Obj)->ToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_ToScreen = { "ToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLogError_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_ToScreen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_WithAssertion_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLogError_Parms*)Obj)->WithAssertion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_WithAssertion = { "WithAssertion", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLogError_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_WithAssertion_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogError_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogError_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogError_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_DisplayTextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_DisplayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_ToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_WithAssertion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale" },
		{ "CPP_Default_DisplayColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DisplayTextScale", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_TimeToDisplay", "2.000000" },
		{ "CPP_Default_ToScreen", "false" },
		{ "CPP_Default_WithAssertion", "false" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/DILoggerBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary, nullptr, "LogError", nullptr, nullptr, sizeof(DILoggerBlueprintFunctionLibrary_eventLogError_Parms), Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics
	{
		struct DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms
		{
			FString Message;
			FName CategoryName;
			const UObject* Context;
			bool WithAssertion;
			bool ToScreen;
			float TimeToDisplay;
			FLinearColor DisplayColor;
			FVector2D DisplayTextScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayTextScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_ToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToScreen;
		static void NewProp_WithAssertion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithAssertion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_DisplayTextScale = { "DisplayTextScale", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms, DisplayTextScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_DisplayColor = { "DisplayColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms, DisplayColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_ToScreen_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms*)Obj)->ToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_ToScreen = { "ToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_ToScreen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_WithAssertion_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms*)Obj)->WithAssertion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_WithAssertion = { "WithAssertion", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_WithAssertion_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_DisplayTextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_DisplayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_ToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_WithAssertion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale" },
		{ "CPP_Default_DisplayColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DisplayTextScale", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_TimeToDisplay", "2.000000" },
		{ "CPP_Default_ToScreen", "false" },
		{ "CPP_Default_WithAssertion", "false" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/DILoggerBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary, nullptr, "LogFatal", nullptr, nullptr, sizeof(DILoggerBlueprintFunctionLibrary_eventLogFatal_Parms), Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics
	{
		struct DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms
		{
			FString Message;
			FName CategoryName;
			const UObject* Context;
			bool WithAssertion;
			bool ToScreen;
			float TimeToDisplay;
			FLinearColor DisplayColor;
			FVector2D DisplayTextScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayTextScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_ToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToScreen;
		static void NewProp_WithAssertion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithAssertion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_DisplayTextScale = { "DisplayTextScale", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms, DisplayTextScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_DisplayColor = { "DisplayColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms, DisplayColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_ToScreen_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms*)Obj)->ToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_ToScreen = { "ToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_ToScreen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_WithAssertion_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms*)Obj)->WithAssertion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_WithAssertion = { "WithAssertion", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_WithAssertion_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_DisplayTextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_DisplayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_ToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_WithAssertion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale" },
		{ "CPP_Default_DisplayColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DisplayTextScale", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_TimeToDisplay", "2.000000" },
		{ "CPP_Default_ToScreen", "false" },
		{ "CPP_Default_WithAssertion", "false" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/DILoggerBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary, nullptr, "LogVerbose", nullptr, nullptr, sizeof(DILoggerBlueprintFunctionLibrary_eventLogVerbose_Parms), Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics
	{
		struct DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms
		{
			FString Message;
			FName CategoryName;
			const UObject* Context;
			bool WithAssertion;
			bool ToScreen;
			float TimeToDisplay;
			FLinearColor DisplayColor;
			FVector2D DisplayTextScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayTextScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_ToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToScreen;
		static void NewProp_WithAssertion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithAssertion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_DisplayTextScale = { "DisplayTextScale", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms, DisplayTextScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_DisplayColor = { "DisplayColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms, DisplayColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_ToScreen_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms*)Obj)->ToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_ToScreen = { "ToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_ToScreen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_WithAssertion_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms*)Obj)->WithAssertion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_WithAssertion = { "WithAssertion", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_WithAssertion_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_DisplayTextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_DisplayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_ToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_WithAssertion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale" },
		{ "CPP_Default_DisplayColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DisplayTextScale", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_TimeToDisplay", "2.000000" },
		{ "CPP_Default_ToScreen", "false" },
		{ "CPP_Default_WithAssertion", "false" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/DILoggerBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary, nullptr, "LogVeryVorbose", nullptr, nullptr, sizeof(DILoggerBlueprintFunctionLibrary_eventLogVeryVorbose_Parms), Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics
	{
		struct DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms
		{
			FString Message;
			FName CategoryName;
			const UObject* Context;
			bool WithAssertion;
			bool ToScreen;
			float TimeToDisplay;
			FLinearColor DisplayColor;
			FVector2D DisplayTextScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayTextScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_ToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ToScreen;
		static void NewProp_WithAssertion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithAssertion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_DisplayTextScale = { "DisplayTextScale", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms, DisplayTextScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_DisplayColor = { "DisplayColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms, DisplayColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_ToScreen_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms*)Obj)->ToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_ToScreen = { "ToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_ToScreen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_WithAssertion_SetBit(void* Obj)
	{
		((DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms*)Obj)->WithAssertion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_WithAssertion = { "WithAssertion", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms), &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_WithAssertion_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_DisplayTextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_DisplayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_ToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_WithAssertion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Context, WithAssertion, ToScreen, TimeToDisplay, DisplayColor, DisplayTextScale" },
		{ "CPP_Default_DisplayColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DisplayTextScale", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_TimeToDisplay", "2.000000" },
		{ "CPP_Default_ToScreen", "false" },
		{ "CPP_Default_WithAssertion", "false" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/DILoggerBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary, nullptr, "LogWarning", nullptr, nullptr, sizeof(DILoggerBlueprintFunctionLibrary_eventLogWarning_Parms), Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics
	{
		struct DILoggerBlueprintFunctionLibrary_eventSetLogHandler_Parms
		{
			TScriptInterface<IDILogHandlerInterface> _LogHandler;
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__LogHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__LogHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventSetLogHandler_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::NewProp__LogHandler_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::NewProp__LogHandler = { "_LogHandler", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DILoggerBlueprintFunctionLibrary_eventSetLogHandler_Parms, _LogHandler), Z_Construct_UClass_UDILogHandlerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::NewProp__LogHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::NewProp__LogHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::NewProp__LogHandler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DILoggerBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary, nullptr, "SetLogHandler", nullptr, nullptr, sizeof(DILoggerBlueprintFunctionLibrary_eventSetLogHandler_Parms), Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_NoRegister()
	{
		return UDILoggerBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DILoggerPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_Log, "Log" }, // 1366818214
		{ &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogError, "LogError" }, // 1433220733
		{ &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogFatal, "LogFatal" }, // 596702607
		{ &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVerbose, "LogVerbose" }, // 1447849952
		{ &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogVeryVorbose, "LogVeryVorbose" }, // 230068260
		{ &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_LogWarning, "LogWarning" }, // 3122976953
		{ &Z_Construct_UFunction_UDILoggerBlueprintFunctionLibrary_SetLogHandler, "SetLogHandler" }, // 1537693904
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DILoggerBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/DILoggerBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDILoggerBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_Statics::ClassParams = {
		&UDILoggerBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDILoggerBlueprintFunctionLibrary, 2643377392);
	template<> DILOGGERPLUGIN_API UClass* StaticClass<UDILoggerBlueprintFunctionLibrary>()
	{
		return UDILoggerBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDILoggerBlueprintFunctionLibrary(Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary, &UDILoggerBlueprintFunctionLibrary::StaticClass, TEXT("/Script/DILoggerPlugin"), TEXT("UDILoggerBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDILoggerBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
