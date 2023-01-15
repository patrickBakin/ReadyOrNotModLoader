#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameState.h"
#include "LobbyGS.generated.h"

class UFMODEvent;

UCLASS(Blueprintable)
class READYORNOT_API ALobbyGS : public AReadyOrNotGameState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* LobbyMusicEvent;
    
public:
    ALobbyGS();
};

