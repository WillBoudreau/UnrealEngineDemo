// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorCubeRotation.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class STARTERPROJECT_API UActorCubeRotation : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UActorCubeRotation();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float PitchValue;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float YawValue;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float RollValue;
};
