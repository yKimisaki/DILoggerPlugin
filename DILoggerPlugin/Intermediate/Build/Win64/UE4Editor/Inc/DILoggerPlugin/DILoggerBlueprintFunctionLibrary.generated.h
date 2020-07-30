// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLinearColor;
struct FVector2D;
class IDILogHandlerInterface;
#ifdef DILOGGERPLUGIN_DILoggerBlueprintFunctionLibrary_generated_h
#error "DILoggerBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in DILoggerBlueprintFunctionLibrary.h"
#endif
#define DILOGGERPLUGIN_DILoggerBlueprintFunctionLibrary_generated_h

#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_SPARSE_DATA
#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogFatal); \
	DECLARE_FUNCTION(execLogError); \
	DECLARE_FUNCTION(execLogWarning); \
	DECLARE_FUNCTION(execLogVeryVorbose); \
	DECLARE_FUNCTION(execLogVerbose); \
	DECLARE_FUNCTION(execLog); \
	DECLARE_FUNCTION(execSetLogHandler);


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogFatal); \
	DECLARE_FUNCTION(execLogError); \
	DECLARE_FUNCTION(execLogWarning); \
	DECLARE_FUNCTION(execLogVeryVorbose); \
	DECLARE_FUNCTION(execLogVerbose); \
	DECLARE_FUNCTION(execLog); \
	DECLARE_FUNCTION(execSetLogHandler);


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDILoggerBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDILoggerBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DILoggerPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDILoggerBlueprintFunctionLibrary)


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDILoggerBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDILoggerBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDILoggerBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DILoggerPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDILoggerBlueprintFunctionLibrary)


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDILoggerBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDILoggerBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDILoggerBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDILoggerBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDILoggerBlueprintFunctionLibrary(UDILoggerBlueprintFunctionLibrary&&); \
	NO_API UDILoggerBlueprintFunctionLibrary(const UDILoggerBlueprintFunctionLibrary&); \
public:


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDILoggerBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDILoggerBlueprintFunctionLibrary(UDILoggerBlueprintFunctionLibrary&&); \
	NO_API UDILoggerBlueprintFunctionLibrary(const UDILoggerBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDILoggerBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDILoggerBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDILoggerBlueprintFunctionLibrary)


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_9_PROLOG
#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_SPARSE_DATA \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_RPC_WRAPPERS \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_INCLASS \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_SPARSE_DATA \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DILOGGERPLUGIN_API UClass* StaticClass<class UDILoggerBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILoggerBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
