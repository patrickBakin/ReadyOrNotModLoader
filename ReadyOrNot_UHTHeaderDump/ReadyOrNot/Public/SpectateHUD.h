#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "SpectateHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API ASpectateHUD : public AHUD {
    GENERATED_BODY()
public:
    ASpectateHUD();
};

