#pragma once
#include "CoreMinimal.h"
#include "CanIssueCommandOn.h"
#include "PickupActor.h"
#include "ScoringInterface.h"
#include "EEvidenceActorState.h"
#include "EvidenceActor.generated.h"

class UScoringComponent;

UCLASS(Blueprintable)
class READYORNOT_API AEvidenceActor : public APickupActor, public ICanIssueCommandOn, public IScoringInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScoringComponent* ScoringComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EvidenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bEvidenceExtracted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EEvidenceActorState PreviousEvidenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EvidenceStateChanged, meta=(AllowPrivateAccess=true))
    EEvidenceActorState EvidenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsBeingCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentCollectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxCollectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInteractHeld: 1;
    
public:
    AEvidenceActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateEvidenceCollection_COOP(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartExtractingEvidence();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EvidenceStateChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEvidenceName() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishExtractingEvidence();
    
    
    // Fix for true pure virtual functions not being implemented
};

