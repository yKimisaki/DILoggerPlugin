// Copyright Epic Games, Inc. All Rights Reserved.

#include "DILoggerPlugin.h"

#define LOCTEXT_NAMESPACE "FDILoggerPluginModule"

void FDILoggerPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FDILoggerPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDILoggerPluginModule, DILoggerPlugin)