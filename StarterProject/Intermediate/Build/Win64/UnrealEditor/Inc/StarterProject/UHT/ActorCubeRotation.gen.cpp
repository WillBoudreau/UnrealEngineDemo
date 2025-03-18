// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarterProject/ActorCubeRotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorCubeRotation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STARTERPROJECT_API UClass* Z_Construct_UClass_UActorCubeRotation();
STARTERPROJECT_API UClass* Z_Construct_UClass_UActorCubeRotation_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarterProject();
// End Cross Module References

// Begin Class UActorCubeRotation
void UActorCubeRotation::StaticRegisterNativesUActorCubeRotation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorCubeRotation);
UClass* Z_Construct_UClass_UActorCubeRotation_NoRegister()
{
	return UActorCubeRotation::StaticClass();
}
struct Z_Construct_UClass_UActorCubeRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorCubeRotation.h" },
		{ "ModuleRelativePath", "ActorCubeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ActorCubeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ActorCubeRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ActorCubeRotation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorCubeRotation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorCubeRotation_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorCubeRotation, PitchValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchValue_MetaData), NewProp_PitchValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorCubeRotation_Statics::NewProp_YawValue = { "YawValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorCubeRotation, YawValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawValue_MetaData), NewProp_YawValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorCubeRotation_Statics::NewProp_RollValue = { "RollValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorCubeRotation, RollValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollValue_MetaData), NewProp_RollValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorCubeRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorCubeRotation_Statics::NewProp_PitchValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorCubeRotation_Statics::NewProp_YawValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorCubeRotation_Statics::NewProp_RollValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorCubeRotation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActorCubeRotation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StarterProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorCubeRotation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorCubeRotation_Statics::ClassParams = {
	&UActorCubeRotation::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActorCubeRotation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorCubeRotation_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorCubeRotation_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorCubeRotation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorCubeRotation()
{
	if (!Z_Registration_Info_UClass_UActorCubeRotation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorCubeRotation.OuterSingleton, Z_Construct_UClass_UActorCubeRotation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorCubeRotation.OuterSingleton;
}
template<> STARTERPROJECT_API UClass* StaticClass<UActorCubeRotation>()
{
	return UActorCubeRotation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorCubeRotation);
UActorCubeRotation::~UActorCubeRotation() {}
// End Class UActorCubeRotation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_ActorCubeRotation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorCubeRotation, UActorCubeRotation::StaticClass, TEXT("UActorCubeRotation"), &Z_Registration_Info_UClass_UActorCubeRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorCubeRotation), 1961228933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_ActorCubeRotation_h_4115083892(TEXT("/Script/StarterProject"),
	Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_ActorCubeRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_ActorCubeRotation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
