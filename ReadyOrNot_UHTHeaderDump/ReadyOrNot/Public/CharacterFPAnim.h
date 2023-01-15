#pragma once
#include "CoreMinimal.h"
#include "CharacterFPAnim.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterFPAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_Anim;
    
    READYORNOT_API FCharacterFPAnim();
};

