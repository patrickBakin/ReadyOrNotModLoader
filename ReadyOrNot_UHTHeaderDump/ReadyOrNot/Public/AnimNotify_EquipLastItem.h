#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_EquipLastItem.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UAnimNotify_EquipLastItem : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInstant: 1;
    
public:
    UAnimNotify_EquipLastItem();
};

