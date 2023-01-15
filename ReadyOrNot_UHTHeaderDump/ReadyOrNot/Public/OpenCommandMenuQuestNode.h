#pragma once
#include "CoreMinimal.h"
#include "BaseTeamQuestNode.h"
#include "OpenCommandMenuQuestNode.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UOpenCommandMenuQuestNode : public UBaseTeamQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverse;
    
public:
    UOpenCommandMenuQuestNode();
};

