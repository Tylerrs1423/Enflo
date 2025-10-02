// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "C_Masta.generated.h"


UCLASS()
class ENFLO_API AC_Masta : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_Masta();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Variables")
	int32 JitCount;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SceneComponent")
	class USceneComponent* DefaultSceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Box")
	class UBoxComponent* Box;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Niagara")
	class UNiagaraComponent* NiagaraComponent;

	void StartMyTimer();
	void TimerCallBack();
	void StopAndClearTimer();
	void Knobby();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FTimerHandle MyTimerHandle;
	FTimerHandle MyTimerHandle2;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
