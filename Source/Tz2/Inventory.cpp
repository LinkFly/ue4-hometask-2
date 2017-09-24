// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory.h"

UInventory::UInventory() {
	Items.Add(UItem::MAKE(TEXT("Gun"), 23.5, 1, "Attacks"));
	Items.Add(UItem::MAKE(TEXT("Knife"), 20.8, 4, "Attack"));
	Items.Add(UItem::MAKE(TEXT("Bag"), 5.2, 2, "Things"));
	Items.Add(UItem::MAKE(TEXT("Spell"), 10.0, 3, "Magic"));
}



