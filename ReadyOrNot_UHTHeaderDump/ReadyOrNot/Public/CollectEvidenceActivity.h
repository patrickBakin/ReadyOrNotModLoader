#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "CollectEvidenceActivity.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UCollectEvidenceActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EvidenceItem;
    
    UCollectEvidenceActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnEvidenceCollected();
    
    UFUNCTION(BlueprintCallable)
    void OnCollectEvidenceEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnCollectEvidenceBegin();
    
    UFUNCTION(BlueprintCallable)
    void EnterMoveToStage();
    
    UFUNCTION(BlueprintCallable)
    void EnterCollectStage();
    
    UFUNCTION(BlueprintCallable)
    bool CanCollectEvidence() const;
    
};

