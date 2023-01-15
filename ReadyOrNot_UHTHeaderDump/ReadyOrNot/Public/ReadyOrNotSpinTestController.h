#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Gauntlet -ObjectName=GauntletTestController -FallbackName=GauntletTestController
#include "ReadyOrNotSpinTestController.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotSpinTestController : public UGauntletTestController {
    GENERATED_BODY()
public:
    UReadyOrNotSpinTestController();
private:
    UFUNCTION(BlueprintCallable)
    void StopProfiling();
    
    UFUNCTION(BlueprintCallable)
    void StartTesting();
    
protected:
    UFUNCTION(BlueprintCallable)
    void On60FPSTick();
    
};

