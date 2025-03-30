// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarterProject/Public/NewActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewActorComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STARTERPROJECT_API UClass* Z_Construct_UClass_UNewActorComponent();
STARTERPROJECT_API UClass* Z_Construct_UClass_UNewActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarterProject();
// End Cross Module References

// Begin Class UNewActorComponent
void UNewActorComponent::StaticRegisterNativesUNewActorComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewActorComponent);
UClass* Z_Construct_UClass_UNewActorComponent_NoRegister()
{
	return UNewActorComponent::StaticClass();
}
struct Z_Construct_UClass_UNewActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NewActorComponent.h" },
		{ "ModuleRelativePath", "Public/NewActorComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNewActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StarterProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewActorComponent_Statics::ClassParams = {
	&UNewActorComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNewActorComponent()
{
	if (!Z_Registration_Info_UClass_UNewActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewActorComponent.OuterSingleton, Z_Construct_UClass_UNewActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNewActorComponent.OuterSingleton;
}
template<> STARTERPROJECT_API UClass* StaticClass<UNewActorComponent>()
{
	return UNewActorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNewActorComponent);
UNewActorComponent::~UNewActorComponent() {}
// End Class UNewActorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_NewActorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNewActorComponent, UNewActorComponent::StaticClass, TEXT("UNewActorComponent"), &Z_Registration_Info_UClass_UNewActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewActorComponent), 1198102320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_NewActorComponent_h_3569040021(TEXT("/Script/StarterProject"),
	Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_NewActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_NewActorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
