// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DILOGGERPLUGIN_DILogHandlerInterface_generated_h
#error "DILogHandlerInterface.generated.h already included, missing '#pragma once' in DILogHandlerInterface.h"
#endif
#define DILOGGERPLUGIN_DILogHandlerInterface_generated_h

#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_SPARSE_DATA
#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_RPC_WRAPPERS
#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDILogHandlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDILogHandlerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDILogHandlerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDILogHandlerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDILogHandlerInterface(UDILogHandlerInterface&&); \
	NO_API UDILogHandlerInterface(const UDILogHandlerInterface&); \
public:


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDILogHandlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDILogHandlerInterface(UDILogHandlerInterface&&); \
	NO_API UDILogHandlerInterface(const UDILogHandlerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDILogHandlerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDILogHandlerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDILogHandlerInterface)


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDILogHandlerInterface(); \
	friend struct Z_Construct_UClass_UDILogHandlerInterface_Statics; \
public: \
	DECLARE_CLASS(UDILogHandlerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DILoggerPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDILogHandlerInterface)


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_GENERATED_UINTERFACE_BODY() \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_GENERATED_UINTERFACE_BODY() \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDILogHandlerInterface() {} \
public: \
	typedef UDILogHandlerInterface UClassType; \
	typedef IDILogHandlerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IDILogHandlerInterface() {} \
public: \
	typedef UDILogHandlerInterface UClassType; \
	typedef IDILogHandlerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_8_PROLOG
#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_SPARSE_DATA \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_RPC_WRAPPERS \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_SPARSE_DATA \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DILOGGERPLUGIN_API UClass* StaticClass<class UDILogHandlerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Antares_Plugins_DILoggerPlugin_Source_DILoggerPlugin_Public_DILogHandlerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
