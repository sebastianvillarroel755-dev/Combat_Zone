// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Zone/Public/Nave_Kamikaze.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Kamikaze() {}
// Cross Module References
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ANave_Kamikaze_NoRegister();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ANave_Kamikaze();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigos_Eespeciales();
	UPackage* Z_Construct_UPackage__Script_Combat_Zone();
// End Cross Module References
	void ANave_Kamikaze::StaticRegisterNativesANave_Kamikaze()
	{
	}
	UClass* Z_Construct_UClass_ANave_Kamikaze_NoRegister()
	{
		return ANave_Kamikaze::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Kamikaze_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Kamikaze_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigos_Eespeciales,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Kamikaze_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nave_Kamikaze.h" },
		{ "ModuleRelativePath", "Public/Nave_Kamikaze.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Kamikaze_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Kamikaze>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Kamikaze_Statics::ClassParams = {
		&ANave_Kamikaze::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Kamikaze_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Kamikaze_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Kamikaze()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Kamikaze_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Kamikaze, 3626649958);
	template<> COMBAT_ZONE_API UClass* StaticClass<ANave_Kamikaze>()
	{
		return ANave_Kamikaze::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Kamikaze(Z_Construct_UClass_ANave_Kamikaze, &ANave_Kamikaze::StaticClass, TEXT("/Script/Combat_Zone"), TEXT("ANave_Kamikaze"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Kamikaze);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
