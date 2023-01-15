#pragma once
#include "CoreMinimal.h"
#include "CharacterSharedAnim.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterSharedAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_Anim;
    
    READYORNOT_API FCharacterSharedAnim();
};

