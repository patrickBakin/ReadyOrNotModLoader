#pragma once
#include "CoreMinimal.h"
#include "StunDamage.h"
#include "PepperballDamageType.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UPepperballDamageType : public UStunDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDurationHeadshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDurationLeg;
    
    UPepperballDamageType();
};

