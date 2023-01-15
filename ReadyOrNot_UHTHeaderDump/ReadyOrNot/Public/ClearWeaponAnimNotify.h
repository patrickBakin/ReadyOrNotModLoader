#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "ClearWeaponAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UClearWeaponAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UClearWeaponAnimNotify();
};

