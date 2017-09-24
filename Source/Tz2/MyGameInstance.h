	// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "UserProfile.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TZ2_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UUserProfile* UserProfile;

	void Init();

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	UInventory* Inventory;
};
