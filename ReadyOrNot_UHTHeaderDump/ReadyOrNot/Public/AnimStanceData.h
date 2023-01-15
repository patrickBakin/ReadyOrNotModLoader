#pragma once
#include "CoreMinimal.h"
#include "AnimWeaponData.h"
#include "AnimStanceData.generated.h"

USTRUCT(BlueprintType)
struct FAnimStanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWeaponData StandingAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWeaponData CrouchedAnimData;
    
    READYORNOT_API FAnimStanceData();
};

