#pragma once
#include "CoreMinimal.h"
#include "Injury.generated.h"

USTRUCT(BlueprintType)
struct FInjury {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InjuryCount;
    
    READYORNOT_API FInjury();
};

