#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "DisarmStandaloneTrapActivity.generated.h"

class AReadyOrNotCharacter;
class ATrapActor;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDisarmStandaloneTrapActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATrapActor* TrapToDisarm;
    
    UDisarmStandaloneTrapActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTrapTriggered(ATrapActor* Trap, AReadyOrNotCharacter* TriggeredBy);
    
    UFUNCTION(BlueprintCallable)
    void OnTrapDisarmed();
    
    UFUNCTION(BlueprintCallable)
    void EnterGetInPositionStage();
    
    UFUNCTION(BlueprintCallable)
    void EnterDisarmStage();
    
    UFUNCTION(BlueprintCallable)
    bool CanPerformDisarm() const;
    
};

