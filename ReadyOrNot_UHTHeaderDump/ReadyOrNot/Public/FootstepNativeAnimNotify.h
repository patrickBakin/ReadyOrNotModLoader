#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "FootstepNativeAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFootstepNativeAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UFootstepNativeAnimNotify();
};

