#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemV1 -FallbackName=NavigationSystemV1
#include "ReadyOrNotNavigationSystem.generated.h"

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API UReadyOrNotNavigationSystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
    UReadyOrNotNavigationSystem();
};

