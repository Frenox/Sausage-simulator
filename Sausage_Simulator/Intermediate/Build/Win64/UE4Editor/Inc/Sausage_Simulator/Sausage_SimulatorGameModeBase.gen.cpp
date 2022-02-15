// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sausage_Simulator/Sausage_SimulatorGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSausage_SimulatorGameModeBase() {}
// Cross Module References
	SAUSAGE_SIMULATOR_API UClass* Z_Construct_UClass_ASausage_SimulatorGameModeBase_NoRegister();
	SAUSAGE_SIMULATOR_API UClass* Z_Construct_UClass_ASausage_SimulatorGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Sausage_Simulator();
// End Cross Module References
	void ASausage_SimulatorGameModeBase::StaticRegisterNativesASausage_SimulatorGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASausage_SimulatorGameModeBase_NoRegister()
	{
		return ASausage_SimulatorGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASausage_SimulatorGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASausage_SimulatorGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sausage_Simulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASausage_SimulatorGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Sausage_SimulatorGameModeBase.h" },
		{ "ModuleRelativePath", "Sausage_SimulatorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASausage_SimulatorGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASausage_SimulatorGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASausage_SimulatorGameModeBase_Statics::ClassParams = {
		&ASausage_SimulatorGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASausage_SimulatorGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASausage_SimulatorGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASausage_SimulatorGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASausage_SimulatorGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASausage_SimulatorGameModeBase, 2412255320);
	template<> SAUSAGE_SIMULATOR_API UClass* StaticClass<ASausage_SimulatorGameModeBase>()
	{
		return ASausage_SimulatorGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASausage_SimulatorGameModeBase(Z_Construct_UClass_ASausage_SimulatorGameModeBase, &ASausage_SimulatorGameModeBase::StaticClass, TEXT("/Script/Sausage_Simulator"), TEXT("ASausage_SimulatorGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASausage_SimulatorGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
