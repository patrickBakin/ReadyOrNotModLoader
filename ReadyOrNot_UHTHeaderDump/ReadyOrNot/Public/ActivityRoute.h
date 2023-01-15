#pragma once
#include "CoreMinimal.h"
#include "ActivityRoute.generated.h"

class UWorldBuildingActivityData;
class AWorldBuildingPlacementActor;

USTRUCT(BlueprintType)
struct FActivityRoute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDoingActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldBuildingPlacementActor* WorldBuildingPlacementActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldBuildingActivityData* WorldBuildingActivityData;
    
    READYORNOT_API FActivityRoute();
};

