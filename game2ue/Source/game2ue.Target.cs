using UnrealBuildTool;
using System.Collections.Generic;

public class game2ueTarget : TargetRules
{
	public game2ueTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
        
		DefaultBuildSettings = BuildSettingsVersion.V6;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_7;
        
		// --- OSTATECZNA POPRAWKA DLA SILNIKA Z LAUNCHERA ---
		bOverrideBuildEnvironment = true;

		ExtraModuleNames.Add("game2ue");
	}
}