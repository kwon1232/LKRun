#include "InteractComponent.h"

#include "Kismet/KismetSystemLibrary.h"
#include "LKRUN/LCU/Interface/Interactable.h"

UInteractComponent::UInteractComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UInteractComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UInteractComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                       FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	PerformLineTrace();
}

void UInteractComponent::PerformLineTrace()
{
	AActor* OwnerActor = GetOwner();
	FVector StartLocation = OwnerActor->GetActorLocation();
	StartLocation.Z -= 30.f;
	FVector EndLocation = StartLocation + OwnerActor->GetActorForwardVector() * 100.0f;
	
	FHitResult HitResult;

    
	// 라인 트레이스를 실행합니다.
	bool bHit = UKismetSystemLibrary::LineTraceSingle(
		this,
		StartLocation,
		EndLocation,
		TraceType ,
		false,
		TArray<AActor*>(), // 무시할 액터는 없습니다.
		EDrawDebugTrace::Persistent,
		HitResult,
		true
	);

	if(bHit)
	{
		AActor* HitActor = HitResult.GetActor();
		FName HitName;
		EInteractionType InteractionType;
		if(!HitActor) return;
		if(HitObj == HitActor)
		{
			return;
		}
		HitObj = HitActor;
		if(auto In = Cast<IInteractable>(HitActor))
		{
			InteractionType = In->EnabledInteract(HitName);
		}
		
		// TODO UI 를 중앙 하단에 띄우고 액터 이름 띄우기
		
	}
	else
	{
		if(HitObj)
		{
			HitObj = nullptr;
			// TODO 이름 UI 를 안보이게 바꾸기
			
		}
	}
}

