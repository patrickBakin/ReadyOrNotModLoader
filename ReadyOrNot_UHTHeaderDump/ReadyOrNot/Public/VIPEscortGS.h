#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameState.h"
#include "ETeamType.h"
#include "VIPEscortGS.generated.h"

class APlayerController;
class AReadyOrNotCharacter;
class APlayerCharacter;
class AReadyOrNotPlayerState;

UCLASS(Blueprintable)
class READYORNOT_API AVIPEscortGS : public AReadyOrNotGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HoldVIP_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VIPArrested, meta=(AllowPrivateAccess=true))
    bool bVIPArrested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanKillVIP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerCharacter* VIPCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerController* VIPPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerState* VIPPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ETeamType LastWinningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bVIPSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VIPKilled, meta=(AllowPrivateAccess=true))
    bool bVIPKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ETeamType CurrentVIPTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* RecentArrester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* RecentFreer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* RecentVIPKiller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VIPRescueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VIPExecuteText;
    
    AVIPEscortGS();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VIPKilled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VIPArrested();
    
};

