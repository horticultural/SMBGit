// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/JumpPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpPad() {}
// Cross Module References
	SMBCLONE_API UClass* Z_Construct_UClass_AJumpPad_NoRegister();
	SMBCLONE_API UClass* Z_Construct_UClass_AJumpPad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SMBClone();
	SMBCLONE_API UFunction* Z_Construct_UFunction_AJumpPad_OnOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AJumpPad::StaticRegisterNativesAJumpPad()
	{
		UClass* Class = AJumpPad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &AJumpPad::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AJumpPad_OnOverlap()
	{
		struct JumpPad_eventOnOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JumpPad_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JumpPad_eventOnOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/JumpPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AJumpPad, "OnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(JumpPad_eventOnOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AJumpPad_NoRegister()
	{
		return AJumpPad::StaticClass();
	}
	UClass* Z_Construct_UClass_AJumpPad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SMBClone,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AJumpPad_OnOverlap, "OnOverlap" }, // 841963538
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "JumpPad.h" },
				{ "ModuleRelativePath", "Public/JumpPad.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpSpeed_MetaData[] = {
				{ "Category", "JumpPad" },
				{ "ModuleRelativePath", "Public/JumpPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "JumpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AJumpPad, JumpSpeed), METADATA_PARAMS(NewProp_JumpSpeed_MetaData, ARRAY_COUNT(NewProp_JumpSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapBox_MetaData[] = {
				{ "Category", "JumpPad" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/JumpPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapBox = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AJumpPad, OverlapBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_OverlapBox_MetaData, ARRAY_COUNT(NewProp_OverlapBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpPadMesh_MetaData[] = {
				{ "Category", "JumpPad" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/JumpPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpPadMesh = { UE4CodeGen_Private::EPropertyClass::Object, "JumpPadMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AJumpPad, JumpPadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_JumpPadMesh_MetaData, ARRAY_COUNT(NewProp_JumpPadMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
				{ "Category", "JumpPad" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/JumpPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root = { UE4CodeGen_Private::EPropertyClass::Object, "Root", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AJumpPad, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Root_MetaData, ARRAY_COUNT(NewProp_Root_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JumpSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlapBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JumpPadMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Root,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AJumpPad>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AJumpPad::StaticClass,
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
	IMPLEMENT_CLASS(AJumpPad, 3357973831);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJumpPad(Z_Construct_UClass_AJumpPad, &AJumpPad::StaticClass, TEXT("/Script/SMBClone"), TEXT("AJumpPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJumpPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
