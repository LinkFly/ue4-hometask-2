// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Inventory.generated.h"

/**
 * 
 */
UCLASS()
class TZ2_API UInventory : public UObject
{
	GENERATED_BODY()

public:
	UInventory();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UItem*> Items;
};
