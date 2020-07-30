// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DILoggerPlugin/Public/DILogHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDILogHandler() {}
// Cross Module References
	DILOGGERPLUGIN_API UClass* Z_Construct_UClass_UDILogHandler_NoRegister();
	DILOGGERPLUGIN_API UClass* Z_Construct_UClass_UDILogHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DILoggerPlugin();
	DILOGGERPLUGIN_API UClass* Z_Construct_UClass_UDILogHandlerInterface_NoRegister();
// End Cross Module References
	void UDILogHandler::StaticRegisterNativesUDILogHandler()
	{
	}
	UClass* Z_Construct_UClass_UDILogHandler_NoRegister()
	{
		return UDILogHandler::StaticClass();
	}
	struct Z_Construct_UClass_UDILogHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDILogHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DILoggerPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDILogHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DILogHandler.h" },
		{ "ModuleRelativePath", "Public/DILogHandler.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDILogHandler_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDILogHandlerInterface_NoRegister, (int32)VTABLE_OFFSET(UDILogHandler, IDILogHandlerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDILogHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDILogHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDILogHandler_Statics::ClassParams = {
		&UDILogHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDILogHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDILogHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDILogHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDILogHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDILogHandler, 752581421);
	template<> DILOGGERPLUGIN_API UClass* StaticClass<UDILogHandler>()
	{
		return UDILogHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDILogHandler(Z_Construct_UClass_UDILogHandler, &UDILogHandler::StaticClass, TEXT("/Script/DILoggerPlugin"), TEXT("UDILogHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDILogHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
