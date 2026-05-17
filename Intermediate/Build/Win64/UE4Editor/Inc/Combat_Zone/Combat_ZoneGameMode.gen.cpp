// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Zone/Combat_ZoneGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombat_ZoneGameMode() {}
// Cross Module References
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ACombat_ZoneGameMode_NoRegister();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ACombat_ZoneGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Combat_Zone();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigosAnormales__NoRegister();
// End Cross Module References
	void ACombat_ZoneGameMode::StaticRegisterNativesACombat_ZoneGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACombat_ZoneGameMode_NoRegister()
	{
		return ACombat_ZoneGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACombat_ZoneGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClasesEnemigos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClasesEnemigos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClasesEnemigos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombat_ZoneGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombat_ZoneGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// GameMode principal del juego\n// Spawna enemigos aleatorios cada cierto tiempo\n// Los guarda en el contenedor TArray\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Combat_ZoneGameMode.h" },
		{ "ModuleRelativePath", "Combat_ZoneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode principal del juego\nSpawna enemigos aleatorios cada cierto tiempo\nLos guarda en el contenedor TArray" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_ClasesEnemigos_Inner = { "ClasesEnemigos", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemigosAnormales__NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_ClasesEnemigos_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "// Tipos de naves disponibles para spawnear\n" },
		{ "ModuleRelativePath", "Combat_ZoneGameMode.h" },
		{ "ToolTip", "Tipos de naves disponibles para spawnear" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_ClasesEnemigos = { "ClasesEnemigos", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombat_ZoneGameMode, ClasesEnemigos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_ClasesEnemigos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_ClasesEnemigos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_TiempoSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "// Cada cuantos segundos aparece un enemigo nuevo\n" },
		{ "ModuleRelativePath", "Combat_ZoneGameMode.h" },
		{ "ToolTip", "Cada cuantos segundos aparece un enemigo nuevo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_TiempoSpawn = { "TiempoSpawn", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombat_ZoneGameMode, TiempoSpawn), METADATA_PARAMS(Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_TiempoSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_TiempoSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombat_ZoneGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_ClasesEnemigos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_ClasesEnemigos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombat_ZoneGameMode_Statics::NewProp_TiempoSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombat_ZoneGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombat_ZoneGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACombat_ZoneGameMode_Statics::ClassParams = {
		&ACombat_ZoneGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACombat_ZoneGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACombat_ZoneGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACombat_ZoneGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACombat_ZoneGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACombat_ZoneGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACombat_ZoneGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACombat_ZoneGameMode, 347147780);
	template<> COMBAT_ZONE_API UClass* StaticClass<ACombat_ZoneGameMode>()
	{
		return ACombat_ZoneGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACombat_ZoneGameMode(Z_Construct_UClass_ACombat_ZoneGameMode, &ACombat_ZoneGameMode::StaticClass, TEXT("/Script/Combat_Zone"), TEXT("ACombat_ZoneGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombat_ZoneGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
