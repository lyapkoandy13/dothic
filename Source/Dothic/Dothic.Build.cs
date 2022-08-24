// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Dothic : ModuleRules
{
	public Dothic(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
