#pragma once
#include "CoreMinimal.h"
#include "BaseQuestNode.h"
#include "ESwatCommand.h"
#include "SwatCommand.h"
#include "BaseTeamQuestNode.generated.h"

class ASWATManager;
class USwatCommandWidget;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UBaseTeamQuestNode : public UBaseQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESwatCommand> EnabledSwatCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledAllSwatCommands;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASWATManager* SWATManager;
    
public:
    UBaseTeamQuestNode();
    UFUNCTION(BlueprintCallable)
    void UpdateSWATCommands(USwatCommandWidget* Widget, TArray<FSwatCommand>& SwatCommands);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASWATManager* GetSWATManager();
    
};

