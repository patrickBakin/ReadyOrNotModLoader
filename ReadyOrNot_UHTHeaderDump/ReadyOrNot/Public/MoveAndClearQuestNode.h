#pragma once
#include "CoreMinimal.h"
#include "BaseTeamQuestNode.h"
#include "MoveAndClearQuestNode.generated.h"

class AActor;
class AReadyOrNotTriggerVolume;
class ASWATCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UMoveAndClearQuestNode : public UBaseTeamQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SWATNeededToPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotTriggerVolume* ClearTriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ASWATCharacter*> SWATCleared;
    
public:
    UMoveAndClearQuestNode();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSWATBeginOverlap(AActor* VolumeActor, AActor* OverlappingActor);
    
};

