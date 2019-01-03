// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Bumper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBumper() {}
// Cross Module References
	SMBCLONE_API UClass* Z_Construct_UClass_ABumper_NoRegister();
	SMBCLONE_API UClass* Z_Construct_UClass_ABumper();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SMBClone();
	SMBCLONE_API UFunction* Z_Construct_UFunction_ABumper_OnCompHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ABumper::StaticRegisterNativesABumper()
	{
		UClass* Class = ABumper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCompHit", &ABumper::execOnCompHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABumper_OnCompHit()
	{
		struct Bumper_eventOnCompHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Bumper_eventOnCompHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Bumper_eventOnCompHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Bumper_eventOnCompHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Bumper_eventOnCompHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp = { UE4CodeGen_Private::EPropertyClass::Object, "HitComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Bumper_eventOnCompHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_HitComp_MetaData, ARRAY_COUNT(NewProp_HitComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Bumper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABumper, "OnCompHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C40401, sizeof(Bumper_eventOnCompHit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABumper_NoRegister()
	{
		return ABumper::StaticClass();
	}
	UClass* Z_Construct_UClass_ABumper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SMBClone,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABumper_OnCompHit, "OnCompHit" }, // 2123741952
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Bumper.h" },
				{ "ModuleRelativePath", "Public/Bumper.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsule_MetaData[] = {
				{ "Category", "Bumper" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Bumper.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionCapsule = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionCapsule", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ABumper, CollisionCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionCapsule_MetaData, ARRAY_COUNT(NewProp_CollisionCapsule_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BumperMesh_MetaData[] = {
				{ "Category", "Bumper" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Bumper.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BumperMesh = { UE4CodeGen_Private::EPropertyClass::Object, "BumperMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ABumper, BumperMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_BumperMesh_MetaData, ARRAY_COUNT(NewProp_BumperMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
				{ "Category", "Bumper" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Bumper.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root = { UE4CodeGen_Private::EPropertyClass::Object, "Root", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ABumper, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Root_MetaData, ARRAY_COUNT(NewProp_Root_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionCapsule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BumperMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Root,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABumper>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABumper::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABumper, 3479282759);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABumper(Z_Construct_UClass_ABumper, &ABumper::StaticClass, TEXT("/Script/SMBClone"), TEXT("ABumper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABumper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
