#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PlanningLine.h"
#include "PlanningLineArray.generated.h"

USTRUCT(BlueprintType)
struct FPlanningLineArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlanningLine> Items;
    
    READYORNOT_API FPlanningLineArray();
};

