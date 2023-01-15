#pragma once
#include "CoreMinimal.h"
#include "GaitType.generated.h"

USTRUCT(BlueprintType)
struct MOTIVITYRUNTIME_API FGaitType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    FGaitType();
};

