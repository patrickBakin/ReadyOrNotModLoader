#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
#include "BleedDamageType.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UBleedDamageType : public UDamageType {
    GENERATED_BODY()
public:
    UBleedDamageType();
};

