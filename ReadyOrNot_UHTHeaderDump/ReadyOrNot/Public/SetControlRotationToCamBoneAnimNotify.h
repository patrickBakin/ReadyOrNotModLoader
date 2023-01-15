#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SetControlRotationToCamBoneAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API USetControlRotationToCamBoneAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraBoneName;
    
public:
    USetControlRotationToCamBoneAnimNotify();
};

