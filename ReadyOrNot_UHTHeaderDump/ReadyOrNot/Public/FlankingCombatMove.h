#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "FlankingCombatMove.generated.h"

class AReadyOrNotCharacter;
class AFlankingAvoidanceVolume;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UFlankingCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* FlankingAgainstCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFlankingAvoidanceVolume* FlankingAvoidanceVolume;
    
public:
    UFlankingCombatMove();
};

