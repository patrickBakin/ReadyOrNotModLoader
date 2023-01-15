#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=PathFollowingComponent -FallbackName=PathFollowingComponent
#include "MotivityPathFollowingComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MOTIVITYRUNTIME_API UMotivityPathFollowingComp : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UMotivityPathFollowingComp();
};

