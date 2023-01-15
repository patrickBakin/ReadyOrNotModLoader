#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "ListenForIncapacitation.h"
#include "ListenForGameStart.h"
#include "ListenForDeath.h"
#include "ListenForArrest.h"
#include "ListenForSpawn.h"
#include "RescueAllOfTheCivilians.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ARescueAllOfTheCivilians : public AObjective, public IListenForSpawn, public IListenForArrest, public IListenForDeath, public IListenForGameStart, public IListenForIncapacitation {
    GENERATED_BODY()
public:
    ARescueAllOfTheCivilians();
    
    // Fix for true pure virtual functions not being implemented
};

