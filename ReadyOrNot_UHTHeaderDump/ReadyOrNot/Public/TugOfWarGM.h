#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameMode_PVP.h"
#include "TugOfWarGM.generated.h"

class UFMODEvent;
class APlayerCharacter;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API ATugOfWarGM : public AReadyOrNotGameMode_PVP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> ArrestedBlueCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> ArrestedRedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* TOWVictorySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MatchLoopMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MatchStartMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MatchEndMusic;
    
    ATugOfWarGM();
};

