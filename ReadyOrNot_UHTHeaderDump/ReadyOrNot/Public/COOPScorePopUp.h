#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "COOPScorePopUp.generated.h"

class UFMODEvent;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UCOOPScorePopUp : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* Reward;
    
    UCOOPScorePopUp();
    UFUNCTION(BlueprintCallable)
    void PlayRewardSound();
    
};

