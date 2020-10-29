// Copyright Epic Games, Inc. All Rights Reserved.

#include "DILogger.h"

#define LOCTEXT_NAMESPACE "FDILoggerModule"

void FDILoggerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FDILoggerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDILoggerModule, DILogger)