#include "RotateCube.h"  
#include "GameFramework/Actor.h"  
#include "Components/ActorComponent.h"  

// Sets default values for this component's properties  
URotateCube::URotateCube()  
{  
   // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features  
   // off to improve performance if you don't need them.  
   PrimaryComponentTick.bCanEverTick = true;  

   // ...  
}  

// Called when the game starts  
void URotateCube::BeginPlay()  
{  
   Super::BeginPlay();  

   // ...  
}  

// Called every frame  
void URotateCube::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)  
{  
   Super::TickComponent(DeltaTime, TickType, ThisTickFunction);  

   // ...  
}  

void URotateCube::SpawnActor()  
{  
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
   GetWorld()->SpawnActor<AActor>(actorBPToSpawn,GetActorTransform(),spawnParams);  
}
