#include "GameSkyActor.h"
#include "GameSkyObject.h"

// Sets default values
AGameSkyActor::AGameSkyActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AGameSkyActor::BeginPlay()
{
	Super::BeginPlay();
	NewObject<UGameSkyObject>(this, TEXT("GameSkyObject"));
}

// Called every frame
void AGameSkyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
