// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Zone/Public/Nave_Liviana.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Liviana() {}
// Cross Module References
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ANave_Liviana_NoRegister();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ANave_Liviana();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigosAnormales_();
	UPackage* Z_Construct_UPackage__Script_Combat_Zone();
// End Cross Module References
	void ANave_Liviana::StaticRegisterNativesANave_Liviana()
	{
	}
	UClass* Z_Construct_UClass_ANave_Liviana_NoRegister()
	{
		return ANave_Liviana::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Liviana_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Liviana_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigosAnormales_,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Liviana_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// CLASE HIJA: Nave liviana ? aplica HERENCIA\n// La mas rapida, dispara muy seguido pero es fragil\n// POLIMORFISMO: MovimientoAleatorio mas agresivo con cambios rapidos\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Nave_Liviana.h" },
		{ "ModuleRelativePath", "Public/Nave_Liviana.h" },
		{ "ToolTip", "CLASE HIJA: Nave liviana ? aplica HERENCIA\nLa mas rapida, dispara muy seguido pero es fragil\nPOLIMORFISMO: MovimientoAleatorio mas agresivo con cambios rapidos" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Liviana_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Liviana>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Liviana_Statics::ClassParams = {
		&ANave_Liviana::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Liviana_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Liviana_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Liviana()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Liviana_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Liviana, 1612872512);
	template<> COMBAT_ZONE_API UClass* StaticClass<ANave_Liviana>()
	{
		return ANave_Liviana::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Liviana(Z_Construct_UClass_ANave_Liviana, &ANave_Liviana::StaticClass, TEXT("/Script/Combat_Zone"), TEXT("ANave_Liviana"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Liviana);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
