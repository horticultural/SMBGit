// Fill out your copyright notice in the Description page of Project Settings.

#include "Bumper.h"
#include "Ball.h"
//#include "OnComponentHit.h"



// Sets default values
ABumper::ABumper()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	CollisionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule")); //Have the collisionBox set to root.
	CollisionCapsule->SetSimulatePhysics(true);
	//CollisionCapsule->WakeRigidBody();
	CollisionCapsule->SetNotifyRigidBodyCollision(true);
	CollisionCapsule->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	
	
	RootComponent = CollisionCapsule;
	

	//BumperMesh = CreateDefaultSubobject<UStaticMeshComponent>("BumperMesh");
	//BumperMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);


	
}

// Called when the game starts or when spawned
void ABumper::BeginPlay()
{
	Super::BeginPlay();
	CollisionCapsule->OnComponentHit.AddDynamic(this, &ABumper::OnCompHit);
	
}

// Called every frame
void ABumper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABumper::OnCompHit(UPrimitiveComponent * HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult & Hit)
{	
	//UE_LOG(LogTemp, Warning, TEXT("hit %s"), *OtherActor->GetName())
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != NULL) && (BeenHitRecently == false)) {
		//UE_LOG(LogTemp, Warning, TEXT("hit %s"), *OtherActor->GetName())
		UE_LOG(LogTemp, Warning, TEXT("hit %s"), *Hit.Normal.ToString())
	    //Cast<ABall>(&OtherActor->ChangeBallVelocity()); // TODO get a reference to the ball
		//Cast<ABall>(OtherActor->ChangeBallVelocity());
		//float Speed = Cast<ABall>(GetOwner())->GetBallVelocity();
		//UE_LOG(LogTemp, Warning, TEXT("current ball speed %f"), Speed)
		//OtherComp->AddImpulse((Hit.Normal)*300000);
		BeenHitRecently = true;
		
		GetWorldTimerManager().SetTimer(TimerHandle, this, &ABumper::SetBeenHitRecently, 1.0, false, 1.0);

	}
	// use  the directions of 'Hit.Normal' and 'Hit.ImpactNormal'

}

void ABumper::SetBeenHitRecently()
{
	BeenHitRecently = false;
	UE_LOG(LogTemp, Warning, TEXT("all good"))

}

