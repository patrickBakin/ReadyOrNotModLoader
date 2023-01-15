#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "VisibilityBlockingVolume.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AVisibilityBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    AVisibilityBlockingVolume();
};

