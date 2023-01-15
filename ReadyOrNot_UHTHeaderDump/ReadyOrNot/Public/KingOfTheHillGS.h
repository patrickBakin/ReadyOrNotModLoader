#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameState.h"
#include "KingOfTheHillGS.generated.h"

class ATugOfWarMover;

UCLASS(Blueprintable)
class READYORNOT_API AKingOfTheHillGS : public AReadyOrNotGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ATugOfWarMover* Mover;
    
    AKingOfTheHillGS();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

