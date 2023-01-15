#pragma once
#include "CoreMinimal.h"
#include "MapData.h"
#include "FloorMapPointData.generated.h"

USTRUCT(BlueprintType)
struct FFloorMapPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapData> MapData;
    
    READYORNOT_API FFloorMapPointData();
};

