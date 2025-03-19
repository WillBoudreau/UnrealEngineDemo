// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorCubeRotation.h"
#include "GameFramework/Actor.h" // Include necessary header for AddActorLocalRotation

// Sets default values for this component's properties
UActorCubeRotation::UActorCubeRotation()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PitchValue = 0.f;
	YawValue = 0.f;
	RollValue = 0.f;

	// ...
}

// Called when the game starts
void UActorCubeRotation::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

// Called every frame
void UActorCubeRotation::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FQuat QuatRotation = FQuat(FRotator(PitchValue,YawValue,RollValue));

	GetOwner()->AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);
	// ...
}
