// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ElimAnnouncement.generated.h"

/**
 *
 */
UCLASS()
class EDGE_THEGAME_API UElimAnnouncement : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetElimAnnouncementText(FString AttackerName, FString VictimName, APlayerState* AttackerPS, APlayerState* VictimPS);

	UPROPERTY(meta = (BindWidget))
		class UHorizontalBox* AnnouncementBox;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* AnnouncementText;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* AttackerNameText;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* VictimNameText;
};
