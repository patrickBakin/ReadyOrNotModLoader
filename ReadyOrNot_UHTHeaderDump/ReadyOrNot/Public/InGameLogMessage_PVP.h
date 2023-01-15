#pragma once
#include "CoreMinimal.h"
#include "ECharacterDeathReason.h"
#include "EPVPEvent.h"
#include "InGameLogMessage_PVP.generated.h"

class AReadyOrNotCharacter;

USTRUCT(BlueprintType)
struct FInGameLogMessage_PVP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* Causer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* Victim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPVPEvent PVPEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterDeathReason CauseOfDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOnScreen;
    
    READYORNOT_API FInGameLogMessage_PVP();
};

