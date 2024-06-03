// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "KSWGameInstance.generated.h"

/**
 * 
 */
class UPaperSprite;
UCLASS()
class KSW_UNREAL_PROJECT_API UKSWGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UPROPERTY(Category = Pawn, EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TMap<FString, TSubclassOf<AActor>> TestActorSubClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UPaperSprite*> Sprites;

};
