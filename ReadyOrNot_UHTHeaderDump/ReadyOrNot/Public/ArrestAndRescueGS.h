#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameState.h"
#include "ArrestAndRescueGS.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AArrestAndRescueGS : public AReadyOrNotGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 BlueRespawnWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RedRespawnWaves;
    
    AArrestAndRescueGS();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

