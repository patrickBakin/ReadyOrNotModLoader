#pragma once
#include "CoreMinimal.h"
#include "BaseTeamQuestNode.h"
#include "ETeamType.h"
#include "ESwatCommand.h"
#include "IssueCommandQuestNode.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UIssueCommandQuestNode : public UBaseTeamQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwatCommand SwatCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType TeamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasIssueCommand;
    
public:
    UIssueCommandQuestNode();
protected:
    UFUNCTION(BlueprintCallable)
    void OnIssuedCommand(ESwatCommand Command, ETeamType Team);
    
};

