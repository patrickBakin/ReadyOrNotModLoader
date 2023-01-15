#pragma once
#include "CoreMinimal.h"
#include "RoNLeanMotion.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRoNLeanMotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* BaseLeanLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* BaseLeanRight;
    
    READYORNOT_API FRoNLeanMotion();
};

