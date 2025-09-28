#include "BaseInteractActor.h"

ABaseInteractActor::ABaseInteractActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABaseInteractActor::BeginPlay()
{
	Super::BeginPlay();	
}

void ABaseInteractActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

EInteractionType ABaseInteractActor::EnabledInteract(FName& Name)
{
	return InteractType;
}

void ABaseInteractActor::OnInteract()
{
}

