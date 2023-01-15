#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "EStunType.h"
#include "PlayDeadActivity.generated.h"

class AActor;
class AReadyOrNotCharacter;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UPlayDeadActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPlayDeadActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnHeardYell(AReadyOrNotCharacter* Shouter, bool bLOS);
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
};

