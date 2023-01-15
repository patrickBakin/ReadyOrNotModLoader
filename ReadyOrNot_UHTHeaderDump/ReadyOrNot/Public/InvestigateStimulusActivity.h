#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
#include "InvestigateStimulusActivity.generated.h"

class AReadyOrNotCharacter;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UInvestigateStimulusActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIStimulus Stimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* Instigator;
    
    UInvestigateStimulusActivity();
};

