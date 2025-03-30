// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarterProject/Public/CharacterControllerClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterControllerClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
STARTERPROJECT_API UClass* Z_Construct_UClass_ACharacterControllerClass();
STARTERPROJECT_API UClass* Z_Construct_UClass_ACharacterControllerClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_StarterProject();
// End Cross Module References

// Begin Class ACharacterControllerClass
void ACharacterControllerClass::StaticRegisterNativesACharacterControllerClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterControllerClass);
UClass* Z_Construct_UClass_ACharacterControllerClass_NoRegister()
{
	return ACharacterControllerClass::StaticClass();
}
struct Z_Construct_UClass_ACharacterControllerClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterControllerClass.h" },
		{ "ModuleRelativePath", "Public/CharacterControllerClass.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterControllerClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACharacterControllerClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_StarterProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterControllerClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterControllerClass_Statics::ClassParams = {
	&ACharacterControllerClass::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterControllerClass_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterControllerClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterControllerClass()
{
	if (!Z_Registration_Info_UClass_ACharacterControllerClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterControllerClass.OuterSingleton, Z_Construct_UClass_ACharacterControllerClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterControllerClass.OuterSingleton;
}
template<> STARTERPROJECT_API UClass* StaticClass<ACharacterControllerClass>()
{
	return ACharacterControllerClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterControllerClass);
ACharacterControllerClass::~ACharacterControllerClass() {}
// End Class ACharacterControllerClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_CharacterControllerClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterControllerClass, ACharacterControllerClass::StaticClass, TEXT("ACharacterControllerClass"), &Z_Registration_Info_UClass_ACharacterControllerClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterControllerClass), 3547990959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_CharacterControllerClass_h_4125237508(TEXT("/Script/StarterProject"),
	Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_CharacterControllerClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_willi_OneDrive_Documents_GitHub_UnrealEngineDemo_FirstProject_StarterProject_Source_StarterProject_Public_CharacterControllerClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
