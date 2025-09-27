// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameSceneTypeState.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFlowSubsystem.generated.h"

class UUserWidget;

UCLASS()
class LKRUN_API UGameFlowSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	FGameSceneState GameSceneState;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
};
