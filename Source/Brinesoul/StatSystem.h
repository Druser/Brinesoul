// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatSystem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BRINESOUL_API UStatSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatSystem();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes)
		int Level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes)
		int Brine;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes)
		int Vitality;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes)
		int Endurance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes)
		int Strength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes)
		int Agility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes)
		int Resilience;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes)
		int Connection;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Power)
		float HP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Power)
		float MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Power)
		float Stamina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Power)
		float MaxStamina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Power)
		int EquipLoad;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Power)
		int MaxEquipLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Defences)
		int PhysDef;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Defences)
		int MagicDef;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Secondary)
		int BaseMovementSpeed = 400 + (Agility * 2);



		
	
};
