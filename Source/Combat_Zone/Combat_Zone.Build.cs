// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Combat_Zone : ModuleRules
{
	public Combat_Zone(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
