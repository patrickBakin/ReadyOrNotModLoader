#pragma once
#include "CoreMinimal.h"
#include "BaseTeamQuestNode.h"
#include "CheckDoorQuestNode.generated.h"

class ADoor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UCheckDoorQuestNode : public UBaseTeamQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* TargetDoor;
    
    UCheckDoorQuestNode();
};

