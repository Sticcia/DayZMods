class CfgPatches
{
	class FirstMod
	{
		requiredAddons[]=
		{
			// ""
		};
	};
};

class CfgMods
{
	class FirstMod
	{
		type = "mod";
		
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"FirstMod/3_Game/"};
			};
			
			class worldScriptModule
			{
				value = "";
				files[] = {"FirstMod/4_World/"};
			};
		};
	};
};