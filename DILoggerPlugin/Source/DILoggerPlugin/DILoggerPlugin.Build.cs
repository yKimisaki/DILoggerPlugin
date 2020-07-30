// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DILoggerPlugin : ModuleRules
{
	public DILoggerPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(new string[] { });
		
		PrivateIncludePaths.AddRange(new string[] { });
			
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			});

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
			});
		
		DynamicallyLoadedModuleNames.AddRange(new string[] { });
	}
}
