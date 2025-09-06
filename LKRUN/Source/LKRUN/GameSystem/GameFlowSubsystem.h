// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFlowSubsystem.generated.h"

class UUserWidget;

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

UCLASS()
class LKRUN_API UGameFlowSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	FGameSceneState GameSceneState;


};
