// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBAT_ZONE_Combat_ZonePawn_generated_h
#error "Combat_ZonePawn.generated.h already included, missing '#pragma once' in Combat_ZonePawn.h"
#endif
#define COMBAT_ZONE_Combat_ZonePawn_generated_h

#define Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_SPARSE_DATA
#define Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_RPC_WRAPPERS
#define Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombat_ZonePawn(); \
	friend struct Z_Construct_UClass_ACombat_ZonePawn_Statics; \
public: \
	DECLARE_CLASS(ACombat_ZonePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat_Zone"), NO_API) \
	DECLARE_SERIALIZER(ACombat_ZonePawn)


#define Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACombat_ZonePawn(); \
	friend struct Z_Construct_UClass_ACombat_ZonePawn_Statics; \
public: \
	DECLARE_CLASS(ACombat_ZonePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat_Zone"), NO_API) \
	DECLARE_SERIALIZER(ACombat_ZonePawn)


#define Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombat_ZonePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombat_ZonePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombat_ZonePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombat_ZonePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombat_ZonePawn(ACombat_ZonePawn&&); \
	NO_API ACombat_ZonePawn(const ACombat_ZonePawn&); \
public:


#define Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombat_ZonePawn(ACombat_ZonePawn&&); \
	NO_API ACombat_ZonePawn(const ACombat_ZonePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombat_ZonePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombat_ZonePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombat_ZonePawn)


#define Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(ACombat_ZonePawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ACombat_ZonePawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACombat_ZonePawn, CameraBoom); }


#define Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_9_PROLOG
#define Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_SPARSE_DATA \
	Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_RPC_WRAPPERS \
	Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_INCLASS \
	Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_SPARSE_DATA \
	Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_INCLASS_NO_PURE_DECLS \
	Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBAT_ZONE_API UClass* StaticClass<class ACombat_ZonePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Combat_Zone_Source_Combat_Zone_Combat_ZonePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
