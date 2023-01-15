#pragma once
#include "CoreMinimal.h"
#include "BaseCombatActivity.h"
#include "ESurrenderExitType.h"
#include "ECombatState.h"
#include "CombinedCombatActivity.generated.h"

class AReadyOrNotCharacter;
class ACyberneticCharacter;
class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UCombinedCombatActivity : public UBaseCombatActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECombatState CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* LastTrackedEnemyInDangerousState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticCharacter* TargetedCivilian;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> UnpathableCivilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HesitateMontage;
    
    UCombinedCombatActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnExitedSurrender(ESurrenderExitType ExitType);
    
    UFUNCTION(BlueprintCallable)
    void GoToState(const ECombatState& NewCombatState);
    
};

