// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicsThrusterComponent;
class USpringArmComponent;
class UCameraComponent;
class UStaticMeshComponent;
#ifdef SMBCLONE_BallMovementComponent_generated_h
#error "BallMovementComponent.generated.h already included, missing '#pragma once' in BallMovementComponent.h"
#endif
#define SMBCLONE_BallMovementComponent_generated_h

#define SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRightScreenTilt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DesiredThrustStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RightScreenTilt(Z_Param_DesiredThrustStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBackwardScreenTilt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DesiredThrustStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BackwardScreenTilt(Z_Param_DesiredThrustStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForwardScreenTilt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DesiredThrustStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForwardScreenTilt(Z_Param_DesiredThrustStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateThruster) \
	{ \
		P_GET_OBJECT(UPhysicsThrusterComponent,Z_Param_Thruster); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateThruster(Z_Param_Thruster); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateThruster) \
	{ \
		P_GET_OBJECT(UPhysicsThrusterComponent,Z_Param_Thruster); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateThruster(Z_Param_Thruster); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UPhysicsThrusterComponent,Z_Param_ForwardThrusterToSet); \
		P_GET_OBJECT(UPhysicsThrusterComponent,Z_Param_RightThrusterToSet); \
		P_GET_OBJECT(USpringArmComponent,Z_Param_SpringArmToSet); \
		P_GET_OBJECT(UCameraComponent,Z_Param_CameraToSet); \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_SkyBoxToSet); \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_BallToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_ForwardThrusterToSet,Z_Param_RightThrusterToSet,Z_Param_SpringArmToSet,Z_Param_CameraToSet,Z_Param_SkyBoxToSet,Z_Param_BallToSet); \
		P_NATIVE_END; \
	}


#define SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRightScreenTilt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DesiredThrustStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RightScreenTilt(Z_Param_DesiredThrustStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBackwardScreenTilt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DesiredThrustStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BackwardScreenTilt(Z_Param_DesiredThrustStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForwardScreenTilt) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DesiredThrustStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForwardScreenTilt(Z_Param_DesiredThrustStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateThruster) \
	{ \
		P_GET_OBJECT(UPhysicsThrusterComponent,Z_Param_Thruster); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateThruster(Z_Param_Thruster); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateThruster) \
	{ \
		P_GET_OBJECT(UPhysicsThrusterComponent,Z_Param_Thruster); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateThruster(Z_Param_Thruster); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UPhysicsThrusterComponent,Z_Param_ForwardThrusterToSet); \
		P_GET_OBJECT(UPhysicsThrusterComponent,Z_Param_RightThrusterToSet); \
		P_GET_OBJECT(USpringArmComponent,Z_Param_SpringArmToSet); \
		P_GET_OBJECT(UCameraComponent,Z_Param_CameraToSet); \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_SkyBoxToSet); \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_BallToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_ForwardThrusterToSet,Z_Param_RightThrusterToSet,Z_Param_SpringArmToSet,Z_Param_CameraToSet,Z_Param_SkyBoxToSet,Z_Param_BallToSet); \
		P_NATIVE_END; \
	}


#define SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBallMovementComponent(); \
	friend SMBCLONE_API class UClass* Z_Construct_UClass_UBallMovementComponent(); \
public: \
	DECLARE_CLASS(UBallMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SMBClone"), NO_API) \
	DECLARE_SERIALIZER(UBallMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBallMovementComponent(); \
	friend SMBCLONE_API class UClass* Z_Construct_UClass_UBallMovementComponent(); \
public: \
	DECLARE_CLASS(UBallMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SMBClone"), NO_API) \
	DECLARE_SERIALIZER(UBallMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBallMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBallMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBallMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBallMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBallMovementComponent(UBallMovementComponent&&); \
	NO_API UBallMovementComponent(const UBallMovementComponent&); \
public:


#define SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBallMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBallMovementComponent(UBallMovementComponent&&); \
	NO_API UBallMovementComponent(const UBallMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBallMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBallMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBallMovementComponent)


#define SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxForwardThrustStrength() { return STRUCT_OFFSET(UBallMovementComponent, MaxForwardThrustStrength); } \
	FORCEINLINE static uint32 __PPO__MaxBackwardThrustStrength() { return STRUCT_OFFSET(UBallMovementComponent, MaxBackwardThrustStrength); } \
	FORCEINLINE static uint32 __PPO__MaxRightThrustStrength() { return STRUCT_OFFSET(UBallMovementComponent, MaxRightThrustStrength); } \
	FORCEINLINE static uint32 __PPO__MaxScreenTilt() { return STRUCT_OFFSET(UBallMovementComponent, MaxScreenTilt); } \
	FORCEINLINE static uint32 __PPO__MaxScreenRoll() { return STRUCT_OFFSET(UBallMovementComponent, MaxScreenRoll); }


#define SMBClone_Source_SMBClone_Public_BallMovementComponent_h_18_PROLOG
#define SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_RPC_WRAPPERS \
	SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_INCLASS \
	SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_INCLASS_NO_PURE_DECLS \
	SMBClone_Source_SMBClone_Public_BallMovementComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SMBClone_Source_SMBClone_Public_BallMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
