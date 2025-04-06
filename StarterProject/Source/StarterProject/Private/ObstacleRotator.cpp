// Fill out your copyright notice in the Description page of Project Settings.

#include "ObstacleRotator.h"

// Sets default values for this component's properties
UObstacleRotator::UObstacleRotator()
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
void UObstacleRotator::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

// Called every frame
void UObstacleRotator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Rotate the obstacle
	RotateObstacle(DeltaTime);
}

void UObstacleRotator::RotateObstacle(float DeltaTime)
{
	FRotator NewRotation = GetOwner()->GetActorRotation();
	NewRotation.Yaw += DeltaTime * RotationSpeed; // Adjust the Yaw value to rotate around the Z-axis
	GetOwner()->SetActorRotation(NewRotation);
}
