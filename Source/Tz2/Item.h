// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

/**
 * 
 */
UCLASS()
class TZ2_API UItem : public UObject
{
	GENERATED_BODY()

public:

	UItem();

	static UItem* MAKE(FString NameVal, float Price, int32 Id, FString Category);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Price;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Category;

protected:
	void Init(FString NameVal, float PriceVal, int32 IdVal, FString CategoryVal);
};
