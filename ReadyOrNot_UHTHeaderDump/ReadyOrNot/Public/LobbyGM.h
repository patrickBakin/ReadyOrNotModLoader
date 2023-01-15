#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameMode.h"
#include "LobbyGM.generated.h"

class AReadyOrNotPlayerController;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API ALobbyGM : public AReadyOrNotGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotPlayerController*> InitalizedPlayerControllers;
    
public:
    ALobbyGM();
};

