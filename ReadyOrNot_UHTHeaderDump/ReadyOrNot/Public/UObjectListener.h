#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "UObjectListener.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AUObjectListener : public AActor {
    GENERATED_BODY()
public:
    AUObjectListener();
};

