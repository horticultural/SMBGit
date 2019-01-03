// Fill out your copyright notice in the Description page of Project Settings.

#include "JumpPad.h"


// Sets default values
AJumpPad::AJumpPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;
	JumpPadMesh = CreateDefaultSubobject<UStaticMeshComponent>("JumpPadMesh");
	JumpPadMesh->SetupAttachment(Root);
	//JumpPadMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	
	//OverlapBox = CreateDefaultSubobject<UBoxComponent>("OverlapBox");
	//OverlapBox->SetupAttachment(JumpPadMesh);
	
	OnActorBeginOverlap.AddDynamic(this, &AJumpPad::OnOverlap);
}

// Called when the game starts or when spawned
void AJumpPad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJumpPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AJumpPad::OnOverlap(AActor* OverlappedActor, AActor* OtherActor){
	if (Cast<ABall>(OtherActor) != nullptr)
	{
		//if It should be destroyable
		//Destroy();

		UStaticMeshComponent* Ball = Cast<UStaticMeshComponent>(OtherActor->GetRootComponent());
		FVector BallVelocity = Ball->GetPhysicsLinearVelocity();
		Ball->SetAllPhysicsLinearVelocity(FVector(BallVelocity.X, BallVelocity.Y, 0));
		Ball->AddImpulse(FVector(0, 0, JumpSpeed));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("WHY?"))
	}
	
}