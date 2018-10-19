// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Items.generated.h"

UCLASS()
class BRINESOUL_API AItems : public AActor
{
	GENERATED_BODY()

		UENUM()
		enum Category
	{
		Weapon     UMETA(DisplayName = "Weapon"),
		Armor      UMETA(DisplayName = "Armor"),
		Consumable UMETA(DisplayName = "Consumable"),
		QuestItem  UMETA(DisplayName = "QuestItem"),

	};
	
public:	
	// Sets default values for this actor's properties
	AItems();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Info)
		FString Name;




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
