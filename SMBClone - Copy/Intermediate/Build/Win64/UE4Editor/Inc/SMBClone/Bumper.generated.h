// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SMBCLONE_Bumper_generated_h
#error "Bumper.generated.h already included, missing '#pragma once' in Bumper.h"
#endif
#define SMBCLONE_Bumper_generated_h

#define SMBClone_Source_SMBClone_Public_Bumper_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SMBClone_Source_SMBClone_Public_Bumper_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SMBClone_Source_SMBClone_Public_Bumper_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABumper(); \
	friend SMBCLONE_API class UClass* Z_Construct_UClass_ABumper(); \
public: \
	DECLARE_CLASS(ABumper, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SMBClone"), NO_API) \
	DECLARE_SERIALIZER(ABumper) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SMBClone_Source_SMBClone_Public_Bumper_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABumper(); \
	friend SMBCLONE_API class UClass* Z_Construct_UClass_ABumper(); \
public: \
	DECLARE_CLASS(ABumper, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SMBClone"), NO_API) \
	DECLARE_SERIALIZER(ABumper) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SMBClone_Source_SMBClone_Public_Bumper_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABumper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABumper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABumper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABumper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABumper(ABumper&&); \
	NO_API ABumper(const ABumper&); \
public:


#define SMBClone_Source_SMBClone_Public_Bumper_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABumper(ABumper&&); \
	NO_API ABumper(const ABumper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABumper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABumper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABumper)


#define SMBClone_Source_SMBClone_Public_Bumper_h_14_PRIVATE_PROPERTY_OFFSET
#define SMBClone_Source_SMBClone_Public_Bumper_h_11_PROLOG
#define SMBClone_Source_SMBClone_Public_Bumper_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SMBClone_Source_SMBClone_Public_Bumper_h_14_PRIVATE_PROPERTY_OFFSET \
	SMBClone_Source_SMBClone_Public_Bumper_h_14_RPC_WRAPPERS \
	SMBClone_Source_SMBClone_Public_Bumper_h_14_INCLASS \
	SMBClone_Source_SMBClone_Public_Bumper_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SMBClone_Source_SMBClone_Public_Bumper_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SMBClone_Source_SMBClone_Public_Bumper_h_14_PRIVATE_PROPERTY_OFFSET \
	SMBClone_Source_SMBClone_Public_Bumper_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SMBClone_Source_SMBClone_Public_Bumper_h_14_INCLASS_NO_PURE_DECLS \
	SMBClone_Source_SMBClone_Public_Bumper_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SMBClone_Source_SMBClone_Public_Bumper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
