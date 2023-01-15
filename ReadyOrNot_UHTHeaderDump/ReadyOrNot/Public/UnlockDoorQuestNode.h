#pragma once
#include "CoreMinimal.h"
#include "BaseQuestNode.h"
#include "UnlockDoorQuestNode.generated.h"

class ADoor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UUnlockDoorQuestNode : public UBaseQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* TargetDoor;
    
    UUnlockDoorQuestNode();
};

