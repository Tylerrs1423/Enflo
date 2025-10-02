// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintFunctionLibraryA.generated.h"


/**
 * 
 */
UCLASS()
class ENFLO_API UBlueprintFunctionLibraryA : public UBlueprintFunctionLibrary
{

public:
	UFUNCTION(BlueprintCallable)
	static FString GetPointlessMessage();

	UFUNCTION(BlueprintCallable,BlueprintPure, meta = (ToolTip = "3.1415blahblah..", CompactNodeTitle = "Pi"))
	static double GetMyPi();

protected:
	
	

private:
	static constexpr double Pi = 3.14592;
	
	GENERATED_BODY()
};
