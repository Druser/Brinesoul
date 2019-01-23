// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ItemTypeENUM : uint8
{
	Weapons 		UMETA(DisplayName = "Equipment"),
	Consumables 	UMETA(DisplayName = "Consumables"),
	UniqueItems		UMETA(DisplayName = "UniqueItems")
};

UENUM(BlueprintType)
enum class WeaponSlotENUM : uint8
{
	NotAWeapon 		UMETA(DisplayName = "Not a Weapon"),
	MainHand 		UMETA(DisplayName = "MainHand"),
	OffHand 		UMETA(DisplayName = "OffHand"),
	DualWield 		UMETA(DisplayName = "DualWield")
};

UENUM(BlueprintType)
enum class WeaponTypeENUM : uint8
{
	NotAWeapon 		UMETA(DisplayName = "Not a Weapon"),
	Sword 			UMETA(DisplayName = "Sword"),
	Hammer 			UMETA(DisplayName = "Hammer"),
	Focus 			UMETA(DisplayName = "Focus"),
	Pistol 			UMETA(DisplayName = "Pistol"),
	Rifle 			UMETA(DisplayName = "Rifle")

};

UCLASS()
class BRINESOUL_API UMyGameInstance : public UGameInstance
{
	
	
	
	GENERATED_BODY()
	
	
	
	
};
