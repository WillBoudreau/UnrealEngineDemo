// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarterProject/Public/MyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
STARTERPROJECT_API UClass* Z_Construct_UClass_AMyActor();
STARTERPROJECT_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarterProject();
// End Cross Module References

// Begin Class AMyActor
void AMyActor::StaticRegisterNativesAMyActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor);
UClass* Z_Construct_UClass_AMyActor_NoRegister()
{
	return AMyActor::StaticClass();
}
struct Z_Construct_UClass_AMyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[] = {
		{ "Category", "Please work" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, PitchValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchValue_MetaData), NewProp_PitchValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_YawValue = { "YawValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, YawValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawValue_MetaData), NewProp_YawValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_RollValue = { "RollValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, RollValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollValue_MetaData), NewProp_RollValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_PitchValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_YawValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_RollValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_StarterProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
	&AMyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor()
{
	if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
}
template<> STARTERPROJECT_API UClass* StaticClass<AMyActor>()
{
	return AMyActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
AMyActor::~AMyActor() {}
// End Class AMyActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_MyActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 3093363057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_MyActor_h_3165814718(TEXT("/Script/StarterProject"),
	Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_MyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_MyActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
