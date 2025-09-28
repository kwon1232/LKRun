#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LKRPlayerController.generated.h"

UCLASS()
class LKRUN_API ALKRPlayerController : public APlayerController
{
	GENERATED_BODY()

	
public:
	ALKRPlayerController();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SwitchToOtherCharacterCamera(AActor* TargetCharacter);

	
};
