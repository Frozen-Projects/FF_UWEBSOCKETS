// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "FF_UWS_Includes.h"

#include "FF_UWEBSOCKETSBPLibrary.generated.h"

UCLASS()
class UFF_UWEBSOCKETSBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "FF_UWEBSOCKETS sample test testing"), Category = "FF_UWEBSOCKETS")
	static float UWS_Sample(float Param);
};
