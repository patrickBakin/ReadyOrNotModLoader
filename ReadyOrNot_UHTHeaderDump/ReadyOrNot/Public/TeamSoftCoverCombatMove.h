#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "TeamSoftCoverCombatMove.generated.h"

class UTeamSoftCoverCombatMove;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UTeamSoftCoverCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTeamSoftCoverCombatMove*> OtherSoftCoverCombatMoves;
    
public:
    UTeamSoftCoverCombatMove();
};

