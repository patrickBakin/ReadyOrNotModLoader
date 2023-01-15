#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "MotivityAIController.generated.h"

UCLASS(Blueprintable)
class MOTIVITYRUNTIME_API AMotivityAIController : public AAIController {
    GENERATED_BODY()
public:
    AMotivityAIController();
};

