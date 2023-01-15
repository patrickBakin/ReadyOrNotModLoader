#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldBuildingActivityData.generated.h"

UCLASS(Abstract, Blueprintable)
class UWorldBuildingActivityData : public UObject {
    GENERATED_BODY()
public:
    UWorldBuildingActivityData();
};

