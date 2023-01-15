#pragma once
#include "CoreMinimal.h"
#include "CharacterTPAnim.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterTPAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_Anim;
    
    READYORNOT_API FCharacterTPAnim();
};

