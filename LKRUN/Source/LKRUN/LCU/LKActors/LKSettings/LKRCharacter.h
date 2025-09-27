#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LKRCharacter.generated.h"

UCLASS()
class LKRUN_API ALKRCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ALKRCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
