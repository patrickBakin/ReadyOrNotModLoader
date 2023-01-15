#pragma once
#include "CoreMinimal.h"
#include "HitScanInfo.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FHitScanInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    READYORNOT_API FHitScanInfo();
};

