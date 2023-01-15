#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "PreplanningManager.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API APreplanningManager : public AInfo {
    GENERATED_BODY()
public:
    APreplanningManager();
};

