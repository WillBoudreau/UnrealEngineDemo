// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarterProject/Public/NewActorComponent1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewActorComponent1() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STARTERPROJECT_API UClass* Z_Construct_UClass_UNewActorComponent1();
STARTERPROJECT_API UClass* Z_Construct_UClass_UNewActorComponent1_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarterProject();
// End Cross Module References

// Begin Class UNewActorComponent1
void UNewActorComponent1::StaticRegisterNativesUNewActorComponent1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewActorComponent1);
UClass* Z_Construct_UClass_UNewActorComponent1_NoRegister()
{
	return UNewActorComponent1::StaticClass();
}
struct Z_Construct_UClass_UNewActorComponent1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NewActorComponent1.h" },
		{ "ModuleRelativePath", "Public/NewActorComponent1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewActorComponent1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNewActorComponent1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StarterProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewActorComponent1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewActorComponent1_Statics::ClassParams = {
	&UNewActorComponent1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewActorComponent1_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewActorComponent1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNewActorComponent1()
{
	if (!Z_Registration_Info_UClass_UNewActorComponent1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewActorComponent1.OuterSingleton, Z_Construct_UClass_UNewActorComponent1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNewActorComponent1.OuterSingleton;
}
template<> STARTERPROJECT_API UClass* StaticClass<UNewActorComponent1>()
{
	return UNewActorComponent1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNewActorComponent1);
UNewActorComponent1::~UNewActorComponent1() {}
// End Class UNewActorComponent1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_NewActorComponent1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNewActorComponent1, UNewActorComponent1::StaticClass, TEXT("UNewActorComponent1"), &Z_Registration_Info_UClass_UNewActorComponent1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewActorComponent1), 3302022981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_NewActorComponent1_h_410794764(TEXT("/Script/StarterProject"),
	Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_NewActorComponent1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_NewActorComponent1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
