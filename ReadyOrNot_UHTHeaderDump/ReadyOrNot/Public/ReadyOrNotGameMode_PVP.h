#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReadyOrNotGameMode.h"
#include "ETeamType.h"
#include "ReadyOrNotGameMode_PVP.generated.h"

class AReadyOrNotPlayerState;
class URoundEndWidget_PVP;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API AReadyOrNotGameMode_PVP : public AReadyOrNotGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoundWon, ETeamType, WinningTeam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRoundStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRoundEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMatchStart);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchStart OnMatchStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoundWon OnRoundWon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoundStart OnRoundStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoundEnd OnRoundEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundEndResetDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MatchEndResetDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URoundEndWidget_PVP> RoundEndWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIncrementedRoundCounterThisRound: 1;
    
public:
    AReadyOrNotGameMode_PVP();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TimeLimitVictoryConditions();
    
public:
    UFUNCTION(BlueprintCallable)
    void TimelimitReached();
    
    UFUNCTION(BlueprintCallable)
    void RoundWonTeam(ETeamType WinningTeam);
    
    UFUNCTION(BlueprintCallable)
    void RoundWon(TArray<AReadyOrNotPlayerState*> WinningPlayers);
    
    UFUNCTION(BlueprintCallable)
    void RoundEnd();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRoundStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRoundEnded();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NextRound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetWinningTeam(ETeamType WinningTeam);
    
    UFUNCTION(BlueprintCallable)
    void MatchEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckRoundEnd(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyDeathsOnWinningTeam();
    
};

