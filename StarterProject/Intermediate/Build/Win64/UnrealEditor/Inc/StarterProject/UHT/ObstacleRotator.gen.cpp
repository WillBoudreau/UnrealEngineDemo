// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarterProject/Public/ObstacleRotator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacleRotator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STARTERPROJECT_API UClass* Z_Construct_UClass_UObstacleRotator();
STARTERPROJECT_API UClass* Z_Construct_UClass_UObstacleRotator_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarterProject();
// End Cross Module References

// Begin Class UObstacleRotator
void UObstacleRotator::StaticRegisterNativesUObstacleRotator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObstacleRotator);
UClass* Z_Construct_UClass_UObstacleRotator_NoRegister()
{
	return UObstacleRotator::StaticClass();
}
struct Z_Construct_UClass_UObstacleRotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObstacleRotator.h" },
		{ "ModuleRelativePath", "Public/ObstacleRotator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ObstacleRotator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ObstacleRotator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/ObstacleRotator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObstacleRotator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObstacleRotator_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObstacleRotator, PitchValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchValue_MetaData), NewProp_PitchValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObstacleRotator_Statics::NewProp_YawValue = { "YawValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObstacleRotator, YawValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawValue_MetaData), NewProp_YawValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObstacleRotator_Statics::NewProp_RollValue = { "RollValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObstacleRotator, RollValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollValue_MetaData), NewProp_RollValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObstacleRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObstacleRotator_Statics::NewProp_PitchValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObstacleRotator_Statics::NewProp_YawValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObstacleRotator_Statics::NewProp_RollValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObstacleRotator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObstacleRotator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StarterProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObstacleRotator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObstacleRotator_Statics::ClassParams = {
	&UObstacleRotator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObstacleRotator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObstacleRotator_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObstacleRotator_Statics::Class_MetaDataParams), Z_Construct_UClass_UObstacleRotator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObstacleRotator()
{
	if (!Z_Registration_Info_UClass_UObstacleRotator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObstacleRotator.OuterSingleton, Z_Construct_UClass_UObstacleRotator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObstacleRotator.OuterSingleton;
}
template<> STARTERPROJECT_API UClass* StaticClass<UObstacleRotator>()
{
	return UObstacleRotator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObstacleRotator);
UObstacleRotator::~UObstacleRotator() {}
// End Class UObstacleRotator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_ObstacleRotator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObstacleRotator, UObstacleRotator::StaticClass, TEXT("UObstacleRotator"), &Z_Registration_Info_UClass_UObstacleRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObstacleRotator), 835231125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_ObstacleRotator_h_2382193603(TEXT("/Script/StarterProject"),
	Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_ObstacleRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_ObstacleRotator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
