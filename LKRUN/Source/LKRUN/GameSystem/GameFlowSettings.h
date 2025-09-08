// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "GameFlowSettings.generated.h"

/**
 * Project-wide settings: Project Settings > Game > Game Flow
 * Holds map references and gameplay-tag to map bindings.
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Game Flow"))
class LKRUN_API UGameFlowSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UGameFlowSettings();

	/** Menu map */
	UPROPERTY(EditAnywhere, Config, Category = "Maps")
	TSoftObjectPtr<UWorld> MenuMap;

	/** Lobby map */
	UPROPERTY(EditAnywhere, Config, Category = "Maps")
	TSoftObjectPtr<UWorld> LobbyMap;

	/** Optional: dedicated Loading map (if you prefer traveling to a loading level) */
	UPROPERTY(EditAnywhere, Config, Category = "Maps")
	TSoftObjectPtr<UWorld> LoadingMap;

	/** Gameplay maps bound by GameplayTag (e.g., Map.Gameplay.M1 -> /Game/Maps/Map1) */
	UPROPERTY(EditAnywhere, Config, Category = "Maps")
	TMap<FGameplayTag, TSoftObjectPtr<UWorld>> GameplayMaps;

	/** Optional: Transition Map. If set, subsystem mirrors to GameMapsSettings. */
	UPROPERTY(EditAnywhere, Config, Category = "Transition")
	TSoftObjectPtr<UWorld> TransitionMap;

	/** Seamless travel toggle */
	UPROPERTY(EditAnywhere, Config, Category = "Travel")
	bool bUseSeamlessTravel = true;

	/** Auto-append ?listen for quick listen-server testing */
	UPROPERTY(EditAnywhere, Config, Category = "Travel")
	bool bListenServer = false;

	/** Extra travel options, e.g. "?game=/Game/Core/BP_GameMode.BP_GameMode_C" */
	UPROPERTY(EditAnywhere, Config, Category = "Travel")
	FString AdditionalTravelOptions;

	/** (Optional) DataTable for tag->map rows; RowType = FGameplayMapRow */
	UPROPERTY(EditAnywhere, Config, Category = "Maps")
	TSoftObjectPtr<UDataTable> GameplayMapTable;
};