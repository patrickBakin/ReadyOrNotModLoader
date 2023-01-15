#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotifyState_HideBoneVis.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class READYORNOT_API UAnimNotifyState_HideBoneVis : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneNameToHide;
    
public:
    UAnimNotifyState_HideBoneVis();
};

