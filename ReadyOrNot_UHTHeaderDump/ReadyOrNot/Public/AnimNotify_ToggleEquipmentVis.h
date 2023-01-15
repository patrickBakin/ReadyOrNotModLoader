#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EToggleInventoryVis.h"
#include "AnimNotify_ToggleEquipmentVis.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UAnimNotify_ToggleEquipmentVis : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EToggleInventoryVis InventroyVis;
    
public:
    UAnimNotify_ToggleEquipmentVis();
};

