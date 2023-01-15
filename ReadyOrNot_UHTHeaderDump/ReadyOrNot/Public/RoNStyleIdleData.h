#pragma once
#include "CoreMinimal.h"
#include "RoNStyleIdleData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRoNStyleIdleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> BaseIdleData;
    
    READYORNOT_API FRoNStyleIdleData();
};

