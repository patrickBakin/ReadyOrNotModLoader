#pragma once
#include "CoreMinimal.h"
#include "CardinalDirectionAnimSet.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FCardinalDirectionAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* NorthAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* EastAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SouthAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WestAnim;
    
    READYORNOT_API FCardinalDirectionAnimSet();
};

