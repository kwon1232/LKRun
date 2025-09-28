#pragma once

#include "CoreMinimal.h"
#include "GameSceneTypeState.generated.h"

UENUM(BlueprintType)
enum class EGameSceneType : uint8
{
	Menu,
	Lobby,
	Gameplay,
	Loading
};

USTRUCT(BlueprintType)
struct FGameSceneState
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EGameSceneType Past = EGameSceneType::Menu;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EGameSceneType Current = EGameSceneType::Loading;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EGameSceneType Future = EGameSceneType::Menu;
};
