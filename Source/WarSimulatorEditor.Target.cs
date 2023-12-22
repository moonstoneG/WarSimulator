

using UnrealBuildTool;
using System.Collections.Generic;

public class WarSimulatorEditorTarget : TargetRules
{
	public WarSimulatorEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "WarSimulator" } );
	}
}
