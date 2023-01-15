#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PlanningMarker.h"
#include "PlanningMarkerArray.generated.h"

USTRUCT(BlueprintType)
struct FPlanningMarkerArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlanningMarker> Items;
    
    READYORNOT_API FPlanningMarkerArray();
};

