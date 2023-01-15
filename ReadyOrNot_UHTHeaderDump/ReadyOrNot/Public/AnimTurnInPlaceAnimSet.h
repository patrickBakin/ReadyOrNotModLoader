#pragma once
#include "CoreMinimal.h"
#include "AnimTurnTransition.h"
#include "AnimTurnInPlaceAnimSet.generated.h"

USTRUCT(BlueprintType)
struct FAnimTurnInPlaceAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimTurnTransition> TurnTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnDeadZoneAngle;
    
    READYORNOT_API FAnimTurnInPlaceAnimSet();
};

