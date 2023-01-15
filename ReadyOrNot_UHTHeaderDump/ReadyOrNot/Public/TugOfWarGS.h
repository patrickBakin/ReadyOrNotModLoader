#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameState.h"
#include "TugOfWarGS.generated.h"

class ATugOfWarMover;

UCLASS(Blueprintable)
class READYORNOT_API ATugOfWarGS : public AReadyOrNotGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ATugOfWarMover* Mover;
    
    ATugOfWarGS();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

