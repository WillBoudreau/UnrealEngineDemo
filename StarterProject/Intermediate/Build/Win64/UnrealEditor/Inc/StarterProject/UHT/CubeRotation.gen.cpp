// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarterProject/CubeRotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeRotation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STARTERPROJECT_API UClass* Z_Construct_UClass_UCubeRotation();
STARTERPROJECT_API UClass* Z_Construct_UClass_UCubeRotation_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarterProject();
// End Cross Module References

// Begin Class UCubeRotation
void UCubeRotation::StaticRegisterNativesUCubeRotation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeRotation);
UClass* Z_Construct_UClass_UCubeRotation_NoRegister()
{
	return UCubeRotation::StaticClass();
}
struct Z_Construct_UClass_UCubeRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CubeRotation.h" },
		{ "ModuleRelativePath", "CubeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pitchValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CubeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_yawValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CubeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rollValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CubeRotation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pitchValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_yawValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rollValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeRotation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeRotation_Statics::NewProp_pitchValue = { "pitchValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubeRotation, pitchValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pitchValue_MetaData), NewProp_pitchValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeRotation_Statics::NewProp_yawValue = { "yawValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubeRotation, yawValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_yawValue_MetaData), NewProp_yawValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeRotation_Statics::NewProp_rollValue = { "rollValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubeRotation, rollValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rollValue_MetaData), NewProp_rollValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubeRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeRotation_Statics::NewProp_pitchValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeRotation_Statics::NewProp_yawValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeRotation_Statics::NewProp_rollValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeRotation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCubeRotation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StarterProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeRotation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeRotation_Statics::ClassParams = {
	&UCubeRotation::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCubeRotation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCubeRotation_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeRotation_Statics::Class_MetaDataParams), Z_Construct_UClass_UCubeRotation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCubeRotation()
{
	if (!Z_Registration_Info_UClass_UCubeRotation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeRotation.OuterSingleton, Z_Construct_UClass_UCubeRotation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCubeRotation.OuterSingleton;
}
template<> STARTERPROJECT_API UClass* StaticClass<UCubeRotation>()
{
	return UCubeRotation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeRotation);
UCubeRotation::~UCubeRotation() {}
// End Class UCubeRotation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_CubeRotation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCubeRotation, UCubeRotation::StaticClass, TEXT("UCubeRotation"), &Z_Registration_Info_UClass_UCubeRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeRotation), 189019987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_CubeRotation_h_1945017607(TEXT("/Script/StarterProject"),
	Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_CubeRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_CubeRotation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
