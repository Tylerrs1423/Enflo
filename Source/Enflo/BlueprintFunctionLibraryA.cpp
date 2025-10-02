// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintFunctionLibraryA.h"

FString UBlueprintFunctionLibraryA::GetPointlessMessage()
{
	return FString(TEXT("Pointless message to be honest"));
}

double UBlueprintFunctionLibraryA::GetMyPi()
{
	return Pi;
}

