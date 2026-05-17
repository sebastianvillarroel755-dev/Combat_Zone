// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Zone/Public/Enemigo_BaseGeneral.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo_BaseGeneral() {}
// Cross Module References
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigo_BaseGeneral_NoRegister();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigo_BaseGeneral();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Combat_Zone();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ACombat_ZoneProjectile_NoRegister();
// End Cross Module References
	void AEnemigo_BaseGeneral::StaticRegisterNativesAEnemigo_BaseGeneral()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo_BaseGeneral_NoRegister()
	{
		return AEnemigo_BaseGeneral::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo_BaseGeneral_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshEnemigo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshEnemigo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadMovimiento;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaseProyectil_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClaseProyectil;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// CLASE BASE GENERAL de todos los enemigos del juego\n// De aqui hereda AEnemigosAnormales_ que a su vez genera las naves\n// Contiene movimiento libre y disparo basico\n" },
		{ "IncludePath", "Enemigo_BaseGeneral.h" },
		{ "ModuleRelativePath", "Public/Enemigo_BaseGeneral.h" },
		{ "ToolTip", "CLASE BASE GENERAL de todos los enemigos del juego\nDe aqui hereda AEnemigosAnormales_ que a su vez genera las naves\nContiene movimiento libre y disparo basico" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_MeshEnemigo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "// Figura 3D visible del enemigo\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemigo_BaseGeneral.h" },
		{ "ToolTip", "Figura 3D visible del enemigo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_MeshEnemigo = { "MeshEnemigo", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo_BaseGeneral, MeshEnemigo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_MeshEnemigo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_MeshEnemigo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_VelocidadMovimiento_MetaData[] = {
		{ "Category", "Configuracion" },
		{ "Comment", "// Velocidad de movimiento libre\n" },
		{ "ModuleRelativePath", "Public/Enemigo_BaseGeneral.h" },
		{ "ToolTip", "Velocidad de movimiento libre" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_VelocidadMovimiento = { "VelocidadMovimiento", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo_BaseGeneral, VelocidadMovimiento), METADATA_PARAMS(Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_VelocidadMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_VelocidadMovimiento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_ClaseProyectil_MetaData[] = {
		{ "Category", "Disparo" },
		{ "Comment", "// Clase del proyectil que dispara\n" },
		{ "ModuleRelativePath", "Public/Enemigo_BaseGeneral.h" },
		{ "ToolTip", "Clase del proyectil que dispara" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_ClaseProyectil = { "ClaseProyectil", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo_BaseGeneral, ClaseProyectil), Z_Construct_UClass_ACombat_ZoneProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_ClaseProyectil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_ClaseProyectil_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_MeshEnemigo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_VelocidadMovimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::NewProp_ClaseProyectil,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo_BaseGeneral>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::ClassParams = {
		&AEnemigo_BaseGeneral::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo_BaseGeneral()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo_BaseGeneral_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo_BaseGeneral, 2535962099);
	template<> COMBAT_ZONE_API UClass* StaticClass<AEnemigo_BaseGeneral>()
	{
		return AEnemigo_BaseGeneral::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo_BaseGeneral(Z_Construct_UClass_AEnemigo_BaseGeneral, &AEnemigo_BaseGeneral::StaticClass, TEXT("/Script/Combat_Zone"), TEXT("AEnemigo_BaseGeneral"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo_BaseGeneral);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
