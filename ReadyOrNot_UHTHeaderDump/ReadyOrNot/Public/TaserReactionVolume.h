#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TaserReactionVolume.generated.h"

class AReadyOrNotCharacter;
class UBoxComponent;
class ATaser;

UCLASS(Blueprintable)
class READYORNOT_API ATaserReactionVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Bounds;
    
    ATaserReactionVolume();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTaserStunDelivered(AReadyOrNotCharacter* Character, ATaser* Taser);
    
};

