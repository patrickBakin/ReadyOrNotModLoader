#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameplayManager.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AGameplayManager : public AActor {
    GENERATED_BODY()
public:
    AGameplayManager();
};

