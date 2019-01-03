// Fill out your copyright notice in the Description page of Project Settings.

#include "Ball.h"


// Sets default values
ABall::ABall()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABall::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FRotator ABall::GetIntendedCameraDirection()
{
	if (BallMesh) {
	FVector Velocity = BallMesh->GetPhysicsLinearVelocity();
	FRotator Direction = Velocity.ToOrientationRotator();  //Can I clean this up?
	return Direction;
	}
	else {
		return FRotator(0, 0, 0);
	}
}

void ABall::Initialise(UStaticMeshComponent * StaticMeshToSet)
{
	BallMesh = StaticMeshToSet;
}

float ABall::GetBallVelocity()
{
	FVector Velocity = BallMesh->GetPhysicsLinearVelocity();
	float Speed = sqrt(((Velocity.X*Velocity.X) + (Velocity.Y*Velocity.Y)));
	//UE_LOG(LogTemp, Warning, TEXT("Speed: %f"), Speed)
	return Speed;
}

void ABall::ChangeBallVelocity(FVector UnitVector)
{
	UE_LOG(LogTemp, Warning, TEXT("Cast Works : %s"), *UnitVector.ToString())

	//FVector Velocity = BallMesh->GetPhysicsLinearVelocity();
	
	//FVector NewVelocity = UnitVector.operator*(Speed);
	//UE_LOG(LogTemp, Warning, TEXT("New Velcoity: %s"), *NewVelocity.ToString())
	//BallMesh->SetPhysicsLinearVelocity(FVector (0,0,0));
	//UE_LOG(LogTemp, Warning, TEXT("Did that"))
}








