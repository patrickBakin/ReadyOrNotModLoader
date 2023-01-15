#pragma once
#include "CoreMinimal.h"
#include "WorldBuildingActivityData.h"
#include "PlaceTrapActivityData.generated.h"

class ADoor;

UCLASS(Blueprintable)
class UPlaceTrapActivityData : public UWorldBuildingActivityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* Door;
    
    UPlaceTrapActivityData();
};

