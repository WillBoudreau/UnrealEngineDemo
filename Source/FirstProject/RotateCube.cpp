// Fill out your copyright notice in the Description page of Project Settings.

#include "RotateCube.h"
#include "GameFramework/Actor.h"
#include "Components/ActorComponent.h"

// Sets default values for this component's properties
URotateCube::URotateCube()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	BeginPlay();

	// ...
}

// Called when the game starts
void URotateCube::BeginPlay()
{
	

	// ...
}

// Called every frame
void URotateCube::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	

	// ...
}