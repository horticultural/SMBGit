// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsThrusterComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Core/Public/Math/Rotator.h"
#include "BallMovementComponent.generated.h"


//class ABall;
/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SMBCLONE_API UBallMovementComponent : public UMovementComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = Thruster)
	void Initialise(UPhysicsThrusterComponent*ForwardThrusterToSet, UPhysicsThrusterComponent*RightThrusterToSet, USpringArmComponent* SpringArmToSet, UCameraComponent* CameraToSet, UStaticMeshComponent* SkyBoxToSet, UStaticMeshComponent* BallToSet);
	
	UPhysicsThrusterComponent* ForwardThruster = nullptr;
	UPhysicsThrusterComponent* RightThruster = nullptr;
	USpringArmComponent* SpringArm = nullptr;
	UCameraComponent* Camera = nullptr;
	UStaticMeshComponent* SkyBox = nullptr;
	UStaticMeshComponent* Ball = nullptr;

	//ABall* Ball = nullptr;

	UPROPERTY(BlueprintReadWrite)
	float ThrustStrengthForward = 0;

	UPROPERTY(BlueprintReadWrite)
	float ControllerLeftStickYAxisValue = 0;

	UPROPERTY(BlueprintReadWrite)
	float ThrustStrengthRight = 0;

	UPROPERTY(BlueprintReadWrite)
	bool IsForwardPressed = false;

	void Jump();

	float DefaultCameraAngle = 20.0;

private:
	
	

	UFUNCTION(BlueprintCallable, Category = Thruster)
	void ActivateThruster(UPhysicsThrusterComponent* Thruster);

	UFUNCTION(BlueprintCallable, Category = Thruster)
	void DeactivateThruster(UPhysicsThrusterComponent* Thruster);

	UPROPERTY(VisibleAnywhere)
	float MaxForwardThrustStrength = 100000.0; // random guess

	UPROPERTY(VisibleAnywhere)
	float MaxBackwardThrustStrength = 250000.0; // random guess

	UPROPERTY(VisibleAnywhere)
	float MaxRightThrustStrength = 300000.0; // random guess

	UPROPERTY(EditAnywhere)
	float MaxScreenTilt = 10; //Random guess

	UPROPERTY(EditAnywhere)
	float MaxScreenRoll = 15; //Random guess

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction);

	void CameraDirection();

	void SetCameraAndSpringArmAngles(); //for tick

	UFUNCTION(BlueprintCallable, Category = Camera)
	void ForwardScreenTilt(float DesiredThrustStrength); // ThrustStrength,

	UFUNCTION(BlueprintCallable, Category = Camera)
	void BackwardScreenTilt(float DesiredThrustStrength); // ThrustStrength,

	UFUNCTION(BlueprintCallable, Category = Camera)
	void RightScreenTilt(float DesiredThrustStrength);

	FRotator DesiredCameraRotator = FRotator(0, 0, 0);
	FRotator DesiredSpringArmRotator = FRotator(30, 0, 0);

	void SetForwardThrusterStrengthBasedOnVelocity();

	void TurnSkyBox();

	

};
