#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameMode_PVP.h"
#include "ETeamType.h"
#include "SearchAndDestroyGM.generated.h"

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API ASearchAndDestroyGM : public AReadyOrNotGameMode_PVP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBombPlanted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRedSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBlueSpawned;
    
    ASearchAndDestroyGM();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfActivePlayersOnTeam(ETeamType Team);
    
};

