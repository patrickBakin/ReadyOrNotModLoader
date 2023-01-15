#pragma once
#include "CoreMinimal.h"
#include "Magazine.generated.h"

USTRUCT(BlueprintType)
struct FMagazine {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 Ammo;
    
    UPROPERTY(EditAnywhere)
    uint16 AmmoType;
    
    READYORNOT_API FMagazine();
};

