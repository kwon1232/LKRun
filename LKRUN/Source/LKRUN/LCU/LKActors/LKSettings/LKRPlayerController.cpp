#include "LKRPlayerController.h"

ALKRPlayerController::ALKRPlayerController()
{
}

void ALKRPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALKRPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALKRPlayerController::SwitchToOtherCharacterCamera(AActor* TargetCharacter)
{
	if (!TargetCharacter) return;

	FViewTargetTransitionParams TransitionParams;
	TransitionParams.BlendTime = 1.0f; // 부드러운 전환 시간 (초)
	TransitionParams.BlendFunction = EViewTargetBlendFunction::VTBlend_Cubic;

	SetViewTarget(TargetCharacter, TransitionParams);
}