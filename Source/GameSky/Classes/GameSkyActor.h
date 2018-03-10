#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameSkyActor.generated.h"

UCLASS()
class AGameSkyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameSkyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
