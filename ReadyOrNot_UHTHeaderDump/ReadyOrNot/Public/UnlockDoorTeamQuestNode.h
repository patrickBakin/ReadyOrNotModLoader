#pragma once
#include "CoreMinimal.h"
#include "CheckDoorQuestNode.h"
#include "UnlockDoorTeamQuestNode.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UUnlockDoorTeamQuestNode : public UCheckDoorQuestNode {
    GENERATED_BODY()
public:
    UUnlockDoorTeamQuestNode();
};

