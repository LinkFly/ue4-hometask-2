// Fill out your copyright notice in the Description page of Project Settings.

#include "Item.h"

UItem::UItem() {
	// GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, this->GetName());
}

UItem* UItem::MAKE(FString NameVal, float PriceVal, int32 IdVal, FString CategoryVal)
{
	UItem* Item = NewObject<UItem>();
	Item->Init(NameVal, PriceVal, IdVal, CategoryVal);
	return Item;
}

void UItem::Init(FString NameVal, float PriceVal, int32 IdVal, FString CategoryVal)
{
	Name = NameVal;
	Price = PriceVal;
	Id = IdVal;
	Category = CategoryVal;
}
