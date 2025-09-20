// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks_vs_Zombies/TanksGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTanksGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TANKS_VS_ZOMBIES_API UClass* Z_Construct_UClass_ATanksGameMode();
TANKS_VS_ZOMBIES_API UClass* Z_Construct_UClass_ATanksGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tanks_vs_Zombies();
// End Cross Module References

// Begin Class ATanksGameMode
void ATanksGameMode::StaticRegisterNativesATanksGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATanksGameMode);
UClass* Z_Construct_UClass_ATanksGameMode_NoRegister()
{
	return ATanksGameMode::StaticClass();
}
struct Z_Construct_UClass_ATanksGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TanksGameMode.h" },
		{ "ModuleRelativePath", "TanksGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATanksGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATanksGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Tanks_vs_Zombies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATanksGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATanksGameMode_Statics::ClassParams = {
	&ATanksGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATanksGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATanksGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATanksGameMode()
{
	if (!Z_Registration_Info_UClass_ATanksGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATanksGameMode.OuterSingleton, Z_Construct_UClass_ATanksGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATanksGameMode.OuterSingleton;
}
template<> TANKS_VS_ZOMBIES_API UClass* StaticClass<ATanksGameMode>()
{
	return ATanksGameMode::StaticClass();
}
ATanksGameMode::ATanksGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATanksGameMode);
ATanksGameMode::~ATanksGameMode() {}
// End Class ATanksGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_github_Tanks_vs__Zombies_Tanks_vs_Zombies_Source_Tanks_vs_Zombies_TanksGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATanksGameMode, ATanksGameMode::StaticClass, TEXT("ATanksGameMode"), &Z_Registration_Info_UClass_ATanksGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATanksGameMode), 2393022458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_github_Tanks_vs__Zombies_Tanks_vs_Zombies_Source_Tanks_vs_Zombies_TanksGameMode_h_536627600(TEXT("/Script/Tanks_vs_Zombies"),
	Z_CompiledInDeferFile_FID_projects_github_Tanks_vs__Zombies_Tanks_vs_Zombies_Source_Tanks_vs_Zombies_TanksGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_github_Tanks_vs__Zombies_Tanks_vs_Zombies_Source_Tanks_vs_Zombies_TanksGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
