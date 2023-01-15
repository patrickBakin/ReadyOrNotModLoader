#pragma once
#include "CoreMinimal.h"
#include "CheckDoorQuestNode.h"
#include "OpenDoorTeamQuestNode.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UOpenDoorTeamQuestNode : public UCheckDoorQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeFullyOpen;
    
public:
    UOpenDoorTeamQuestNode();
};

