#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "ListenForReport.h"
#include "ListenForIncapacitation.h"
#include "ListenForGameStart.h"
#include "ListenForDeath.h"
#include "ListenForArrest.h"
#include "ListenForSpawn.h"
#include "RescueCivilianByTag.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ARescueCivilianByTag : public AObjective, public IListenForSpawn, public IListenForArrest, public IListenForDeath, public IListenForReport, public IListenForGameStart, public IListenForIncapacitation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CivilianTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowIncapacitation;
    
    ARescueCivilianByTag();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasNeutralizedCivilianByTag(const FName& Tag, bool& bArrested);
    
    
    // Fix for true pure virtual functions not being implemented
};

