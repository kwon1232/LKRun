#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class LKRUN_API UInteractComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInteractComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	void PerformLineTrace();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* HitObj = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETraceTypeQuery> TraceType;

	bool bOnHit = false;
};
