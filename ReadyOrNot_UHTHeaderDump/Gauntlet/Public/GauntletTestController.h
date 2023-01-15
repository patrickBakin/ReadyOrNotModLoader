#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GauntletTestController.generated.h"

UCLASS(Blueprintable)
class GAUNTLET_API UGauntletTestController : public UObject {
    GENERATED_BODY()
public:
    UGauntletTestController();
};

