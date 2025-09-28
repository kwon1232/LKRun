#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LKRUN/LCU/Interface/Interactable.h"
#include "BaseInteractActor.generated.h"

UCLASS(Abstract)
class LKRUN_API ABaseInteractActor : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	ABaseInteractActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// ---------- IInteractable Func

	virtual EInteractionType EnabledInteract(FName& Name) override;
	virtual void OnInteract() override;
	
	// ---------- IInteractable Func End

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Interactable)
	EInteractionType InteractType;

	
};
