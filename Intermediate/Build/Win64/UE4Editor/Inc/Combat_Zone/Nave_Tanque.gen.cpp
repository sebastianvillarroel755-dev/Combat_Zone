// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Zone/Public/Nave_Tanque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Tanque() {}
// Cross Module References
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ANave_Tanque_NoRegister();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_ANave_Tanque();
	COMBAT_ZONE_API UClass* Z_Construct_UClass_AEnemigos_Eespeciales();
	UPackage* Z_Construct_UPackage__Script_Combat_Zone();
// End Cross Module References
	void ANave_Tanque::StaticRegisterNativesANave_Tanque()
	{
	}
	UClass* Z_Construct_UClass_ANave_Tanque_NoRegister()
	{
		return ANave_Tanque::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Tanque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Tanque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigos_Eespeciales,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Zone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Tanque_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nave_Tanque.h" },
		{ "ModuleRelativePath", "Public/Nave_Tanque.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Tanque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Tanque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Tanque_Statics::ClassParams = {
		&ANave_Tanque::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Tanque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Tanque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Tanque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Tanque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Tanque, 3475697670);
	template<> COMBAT_ZONE_API UClass* StaticClass<ANave_Tanque>()
	{
		return ANave_Tanque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Tanque(Z_Construct_UClass_ANave_Tanque, &ANave_Tanque::StaticClass, TEXT("/Script/Combat_Zone"), TEXT("ANave_Tanque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Tanque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
