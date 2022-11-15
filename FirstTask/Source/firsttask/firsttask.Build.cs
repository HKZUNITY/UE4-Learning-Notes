// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class firsttask : ModuleRules
{
	public firsttask(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
