#include "LKRCharacter.h"

ALKRCharacter::ALKRCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ALKRCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALKRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALKRCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

