#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BecomesWet.generated.h"

UINTERFACE(Blueprintable)
class READYORNOT_API UBecomesWet : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IBecomesWet : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartBecomingWet(float WetnessRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartBecomingDry(float DrynessRate);
    
};

