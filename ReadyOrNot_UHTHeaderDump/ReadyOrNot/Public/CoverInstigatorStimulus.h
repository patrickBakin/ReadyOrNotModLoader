#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CoverInstigatorStimulus.generated.h"

class AReadyOrNotCharacter;

USTRUCT(BlueprintType)
struct FCoverInstigatorStimulus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* InstigatorCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ThreatTransform;
    
    READYORNOT_API FCoverInstigatorStimulus();
};

