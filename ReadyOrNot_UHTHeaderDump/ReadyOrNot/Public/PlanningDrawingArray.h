#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PlanningDrawing.h"
#include "PlanningDrawingArray.generated.h"

USTRUCT(BlueprintType)
struct FPlanningDrawingArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlanningDrawing> Items;
    
    READYORNOT_API FPlanningDrawingArray();
};

