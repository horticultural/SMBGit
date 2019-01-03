// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BallMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallMovementComponent() {}
// Cross Module References
	SMBCLONE_API UClass* Z_Construct_UClass_UBallMovementComponent_NoRegister();
	SMBCLONE_API UClass* Z_Construct_UClass_UBallMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_SMBClone();
	SMBCLONE_API UFunction* Z_Construct_UFunction_UBallMovementComponent_ActivateThruster();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister();
	SMBCLONE_API UFunction* Z_Construct_UFunction_UBallMovementComponent_BackwardScreenTilt();
	SMBCLONE_API UFunction* Z_Construct_UFunction_UBallMovementComponent_DeactivateThruster();
	SMBCLONE_API UFunction* Z_Construct_UFunction_UBallMovementComponent_ForwardScreenTilt();
	SMBCLONE_API UFunction* Z_Construct_UFunction_UBallMovementComponent_Initialise();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	SMBCLONE_API UFunction* Z_Construct_UFunction_UBallMovementComponent_RightScreenTilt();
// End Cross Module References
	void UBallMovementComponent::StaticRegisterNativesUBallMovementComponent()
	{
		UClass* Class = UBallMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateThruster", &UBallMovementComponent::execActivateThruster },
			{ "BackwardScreenTilt", &UBallMovementComponent::execBackwardScreenTilt },
			{ "DeactivateThruster", &UBallMovementComponent::execDeactivateThruster },
			{ "ForwardScreenTilt", &UBallMovementComponent::execForwardScreenTilt },
			{ "Initialise", &UBallMovementComponent::execInitialise },
			{ "RightScreenTilt", &UBallMovementComponent::execRightScreenTilt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBallMovementComponent_ActivateThruster()
	{
		struct BallMovementComponent_eventActivateThruster_Parms
		{
			UPhysicsThrusterComponent* Thruster;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thruster_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thruster = { UE4CodeGen_Private::EPropertyClass::Object, "Thruster", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BallMovementComponent_eventActivateThruster_Parms, Thruster), Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister, METADATA_PARAMS(NewProp_Thruster_MetaData, ARRAY_COUNT(NewProp_Thruster_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Thruster,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Thruster" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBallMovementComponent, "ActivateThruster", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(BallMovementComponent_eventActivateThruster_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBallMovementComponent_BackwardScreenTilt()
	{
		struct BallMovementComponent_eventBackwardScreenTilt_Parms
		{
			float DesiredThrustStrength;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredThrustStrength = { UE4CodeGen_Private::EPropertyClass::Float, "DesiredThrustStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BallMovementComponent_eventBackwardScreenTilt_Parms, DesiredThrustStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredThrustStrength,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
				{ "ToolTip", "ThrustStrength," },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBallMovementComponent, "BackwardScreenTilt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(BallMovementComponent_eventBackwardScreenTilt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBallMovementComponent_DeactivateThruster()
	{
		struct BallMovementComponent_eventDeactivateThruster_Parms
		{
			UPhysicsThrusterComponent* Thruster;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thruster_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thruster = { UE4CodeGen_Private::EPropertyClass::Object, "Thruster", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BallMovementComponent_eventDeactivateThruster_Parms, Thruster), Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister, METADATA_PARAMS(NewProp_Thruster_MetaData, ARRAY_COUNT(NewProp_Thruster_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Thruster,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Thruster" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBallMovementComponent, "DeactivateThruster", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(BallMovementComponent_eventDeactivateThruster_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBallMovementComponent_ForwardScreenTilt()
	{
		struct BallMovementComponent_eventForwardScreenTilt_Parms
		{
			float DesiredThrustStrength;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredThrustStrength = { UE4CodeGen_Private::EPropertyClass::Float, "DesiredThrustStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BallMovementComponent_eventForwardScreenTilt_Parms, DesiredThrustStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredThrustStrength,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
				{ "ToolTip", "for tick" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBallMovementComponent, "ForwardScreenTilt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(BallMovementComponent_eventForwardScreenTilt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBallMovementComponent_Initialise()
	{
		struct BallMovementComponent_eventInitialise_Parms
		{
			UPhysicsThrusterComponent* ForwardThrusterToSet;
			UPhysicsThrusterComponent* RightThrusterToSet;
			USpringArmComponent* SpringArmToSet;
			UCameraComponent* CameraToSet;
			UStaticMeshComponent* SkyBoxToSet;
			UStaticMeshComponent* BallToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallToSet = { UE4CodeGen_Private::EPropertyClass::Object, "BallToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BallMovementComponent_eventInitialise_Parms, BallToSet), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_BallToSet_MetaData, ARRAY_COUNT(NewProp_BallToSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyBoxToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkyBoxToSet = { UE4CodeGen_Private::EPropertyClass::Object, "SkyBoxToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BallMovementComponent_eventInitialise_Parms, SkyBoxToSet), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SkyBoxToSet_MetaData, ARRAY_COUNT(NewProp_SkyBoxToSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraToSet = { UE4CodeGen_Private::EPropertyClass::Object, "CameraToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BallMovementComponent_eventInitialise_Parms, CameraToSet), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraToSet_MetaData, ARRAY_COUNT(NewProp_CameraToSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmToSet = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArmToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BallMovementComponent_eventInitialise_Parms, SpringArmToSet), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArmToSet_MetaData, ARRAY_COUNT(NewProp_SpringArmToSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightThrusterToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightThrusterToSet = { UE4CodeGen_Private::EPropertyClass::Object, "RightThrusterToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BallMovementComponent_eventInitialise_Parms, RightThrusterToSet), Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister, METADATA_PARAMS(NewProp_RightThrusterToSet_MetaData, ARRAY_COUNT(NewProp_RightThrusterToSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardThrusterToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForwardThrusterToSet = { UE4CodeGen_Private::EPropertyClass::Object, "ForwardThrusterToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(BallMovementComponent_eventInitialise_Parms, ForwardThrusterToSet), Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister, METADATA_PARAMS(NewProp_ForwardThrusterToSet_MetaData, ARRAY_COUNT(NewProp_ForwardThrusterToSet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BallToSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkyBoxToSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraToSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArmToSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightThrusterToSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForwardThrusterToSet,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Thruster" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBallMovementComponent, "Initialise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BallMovementComponent_eventInitialise_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBallMovementComponent_RightScreenTilt()
	{
		struct BallMovementComponent_eventRightScreenTilt_Parms
		{
			float DesiredThrustStrength;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredThrustStrength = { UE4CodeGen_Private::EPropertyClass::Float, "DesiredThrustStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BallMovementComponent_eventRightScreenTilt_Parms, DesiredThrustStrength), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredThrustStrength,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
				{ "ToolTip", "ThrustStrength," },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBallMovementComponent, "RightScreenTilt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(BallMovementComponent_eventRightScreenTilt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBallMovementComponent_NoRegister()
	{
		return UBallMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBallMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_SMBClone,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBallMovementComponent_ActivateThruster, "ActivateThruster" }, // 4031469663
				{ &Z_Construct_UFunction_UBallMovementComponent_BackwardScreenTilt, "BackwardScreenTilt" }, // 300197784
				{ &Z_Construct_UFunction_UBallMovementComponent_DeactivateThruster, "DeactivateThruster" }, // 1181980567
				{ &Z_Construct_UFunction_UBallMovementComponent_ForwardScreenTilt, "ForwardScreenTilt" }, // 4181262288
				{ &Z_Construct_UFunction_UBallMovementComponent_Initialise, "Initialise" }, // 3607862314
				{ &Z_Construct_UFunction_UBallMovementComponent_RightScreenTilt, "RightScreenTilt" }, // 2849188209
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "BallMovementComponent.h" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScreenRoll_MetaData[] = {
				{ "Category", "BallMovementComponent" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
				{ "ToolTip", "Random guess" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScreenRoll = { UE4CodeGen_Private::EPropertyClass::Float, "MaxScreenRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UBallMovementComponent, MaxScreenRoll), METADATA_PARAMS(NewProp_MaxScreenRoll_MetaData, ARRAY_COUNT(NewProp_MaxScreenRoll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScreenTilt_MetaData[] = {
				{ "Category", "BallMovementComponent" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
				{ "ToolTip", "random guess" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScreenTilt = { UE4CodeGen_Private::EPropertyClass::Float, "MaxScreenTilt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UBallMovementComponent, MaxScreenTilt), METADATA_PARAMS(NewProp_MaxScreenTilt_MetaData, ARRAY_COUNT(NewProp_MaxScreenTilt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRightThrustStrength_MetaData[] = {
				{ "Category", "BallMovementComponent" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
				{ "ToolTip", "random guess" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRightThrustStrength = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRightThrustStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UBallMovementComponent, MaxRightThrustStrength), METADATA_PARAMS(NewProp_MaxRightThrustStrength_MetaData, ARRAY_COUNT(NewProp_MaxRightThrustStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBackwardThrustStrength_MetaData[] = {
				{ "Category", "BallMovementComponent" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
				{ "ToolTip", "random guess" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBackwardThrustStrength = { UE4CodeGen_Private::EPropertyClass::Float, "MaxBackwardThrustStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UBallMovementComponent, MaxBackwardThrustStrength), METADATA_PARAMS(NewProp_MaxBackwardThrustStrength_MetaData, ARRAY_COUNT(NewProp_MaxBackwardThrustStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxForwardThrustStrength_MetaData[] = {
				{ "Category", "BallMovementComponent" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxForwardThrustStrength = { UE4CodeGen_Private::EPropertyClass::Float, "MaxForwardThrustStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UBallMovementComponent, MaxForwardThrustStrength), METADATA_PARAMS(NewProp_MaxForwardThrustStrength_MetaData, ARRAY_COUNT(NewProp_MaxForwardThrustStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsForwardPressed_MetaData[] = {
				{ "Category", "BallMovementComponent" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
			};
#endif
			auto NewProp_IsForwardPressed_SetBit = [](void* Obj){ ((UBallMovementComponent*)Obj)->IsForwardPressed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsForwardPressed = { UE4CodeGen_Private::EPropertyClass::Bool, "IsForwardPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBallMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsForwardPressed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsForwardPressed_MetaData, ARRAY_COUNT(NewProp_IsForwardPressed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrustStrengthRight_MetaData[] = {
				{ "Category", "BallMovementComponent" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrustStrengthRight = { UE4CodeGen_Private::EPropertyClass::Float, "ThrustStrengthRight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UBallMovementComponent, ThrustStrengthRight), METADATA_PARAMS(NewProp_ThrustStrengthRight_MetaData, ARRAY_COUNT(NewProp_ThrustStrengthRight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerLeftStickYAxisValue_MetaData[] = {
				{ "Category", "BallMovementComponent" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ControllerLeftStickYAxisValue = { UE4CodeGen_Private::EPropertyClass::Float, "ControllerLeftStickYAxisValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UBallMovementComponent, ControllerLeftStickYAxisValue), METADATA_PARAMS(NewProp_ControllerLeftStickYAxisValue_MetaData, ARRAY_COUNT(NewProp_ControllerLeftStickYAxisValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrustStrengthForward_MetaData[] = {
				{ "Category", "BallMovementComponent" },
				{ "ModuleRelativePath", "Public/BallMovementComponent.h" },
				{ "ToolTip", "ABall* Ball = nullptr;" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrustStrengthForward = { UE4CodeGen_Private::EPropertyClass::Float, "ThrustStrengthForward", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UBallMovementComponent, ThrustStrengthForward), METADATA_PARAMS(NewProp_ThrustStrengthForward_MetaData, ARRAY_COUNT(NewProp_ThrustStrengthForward_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxScreenRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxScreenTilt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRightThrustStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxBackwardThrustStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxForwardThrustStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsForwardPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThrustStrengthRight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerLeftStickYAxisValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThrustStrengthForward,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBallMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBallMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UBallMovementComponent, 3825867203);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBallMovementComponent(Z_Construct_UClass_UBallMovementComponent, &UBallMovementComponent::StaticClass, TEXT("/Script/SMBClone"), TEXT("UBallMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBallMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
