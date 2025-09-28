#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

UENUM(Blueprintable, BlueprintType)
enum class EInteractionType : uint8
{
	NONE = 0 UMETA(DisplayName = "None"),
	PICKUP = 1 UMETA(DisplayName = "Pickup"),
	TALK = 2 UMETA(DisplayName = "Talk"),
	OPEN = 3 UMETA(DisplayName = "Open"),
	USE = 4 UMETA(DisplayName = "USE")
};

UINTERFACE()
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

class LKRUN_API IInteractable
{
	GENERATED_BODY()

public:
	UFUNCTION()
	virtual EInteractionType EnabledInteract(UPARAM(ref) FName& Name) = 0;
	virtual void OnInteract() = 0;
};
