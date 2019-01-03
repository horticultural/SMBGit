// Fill out your copyright notice in the Description page of Project Settings.

#include "BallMovementComponent.h"
#include "Ball.h"

void UBallMovementComponent::Initialise(UPhysicsThrusterComponent*ForwardThrusterToSet, UPhysicsThrusterComponent*RightThrusterToSet, USpringArmComponent* SpringArmToSet, UCameraComponent* CameraToSet, UStaticMeshComponent* SkyBoxToSet, UStaticMeshComponent* BallToSet) {

	ForwardThruster = ForwardThrusterToSet;
	RightThruster = RightThrusterToSet;
	SpringArm = SpringArmToSet;
	Camera = CameraToSet;
	SkyBox = SkyBoxToSet;
	Ball = BallToSet;
}

void UBallMovementComponent::Jump()
{
	Ball->AddImpulse(FVector(0, 0, 100000));
	UE_LOG(LogTemp, Warning, TEXT("ShouldHaveJumped"));
}

void UBallMovementComponent::ActivateThruster(UPhysicsThrusterComponent * Thruster) // TODO change this to have input of a controller, and times the input by the default thrust
{
	if (ForwardThruster && RightThruster) {
		Thruster->Activate(); //Bug where if you release one it deactivates the other if you're pressing both. Won't be a problem with a controller though.
	}
	
}


void UBallMovementComponent::DeactivateThruster(UPhysicsThrusterComponent * Thruster)
{
	if (ForwardThruster && RightThruster) {
		Thruster->Deactivate();
	}

}

void UBallMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	CameraDirection();
	SetCameraAndSpringArmAngles();
	SetForwardThrusterStrengthBasedOnVelocity();
}



void UBallMovementComponent::SetCameraAndSpringArmAngles()
{
	float Speed = Cast<ABall>(GetOwner())->GetBallVelocity();
	if (Speed > 5) {
		SpringArm->SetRelativeRotation(DesiredSpringArmRotator);

		FRotator CurrentRotation = SpringArm->RelativeRotation;

		ForwardThruster->SetRelativeRotation(CurrentRotation.Add(DefaultCameraAngle, 180, 0));
		RightThruster->SetRelativeRotation(CurrentRotation.Add(0, 90, 0));
	}

	
}

void UBallMovementComponent::CameraDirection() //And thrusters?
{
	FRotator DirectionOfVelocity = Cast<ABall>(GetOwner())->GetIntendedCameraDirection();
	DesiredSpringArmRotator.Yaw = DirectionOfVelocity.Yaw;
}

void UBallMovementComponent::ForwardScreenTilt(float DesiredThrustStrength)
{
	if (DesiredThrustStrength >= 0) {
		ForwardThruster->ThrustStrength = DesiredThrustStrength;
	}
	else {
		ForwardThruster->ThrustStrength = -250000;
	}
	

	float ScreenTiltRatio = ControllerLeftStickYAxisValue;
	float ScreenTilt = (MaxScreenTilt * ScreenTiltRatio) - DefaultCameraAngle; // -30 for default screen tilt.
	DesiredSpringArmRotator.Pitch = ScreenTilt;
}

void UBallMovementComponent::BackwardScreenTilt(float DesiredThrustStrength)
{
	ForwardThruster->ThrustStrength = DesiredThrustStrength;

	float ScreenTiltRatio = ControllerLeftStickYAxisValue;
	float ScreenTilt = (MaxScreenTilt * ScreenTiltRatio) - DefaultCameraAngle; // -30 for default screen tilt.
	DesiredSpringArmRotator.Pitch = ScreenTilt;
}


void UBallMovementComponent::RightScreenTilt(float DesiredThrustStrength)
{
	RightThruster->ThrustStrength = DesiredThrustStrength;
	//UE_LOG(LogTemp, Warning, TEXT("%f"), DesiredThrustStrength)
	float ScreenTiltRatio = DesiredThrustStrength / MaxRightThrustStrength;
	float ScreenRoll = (MaxScreenRoll * ScreenTiltRatio);
	DesiredSpringArmRotator.Roll = -ScreenRoll;
}

void UBallMovementComponent::SetForwardThrusterStrengthBasedOnVelocity()
{
	float Speed = Cast<ABall>(GetOwner())->GetBallVelocity();
	//UE_LOG(LogTemp,Warning, TEXT("speed: %f"),Speed)
	//UE_LOG(LogTemp, Warning, TEXT("axis: %f"), ControllerLeftStickYAxisValue)

	if (Speed < 50) {
		//ThrustStrengthForward = MaxForwardThrustStrength;
		if (ControllerLeftStickYAxisValue <= 0) {
			ThrustStrengthForward = 0;
			//Ball->SetAngularDamping(2); //used to get rid of camera shake at low speeds while ball is spinning. Find a better solution.
			//Ball->SetLinearDamping(2);
		}
		else {
			ThrustStrengthForward = MaxForwardThrustStrength;
			Ball->SetAngularDamping(0);
			Ball->SetLinearDamping(0);
		}
	}
	else if (Speed < 2000) {
		ThrustStrengthForward = MaxForwardThrustStrength;
		Ball->SetAngularDamping(0);
		Ball->SetLinearDamping(0.023);
	}
	
	else if (Speed > 2000 && Speed < 3000) {
		float SpeedAboveTwoThousand = Speed - 2000;
		ThrustStrengthForward = MaxForwardThrustStrength * (1 - (SpeedAboveTwoThousand / 1000));
	}

	else {
		ThrustStrengthForward = 0;
	}
	//if the speed is above 1000, begin to reduce the thrust power, up to 2000
	// TODO change this section to a logarithmic curve.
	
	
}

void UBallMovementComponent::TurnSkyBox() // TODO not currently in use, test this later.
{
	FRotator CameraRotation = Camera->GetComponentRotation();
	SkyBox->SetRelativeRotation(CameraRotation);
}

//
