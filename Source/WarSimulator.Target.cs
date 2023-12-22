

using UnrealBuildTool;
using System.Collections.Generic;

public class WarSimulatorTarget : TargetRules
{
	public WarSimulatorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "WarSimulator" } );
	}
}
