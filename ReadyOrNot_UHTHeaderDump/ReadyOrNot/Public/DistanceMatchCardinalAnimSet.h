#pragma once
#include "CoreMinimal.h"
#include "DistanceMatchAnimation.h"
#include "DistanceMatchCardinalAnimSet.generated.h"

USTRUCT(BlueprintType)
struct FDistanceMatchCardinalAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceMatchAnimation NorthAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceMatchAnimation EastAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceMatchAnimation SouthAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceMatchAnimation WestAnim;
    
    READYORNOT_API FDistanceMatchCardinalAnimSet();
};

