#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=CrowdManager -FallbackName=CrowdManager
#include "ReadyOrNotCrowdManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API UReadyOrNotCrowdManager : public UCrowdManager {
    GENERATED_BODY()
public:
    UReadyOrNotCrowdManager();
};

