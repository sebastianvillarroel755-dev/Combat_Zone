// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Zone/Public/Enemigos_Eespeciales.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigos_Eespeciales() {}
// Cross Module References
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigos_Eespeciales_NoRegister();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigos_Eespeciales();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigo_BaseGeneral();
	UPackage* Z_Construct_UPackage__Script_Combat_Zone();
// End Cross Module References
	void AEnemigos_Eespeciales::StaticRegisterNativesAEnemigos_Eespeciales()
	{
	}
	UClass* Z_Construct_UClass_AEnemigos_Eespeciales_NoRegister()
	{
		return AEnemigos_Eespeciales::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigos_Eespeciales_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigos_Eespeciales_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo_BaseGeneral,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigos_Eespeciales_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemigos_Eespeciales.h" },
		{ "ModuleRelativePath", "Public/Enemigos_Eespeciales.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigos_Eespeciales_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigos_Eespeciales>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigos_Eespeciales_Statics::ClassParams = {
		&AEnemigos_Eespeciales::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigos_Eespeciales_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigos_Eespeciales_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigos_Eespeciales()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigos_Eespeciales_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigos_Eespeciales, 782338118);
	template<> COMBAT_ZONE_API UClass* StaticClass<AEnemigos_Eespeciales>()
	{
		return AEnemigos_Eespeciales::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigos_Eespeciales(Z_Construct_UClass_AEnemigos_Eespeciales, &AEnemigos_Eespeciales::StaticClass, TEXT("/Script/Combat_Zone"), TEXT("AEnemigos_Eespeciales"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigos_Eespeciales);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
