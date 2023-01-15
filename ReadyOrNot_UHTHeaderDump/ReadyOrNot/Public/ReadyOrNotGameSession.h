#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameSession -FallbackName=GameSession
//CROSS-MODULE INCLUDE V2: -ModuleName=Zeuzsdk -ObjectName=ZeuzRegion -FallbackName=ZeuzRegion
//CROSS-MODULE INCLUDE V2: -ModuleName=Zeuzsdk -ObjectName=ZeuzPayloadGetOut -FallbackName=ZeuzPayloadGetOut
//CROSS-MODULE INCLUDE V2: -ModuleName=Zeuzsdk -ObjectName=ZeuzMatchMakingStatus -FallbackName=ZeuzMatchMakingStatus
#include "ReadyOrNotGameSession.generated.h"

class UReadyOrNotSessionData;

UCLASS(Blueprintable)
class READYORNOT_API AReadyOrNotGameSession : public AGameSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotSessionData* SessionData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MapList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReturnToLobbyAfterXMissions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConnections;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminPassword;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LoggedInAdmins;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BanList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTeamKillsBeforeAutoKick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTeamKillsBeforeAutoBan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsUntilKickedForAFK;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsUntilAutostartLobby;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPlayersForAutostart;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundTimerGameStart;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundTimerBetweenMaps;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReinforcementTimer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTimer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timelimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Scorelimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoundsPerMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAiEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClientNetSpeed;
    
    AReadyOrNotGameSession();
    UFUNCTION(BlueprintCallable)
    void WriteOutConfig();
    
    UFUNCTION(BlueprintCallable)
    void UpdateServerMatchmakeQueue();
    
    UFUNCTION(BlueprintCallable)
    void SetServerSettings(float NewRoundTimerGameStart, float NewRoundTimerBetweenMaps, float NewReinforcementTimer, float NewTimelimit, int32 NewRoundsPerMap, int32 NewScorelimit, bool NewAiEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RefreshMatchmakeServer();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingCreateParty(const FZeuzMatchMakingStatus& MatchmakingStatus, const FString& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnGetRegions(const TArray<FZeuzRegion>& ZeuzRegions, const FString& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnGetPayloadsMatchmakingCreateParty(const FZeuzPayloadGetOut& PayloadOut, const FString& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnGetPayloadServerRefresh(const FZeuzPayloadGetOut& PayloadOut, const FString& Error);
    
    UFUNCTION(BlueprintCallable)
    void MakeLoadingMapOnlyURL(const FString& MapURL);
    
    UFUNCTION(BlueprintCallable)
    void AddServerToMatchMakeQueue();
    
};

