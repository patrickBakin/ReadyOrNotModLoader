#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VDSimulationTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVDSimulationTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VICODYNAMICSPLUGIN_API FVDSimulationTickFunction();
};

