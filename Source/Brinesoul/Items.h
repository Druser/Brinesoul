// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyGameInstance.h"
#include "Items.generated.h"

UCLASS()
class BRINESOUL_API AItems : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItems();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Item Info")
		FString ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Item Info")
		FString ItemDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Item Info")
		int ItemNumber;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Item Info")
		ItemTypeENUM ItemType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Item Info")
		WeaponSlotENUM WeaponSlot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Item Info")
		WeaponTypeENUM WeaponType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Item Info")
		bool Usable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Item Info")
		bool Stackable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Item Info")
		int MaxStackable;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
