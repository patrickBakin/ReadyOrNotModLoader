#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "WeaponWheel_ItemStat_Base.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class READYORNOT_API UWeaponWheel_ItemStat_Base : public UUserWidget {
    GENERATED_BODY()
public:
    UWeaponWheel_ItemStat_Base();
};

