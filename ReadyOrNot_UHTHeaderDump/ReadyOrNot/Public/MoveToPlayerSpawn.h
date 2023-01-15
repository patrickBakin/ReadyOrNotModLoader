#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "MoveToPlayerSpawn.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UMoveToPlayerSpawn : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeArrestedOnceReachedLocation;
    
    UMoveToPlayerSpawn();
};

