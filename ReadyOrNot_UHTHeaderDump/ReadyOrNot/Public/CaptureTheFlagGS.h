#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameState.h"
#include "ETeamType.h"
#include "CaptureTheFlagGS.generated.h"

class ACTF_Flag;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API ACaptureTheFlagGS : public AReadyOrNotGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ACTF_Flag* Flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerCharacter* FlagBearer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ETeamType FlagBearerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlagStatus, meta=(AllowPrivateAccess=true))
    uint8 bFlagCaptured: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bGameWon: 1;
    
    ACaptureTheFlagGS();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FlagStatus();
    
};

