#pragma once
#include "CoreMinimal.h"
#include "CardinalDirectionBlendSpaceAnimSet.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FCardinalDirectionBlendSpaceAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* NorthAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* EastAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* SouthAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* WestAnim;
    
    READYORNOT_API FCardinalDirectionBlendSpaceAnimSet();
};

