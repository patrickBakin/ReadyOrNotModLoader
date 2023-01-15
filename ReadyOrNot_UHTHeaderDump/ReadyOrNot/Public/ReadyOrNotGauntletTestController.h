#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Gauntlet -ObjectName=GauntletTestController -FallbackName=GauntletTestController
#include "ReadyOrNotGauntletTestController.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotGauntletTestController : public UGauntletTestController {
    GENERATED_BODY()
public:
    UReadyOrNotGauntletTestController();
private:
    UFUNCTION(BlueprintCallable)
    void StopProfiling();
    
    UFUNCTION(BlueprintCallable)
    void StartTesting();
    
};

