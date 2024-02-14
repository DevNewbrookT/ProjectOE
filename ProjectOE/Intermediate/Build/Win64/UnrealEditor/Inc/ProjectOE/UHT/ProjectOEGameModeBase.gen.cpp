// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectOE/ProjectOEGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectOEGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJECTOE_API UClass* Z_Construct_UClass_AProjectOEGameModeBase();
	PROJECTOE_API UClass* Z_Construct_UClass_AProjectOEGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectOE();
// End Cross Module References
	void AProjectOEGameModeBase::StaticRegisterNativesAProjectOEGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectOEGameModeBase);
	UClass* Z_Construct_UClass_AProjectOEGameModeBase_NoRegister()
	{
		return AProjectOEGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProjectOEGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectOEGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectOE,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectOEGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectOEGameModeBase.h" },
		{ "ModuleRelativePath", "ProjectOEGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectOEGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectOEGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectOEGameModeBase_Statics::ClassParams = {
		&AProjectOEGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectOEGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectOEGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectOEGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AProjectOEGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectOEGameModeBase.OuterSingleton, Z_Construct_UClass_AProjectOEGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectOEGameModeBase.OuterSingleton;
	}
	template<> PROJECTOE_API UClass* StaticClass<AProjectOEGameModeBase>()
	{
		return AProjectOEGameModeBase::StaticClass();
	}
	AProjectOEGameModeBase::AProjectOEGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectOEGameModeBase);
	AProjectOEGameModeBase::~AProjectOEGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_games_Desktop_ProjectOE_ProjectOE_Source_ProjectOE_ProjectOEGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_games_Desktop_ProjectOE_ProjectOE_Source_ProjectOE_ProjectOEGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectOEGameModeBase, AProjectOEGameModeBase::StaticClass, TEXT("AProjectOEGameModeBase"), &Z_Registration_Info_UClass_AProjectOEGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectOEGameModeBase), 3982839502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_games_Desktop_ProjectOE_ProjectOE_Source_ProjectOE_ProjectOEGameModeBase_h_3141974192(TEXT("/Script/ProjectOE"),
		Z_CompiledInDeferFile_FID_Users_games_Desktop_ProjectOE_ProjectOE_Source_ProjectOE_ProjectOEGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_games_Desktop_ProjectOE_ProjectOE_Source_ProjectOE_ProjectOEGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
