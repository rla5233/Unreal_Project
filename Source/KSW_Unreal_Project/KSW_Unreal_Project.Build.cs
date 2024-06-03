// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class KSW_Unreal_Project : ModuleRules
{
	public KSW_Unreal_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.Add(System.IO.Path.Combine(ModuleDirectory, ""));

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Paper2D" });
	}
}
