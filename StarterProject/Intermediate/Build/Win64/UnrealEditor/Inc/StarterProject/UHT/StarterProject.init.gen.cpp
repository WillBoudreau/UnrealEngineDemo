// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarterProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_StarterProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_StarterProject()
	{
		if (!Z_Registration_Info_UPackage__Script_StarterProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/StarterProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x78570853,
				0x6A8B60AC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_StarterProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_StarterProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_StarterProject(Z_Construct_UPackage__Script_StarterProject, TEXT("/Script/StarterProject"), Z_Registration_Info_UPackage__Script_StarterProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x78570853, 0x6A8B60AC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
