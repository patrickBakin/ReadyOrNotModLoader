#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_PlayMontage.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UAnimNotify_PlayMontage : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
public:
    UAnimNotify_PlayMontage();
};

