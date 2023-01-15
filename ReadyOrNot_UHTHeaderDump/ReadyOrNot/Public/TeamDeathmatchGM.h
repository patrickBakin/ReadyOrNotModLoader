#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameMode_PVP.h"
#include "TeamDeathmatchGM.generated.h"

class UFMODEvent;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API ATeamDeathmatchGM : public AReadyOrNotGameMode_PVP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuddenDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MatchLoopMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MatchStartMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MatchEndMusic;
    
    ATeamDeathmatchGM();
};

