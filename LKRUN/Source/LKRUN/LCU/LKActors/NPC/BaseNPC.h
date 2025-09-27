#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LKRUN/LCU/Interface/Interactable.h"
#include "BaseNPC.generated.h"

UCLASS()
class LKRUN_API ABaseNPC : public ACharacter, public IInteractable
{
	GENERATED_BODY()

public:
	ABaseNPC();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// ---------- IInteractable Func

	virtual EInteractionType EnabledInteract(FName& Name) override;
	virtual void OnInteract() override;
	
	// ---------- IInteractable Func End
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Interactable)
	EInteractionType InteractType;
	
};
