#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "DropWeaponAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UDropWeaponAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UDropWeaponAnimNotify();
};

