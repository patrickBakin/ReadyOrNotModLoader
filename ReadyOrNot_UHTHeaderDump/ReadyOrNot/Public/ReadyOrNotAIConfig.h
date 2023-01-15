#pragma once
#include "CoreMinimal.h"
#include "GameplayConfig.h"
#include "ReadyOrNotAIConfig.generated.h"

class UReadyOrNotAIConfig;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API UReadyOrNotAIConfig : public UGameplayConfig {
    GENERATED_BODY()
public:
    UReadyOrNotAIConfig();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UReadyOrNotAIConfig* Get();
    
};

