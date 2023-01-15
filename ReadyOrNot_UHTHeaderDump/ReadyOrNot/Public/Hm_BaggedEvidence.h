#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Hm_BaggedEvidence.generated.h"

USTRUCT(BlueprintType)
struct FHm_BaggedEvidence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    READYORNOT_API FHm_BaggedEvidence();
};

