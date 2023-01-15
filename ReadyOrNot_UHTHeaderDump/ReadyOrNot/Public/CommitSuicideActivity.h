#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "EStunType.h"
#include "CommitSuicideActivity.generated.h"

class AActor;
class AReadyOrNotCharacter;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UCommitSuicideActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSuicideActivityDelegate);
    
    UCommitSuicideActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnMeleeHitTaken(AReadyOrNotCharacter* InstigatorCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnHeardYell(AReadyOrNotCharacter* Shouter, bool bLOS);
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
};

