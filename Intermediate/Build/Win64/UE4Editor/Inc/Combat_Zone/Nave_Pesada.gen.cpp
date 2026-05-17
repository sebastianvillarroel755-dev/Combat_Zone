// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Zone/Public/Nave_Pesada.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Pesada() {}
// Cross Module References
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ANave_Pesada_NoRegister();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ANave_Pesada();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigosAnormales_();
	UPackage* Z_Construct_UPackage__Script_Combat_Zone();
// End Cross Module References
	void ANave_Pesada::StaticRegisterNativesANave_Pesada()
	{
	}
	UClass* Z_Construct_UClass_ANave_Pesada_NoRegister()
	{
		return ANave_Pesada::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Pesada_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Pesada_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigosAnormales_,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Pesada_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// CLASE HIJA: Nave pesada ? aplica HERENCIA\n// Lenta pero dispara proyectiles mas espaciados\n// POLIMORFISMO: se mueve directo sin oscilar\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Nave_Pesada.h" },
		{ "ModuleRelativePath", "Public/Nave_Pesada.h" },
		{ "ToolTip", "CLASE HIJA: Nave pesada ? aplica HERENCIA\nLenta pero dispara proyectiles mas espaciados\nPOLIMORFISMO: se mueve directo sin oscilar" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Pesada_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Pesada>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Pesada_Statics::ClassParams = {
		&ANave_Pesada::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Pesada_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Pesada_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Pesada()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Pesada_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Pesada, 2148520169);
	template<> COMBAT_ZONE_API UClass* StaticClass<ANave_Pesada>()
	{
		return ANave_Pesada::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Pesada(Z_Construct_UClass_ANave_Pesada, &ANave_Pesada::StaticClass, TEXT("/Script/Combat_Zone"), TEXT("ANave_Pesada"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Pesada);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
