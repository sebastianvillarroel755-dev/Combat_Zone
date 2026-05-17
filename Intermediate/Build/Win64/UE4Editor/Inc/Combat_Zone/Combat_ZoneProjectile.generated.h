// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef COMBAT_ZONE_Combat_ZoneProjectile_generated_h
#error "Combat_ZoneProjectile.generated.h already included, missing '#pragma once' in Combat_ZoneProjectile.h"
#endif
#define COMBAT_ZONE_Combat_ZoneProjectile_generated_h

#define Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_SPARSE_DATA
#define Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombat_ZoneProjectile(); \
	friend struct Z_Construct_UClass_ACombat_ZoneProjectile_Statics; \
public: \
	DECLARE_CLASS(ACombat_ZoneProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat_Zone"), NO_API) \
	DECLARE_SERIALIZER(ACombat_ZoneProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACombat_ZoneProjectile(); \
	friend struct Z_Construct_UClass_ACombat_ZoneProjectile_Statics; \
public: \
	DECLARE_CLASS(ACombat_ZoneProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat_Zone"), NO_API) \
	DECLARE_SERIALIZER(ACombat_ZoneProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombat_ZoneProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombat_ZoneProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombat_ZoneProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombat_ZoneProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombat_ZoneProjectile(ACombat_ZoneProjectile&&); \
	NO_API ACombat_ZoneProjectile(const ACombat_ZoneProjectile&); \
public:


#define Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombat_ZoneProjectile(ACombat_ZoneProjectile&&); \
	NO_API ACombat_ZoneProjectile(const ACombat_ZoneProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombat_ZoneProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombat_ZoneProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombat_ZoneProjectile)


#define Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ACombat_ZoneProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACombat_ZoneProjectile, ProjectileMovement); }


#define Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_12_PROLOG
#define Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_SPARSE_DATA \
	Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_RPC_WRAPPERS \
	Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_INCLASS \
	Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_SPARSE_DATA \
	Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBAT_ZONE_API UClass* StaticClass<class ACombat_ZoneProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Combat_Zone_Source_Combat_Zone_Combat_ZoneProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
