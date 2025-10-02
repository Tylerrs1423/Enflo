// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Masta.h"
#include "TimerManager.h"
#include "Components/BoxComponent.h"

// Sets default values
AC_Masta::AC_Masta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	DefaultSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
	RootComponent = DefaultSceneComponent;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetupAttachment(DefaultSceneComponent);

	NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Niagara"));
	NiagaraComponent->SetupAttachment(Box);
}

// Called when the game starts or when spawned
void AC_Masta::BeginPlay()
{
	Super::BeginPlay();

	StartMyTimer();
	
}

void AC_Masta::StartMyTimer()
{
	FTimerDelegate TimerDelegate = FTimerDelegate::CreateUObject(this, &AC_Masta::TimerCallBack);

	GetWorldTimerManager().SetTimer(MyTimerHandle, TimerDelegate, 5.0f, false);
}

void AC_Masta::Knobby()
{
	printf("YERR");
}


void AC_Masta::TimerCallBack()
{
	if(JitCount > 0)
	{
		if(GetWorldTimerManager().IsTimerActive(MyTimerHandle))
		{
			GetWorldTimerManager().ClearTimer(MyTimerHandle);
			GetWorldTimerManager().SetTimer(MyTimerHandle2, this, &AC_Masta::Knobby, 2.0f, false);
		}
	}
}


// Called every frame
void AC_Masta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

