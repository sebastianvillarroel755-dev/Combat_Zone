// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Zone/Public/Nave_Normal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Normal() {}
// Cross Module References
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ANave_Normal_NoRegister();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ANave_Normal();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigosAnormales_();
	UPackage* Z_Construct_UPackage__Script_Combat_Zone();
// End Cross Module References
	void ANave_Normal::StaticRegisterNativesANave_Normal()
	{
	}
	UClass* Z_Construct_UClass_ANave_Normal_NoRegister()
	{
		return ANave_Normal::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Normal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Normal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigosAnormales_,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Normal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// CLASE HIJA: Nave normal ? aplica HERENCIA\n// Estadisticas equilibradas, usa el movimiento del padre\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Nave_Normal.h" },
		{ "ModuleRelativePath", "Public/Nave_Normal.h" },
		{ "ToolTip", "CLASE HIJA: Nave normal ? aplica HERENCIA\nEstadisticas equilibradas, usa el movimiento del padre" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Normal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Normal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Normal_Statics::ClassParams = {
		&ANave_Normal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Normal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Normal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Normal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Normal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Normal, 781316110);
	template<> COMBAT_ZONE_API UClass* StaticClass<ANave_Normal>()
	{
		return ANave_Normal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Normal(Z_Construct_UClass_ANave_Normal, &ANave_Normal::StaticClass, TEXT("/Script/Combat_Zone"), TEXT("ANave_Normal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Normal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
