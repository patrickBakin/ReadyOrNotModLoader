#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "FleeingCombatMove.generated.h"

class AThreatAwarenessActor;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UFleeingCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> UsedFleePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> LastExitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AThreatAwarenessActor* LastFleePoint;
    
public:
    UFleeingCombatMove();
};

