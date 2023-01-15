#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ELoginState.h"
#include "ReadyOrNotBackend.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotBackend : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStatsUploadProgress, const FString&, Filename, float, Percentage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStatsStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStatsSaved, bool, bWasSuccessful, const FString&, StatsName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnCheckedBanStatus, const FString&, BannedSteamId, bool, bIsBanned, const FString&, BanReason, bool, bIsMySteamId);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Ticket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedDiscordOneTimeUseCode;
    
    UPROPERTY(EditAnywhere)
    uint8 rgchToken[1024];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoginState LoginState;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatsStarted OnStatsStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatsUploadProgress OnStatsUploadProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatsSaved OnStatsSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProfileInProgress;
    
    UReadyOrNotBackend();
private:
    UFUNCTION(BlueprintCallable)
    void TickLoginDelay();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartCapturingProfile();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerGameFinishedMetric(const FString& InMap, const FString& InGameType, float InAverageFps);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStartedMetric(const FString& InMap, const FString& InGameType, const int32 InNumPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnGameFinishedMetric(const FString& InMap, const FString& InGameType, const FString& InGameResult);
    
    UFUNCTION(BlueprintCallable)
    void OnGameCrashedMetric(const FString& InState);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedCapturingProfile();
    
    UFUNCTION(BlueprintCallable)
    void DoLogin();
    
};

