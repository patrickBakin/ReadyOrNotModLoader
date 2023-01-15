#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "DefuseBombThreats.generated.h"

class ABombActor;

UCLASS(Blueprintable)
class READYORNOT_API ADefuseBombThreats : public AObjective {
    GENERATED_BODY()
public:
    ADefuseBombThreats();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBombDefused(ABombActor* DefusedBomb);
    
};

