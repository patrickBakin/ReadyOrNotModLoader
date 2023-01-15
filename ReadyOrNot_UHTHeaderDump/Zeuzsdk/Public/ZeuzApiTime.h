#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzTimestamp.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "ZeuzApiTime.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiTime : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UZeuzApiTime();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime ToDateTime(FZeuzTimestamp T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FZeuzTimestamp Now(bool adjusted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsZero(FZeuzTimestamp T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FZeuzTimestamp GetOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FZeuzTimestamp FromDateTime(FDateTime T, bool adjusted);
    
    UFUNCTION(BlueprintCallable)
    static void AdjustOffset(FZeuzTimestamp ofs);
    
};

