// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SMBCloneGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMBCloneGameModeBase() {}
// Cross Module References
	SMBCLONE_API UClass* Z_Construct_UClass_ASMBCloneGameModeBase_NoRegister();
	SMBCLONE_API UClass* Z_Construct_UClass_ASMBCloneGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SMBClone();
// End Cross Module References
	void ASMBCloneGameModeBase::StaticRegisterNativesASMBCloneGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASMBCloneGameModeBase_NoRegister()
	{
		return ASMBCloneGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ASMBCloneGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_SMBClone,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SMBCloneGameModeBase.h" },
				{ "ModuleRelativePath", "SMBCloneGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASMBCloneGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASMBCloneGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASMBCloneGameModeBase, 2641782084);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASMBCloneGameModeBase(Z_Construct_UClass_ASMBCloneGameModeBase, &ASMBCloneGameModeBase::StaticClass, TEXT("/Script/SMBClone"), TEXT("ASMBCloneGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMBCloneGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
