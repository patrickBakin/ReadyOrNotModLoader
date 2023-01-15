#pragma once
#include "CoreMinimal.h"
#include "ECOOPMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "EObjectiveStatus.h"
#include "Objective.generated.h"

class UFMODEvent;
class UScoringComponent;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API AObjective : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScoringComponent* ScoringComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ObjectiveCompleteAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ObjectiveFailedAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECOOPMode LockedToMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailureEndsMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenObjective;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EObjectiveStatus ObjectiveStatus;
    
public:
    AObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickObjective_BP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectiveFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectiveCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectiveCompleted();
    
    UFUNCTION(BlueprintCallable)
    void ObjectiveFailed();
    
    UFUNCTION(BlueprintCallable)
    void ObjectiveCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EObjectiveStatus GetObjectiveStatus() const;
    
};

