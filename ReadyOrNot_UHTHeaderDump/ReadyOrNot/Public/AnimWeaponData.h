#pragma once
#include "CoreMinimal.h"
#include "AnimWeaponData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FAnimWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> AnimMontages;
    
    READYORNOT_API FAnimWeaponData();
};

