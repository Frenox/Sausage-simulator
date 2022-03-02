// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sausage_Simulator/PlayerCam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCam() {}
// Cross Module References
	SAUSAGE_SIMULATOR_API UClass* Z_Construct_UClass_APlayerCam_NoRegister();
	SAUSAGE_SIMULATOR_API UClass* Z_Construct_UClass_APlayerCam();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Sausage_Simulator();
// End Cross Module References
	void APlayerCam::StaticRegisterNativesAPlayerCam()
	{
	}
	UClass* Z_Construct_UClass_APlayerCam_NoRegister()
	{
		return APlayerCam::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Sausage_Simulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCam_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCam.h" },
		{ "ModuleRelativePath", "PlayerCam.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCam_Statics::ClassParams = {
		&APlayerCam::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlayerCam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCam, 1876898028);
	template<> SAUSAGE_SIMULATOR_API UClass* StaticClass<APlayerCam>()
	{
		return APlayerCam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCam(Z_Construct_UClass_APlayerCam, &APlayerCam::StaticClass, TEXT("/Script/Sausage_Simulator"), TEXT("APlayerCam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
