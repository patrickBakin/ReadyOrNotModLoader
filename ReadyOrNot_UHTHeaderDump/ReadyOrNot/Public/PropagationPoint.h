#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TargetPoint -FallbackName=TargetPoint
#include "PropagationPoint.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API APropagationPoint : public ATargetPoint {
    GENERATED_BODY()
public:
    APropagationPoint();
};

