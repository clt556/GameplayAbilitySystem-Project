// Copyright Epic Games

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()
	
public:
	AAuraCharacter();
	virtual void PossessedBy(AController* NewController) override; // AActor has it.
	virtual void OnRep_PlayerState() override; // APawn has it.
	/*
		GAS setting up functions are called automatically, by Unreal Fremework
	*/
private:
	void InitAbilityActorInfo();
};
