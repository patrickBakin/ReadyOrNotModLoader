#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_SetCoverIdlePose.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UAnimNotify_SetCoverIdlePose : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Pose;
    
public:
    UAnimNotify_SetCoverIdlePose();
};

