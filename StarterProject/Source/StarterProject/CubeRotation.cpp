// Fill out your copyright notice in the Description page of Project Settings.

#include "CubeRotation.h"
#include "GameFramework/Actor.h" // Include necessary header for AddActorLocalRotation

// Sets default values for this component's properties
UCubeRotation::UCubeRotation()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	pitchValue = 5.f;
	yawValue = 5.f;
	rollValue = 5.f;

	// ...
}

// Called when the game starts
void UCubeRotation::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

// Called every frame
void UCubeRotation::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FRotator NewRotation = FRotator(pitchValue, yawValue, rollValue);

	FQuat QuatRotation = FQuat(NewRotation);

	GetOwner()->AddActorLocalRotation(QuatRotation, false, 0,ETeleportType::None); // Fix identifier and typo
	// ...
}
