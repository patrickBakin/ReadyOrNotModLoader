#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "QuestManager.generated.h"

class UBaseQuestNode;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API AQuestManager : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsQuestActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBaseQuestNode*> QuestNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseQuestNode* ActiveQuestNode;
    
public:
    AQuestManager();
    UFUNCTION(BlueprintCallable)
    void StartQuest();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishedAllQuestNodes();
    
public:
    UFUNCTION(BlueprintCallable)
    void IterateQuestNodeList();
    
};

