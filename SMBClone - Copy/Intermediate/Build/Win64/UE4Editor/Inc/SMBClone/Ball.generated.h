// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef SMBCLONE_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define SMBCLONE_Ball_generated_h

#define SMBClone_Source_SMBClone_Public_Ball_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_StaticMeshToSet); \
		P_NATIVE_END; \
	}


#define SMBClone_Source_SMBClone_Public_Ball_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_StaticMeshToSet); \
		P_NATIVE_END; \
	}


#define SMBClone_Source_SMBClone_Public_Ball_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend SMBCLONE_API class UClass* Z_Construct_UClass_ABall(); \
public: \
	DECLARE_CLASS(ABall, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SMBClone"), NO_API) \
	DECLARE_SERIALIZER(ABall) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SMBClone_Source_SMBClone_Public_Ball_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend SMBCLONE_API class UClass* Z_Construct_UClass_ABall(); \
public: \
	DECLARE_CLASS(ABall, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SMBClone"), NO_API) \
	DECLARE_SERIALIZER(ABall) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SMBClone_Source_SMBClone_Public_Ball_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define SMBClone_Source_SMBClone_Public_Ball_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define SMBClone_Source_SMBClone_Public_Ball_h_15_PRIVATE_PROPERTY_OFFSET
#define SMBClone_Source_SMBClone_Public_Ball_h_12_PROLOG
#define SMBClone_Source_SMBClone_Public_Ball_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SMBClone_Source_SMBClone_Public_Ball_h_15_PRIVATE_PROPERTY_OFFSET \
	SMBClone_Source_SMBClone_Public_Ball_h_15_RPC_WRAPPERS \
	SMBClone_Source_SMBClone_Public_Ball_h_15_INCLASS \
	SMBClone_Source_SMBClone_Public_Ball_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SMBClone_Source_SMBClone_Public_Ball_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SMBClone_Source_SMBClone_Public_Ball_h_15_PRIVATE_PROPERTY_OFFSET \
	SMBClone_Source_SMBClone_Public_Ball_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SMBClone_Source_SMBClone_Public_Ball_h_15_INCLASS_NO_PURE_DECLS \
	SMBClone_Source_SMBClone_Public_Ball_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SMBClone_Source_SMBClone_Public_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
