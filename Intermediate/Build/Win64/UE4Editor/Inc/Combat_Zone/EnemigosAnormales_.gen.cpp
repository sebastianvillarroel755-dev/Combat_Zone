// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Zone/Public/EnemigosAnormales_.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigosAnormales_() {}
// Cross Module References
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigosAnormales__NoRegister();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigosAnormales_();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Combat_Zone();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ACombat_ZoneProjectile_NoRegister();
// End Cross Module References
	void AEnemigosAnormales_::StaticRegisterNativesAEnemigosAnormales_()
	{
	}
	UClass* Z_Construct_UClass_AEnemigosAnormales__NoRegister()
	{
		return AEnemigosAnormales_::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigosAnormales__Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaseProyectil_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClaseProyectil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadMovimiento;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoDisparo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoDisparo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigosAnormales__Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigosAnormales__Statics::Class_MetaDataParams[] = {
		{ "Comment", "// CLASE PADRE de las naves normales\n// De aqui heredan Nave_Liviana, Nave_Normal y Nave_Pesada\n// Se mueve libremente y dispara directo al jugador\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigosAnormales_.h" },
		{ "ModuleRelativePath", "Public/EnemigosAnormales_.h" },
		{ "ToolTip", "CLASE PADRE de las naves normales\nDe aqui heredan Nave_Liviana, Nave_Normal y Nave_Pesada\nSe mueve libremente y dispara directo al jugador" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_NaveMesh_MetaData[] = {
		{ "Category", "Visual" },
		{ "Comment", "// Figura 3D visible de la nave\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemigosAnormales_.h" },
		{ "ToolTip", "Figura 3D visible de la nave" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_NaveMesh = { "NaveMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigosAnormales_, NaveMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_NaveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_NaveMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_ClaseProyectil_MetaData[] = {
		{ "Category", "Disparo" },
		{ "ModuleRelativePath", "Public/EnemigosAnormales_.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_ClaseProyectil = { "ClaseProyectil", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigosAnormales_, ClaseProyectil), Z_Construct_UClass_ACombat_ZoneProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_ClaseProyectil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_ClaseProyectil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_VelocidadMovimiento_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "Public/EnemigosAnormales_.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_VelocidadMovimiento = { "VelocidadMovimiento", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigosAnormales_, VelocidadMovimiento), METADATA_PARAMS(Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_VelocidadMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_VelocidadMovimiento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_TiempoDisparo_MetaData[] = {
		{ "Category", "Disparo" },
		{ "ModuleRelativePath", "Public/EnemigosAnormales_.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_TiempoDisparo = { "TiempoDisparo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigosAnormales_, TiempoDisparo), METADATA_PARAMS(Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_TiempoDisparo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_TiempoDisparo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigosAnormales__Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_NaveMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_ClaseProyectil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_VelocidadMovimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigosAnormales__Statics::NewProp_TiempoDisparo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigosAnormales__Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigosAnormales_>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigosAnormales__Statics::ClassParams = {
		&AEnemigosAnormales_::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigosAnormales__Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigosAnormales__Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigosAnormales__Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigosAnormales__Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigosAnormales_()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigosAnormales__Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigosAnormales_, 907059139);
	template<> COMBAT_ZONE_API UClass* StaticClass<AEnemigosAnormales_>()
	{
		return AEnemigosAnormales_::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigosAnormales_(Z_Construct_UClass_AEnemigosAnormales_, &AEnemigosAnormales_::StaticClass, TEXT("/Script/Combat_Zone"), TEXT("AEnemigosAnormales_"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigosAnormales_);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
