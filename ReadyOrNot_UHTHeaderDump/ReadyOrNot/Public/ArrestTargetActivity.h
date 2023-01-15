#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "ArrestTargetActivity.generated.h"

class AReadyOrNotCharacter;
class UInteractionsData;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UArrestTargetActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* ArrestTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* ArrestInteraction;
    
public:
    UArrestTargetActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void TickMoveToStage(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void TickArrestStage(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void OnArresterKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void EnterMoveToStage();
    
    UFUNCTION(BlueprintCallable)
    void EnterArrestStage();
    
    UFUNCTION(BlueprintCallable)
    bool CanArrest() const;
    
};

