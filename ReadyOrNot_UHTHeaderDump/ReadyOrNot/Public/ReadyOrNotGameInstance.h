#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AdvancedSessions -ObjectName=AdvancedFriendsGameInstance -FallbackName=AdvancedFriendsGameInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESessionType.h"
#include "ELastMenuStateBeforeJoin.h"
#include "LevelDataLookupTable.h"
#include "ReplayEvent.h"
#include "ReplayData.h"
#include "ReadyOrNotGameInstance.generated.h"

class UObject;
class UUserWidget;
class AReadyOrNotGameState;
class AReadyOrNotGameMode;
class UHostMigrationManager;
class UModioManager;
class UReadyOrNotBackend;
class UClass;
class UMaterialParameterCollection;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API UReadyOrNotGameInstance : public UAdvancedFriendsGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameServerPinged, const FString&, ConnectionAddress);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotBackend* ReadyOrNotBackend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UModioManager* ModioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* WeaponFOVMaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESessionType SessionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UClass>> LazyLoadedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> LazyLoadedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SpawnWidgetOnLevelLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, bool> OwnedDLCMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PreviouslyJoinedGames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DedicatedServerGamesPlayedWithoutReturningToLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DedicatedServerMapIdx;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameServerPinged OnConnectSteamServerByIP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHostedGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Saved_RoundTimerGameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Saved_RoundTimerBetweenMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Saved_ReinforcementTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Saved_Timelimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Saved_RoundsPerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Saved_Scorelimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Saved_AiEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSinglePlayerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ActivePauseConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHostMigrationManager* HostMigrationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MainMenuDisplayMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelDataLookupTable ModdedMapLookUpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BuiltMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowingFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRecordingReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bReplayBeginTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayEvent> ReplayEvents;
    
    UReadyOrNotGameInstance();
    UFUNCTION(BlueprintCallable)
    void StopRecordingReplayFromBP();
    
    UFUNCTION(BlueprintCallable)
    void StopRecordingReplay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopGeneratingPSOCache();
    
    UFUNCTION(BlueprintCallable)
    void StartRecordingReplay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartGeneratingPSOCache();
    
    UFUNCTION(BlueprintCallable)
    void SetLastJoinState(ELastMenuStateBeforeJoin LastJoiNState);
    
    UFUNCTION(BlueprintCallable)
    bool SetInputAudioDevice(const FString& DeviceName, bool bShouldSave);
    
    UFUNCTION(BlueprintCallable)
    void RetryLogin();
    
    UFUNCTION(BlueprintCallable)
    void RenameReplay(const FString& ReplayName, const FString& NewFriendlyReplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemovePauseGameCondition(const FString& PauseCondition);
    
    UFUNCTION(BlueprintCallable)
    void PlayReplayFromBP(const FString& ReplayName);
    
    UFUNCTION(BlueprintCallable)
    void OpenReplayFolder();
    
    UFUNCTION(BlueprintCallable)
    bool OnWindowCloseRequested();
    
    UFUNCTION(BlueprintCallable)
    void OnConnectSteamServer(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool IsReplaySystemEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsPublicMissionInProgress();
    
    UFUNCTION()
    bool IsNetworkCompatible(const uint32 LocalNetworkVersion, const uint32 RemoteNetworkVersion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoggedIntoBackend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHostMigrationInProgress(FString& MigratedHostToName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameModded();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Gratr();
    
    UFUNCTION(BlueprintCallable)
    FString GetSessionTicket();
    
    UFUNCTION(BlueprintCallable)
    TArray<FReplayEvent> GetReplayEvents();
    
    UFUNCTION()
    uint32 GetLocalNetworkVersion();
    
    UFUNCTION(BlueprintCallable)
    FString GetFriendlyGamemodeName(const FString& UnfriendlyName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDiscordOneTimeUseCode();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetBuiltModdedMapList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetBuiltMapList();
    
    UFUNCTION(BlueprintCallable)
    FString GetBestGuessMapName(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    bool GetBanned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetBackendState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvailableAudioDevices(TArray<FString>& OutAudioDevices);
    
    UFUNCTION(BlueprintCallable)
    FString GetAndClearMainMenuDisplayMessage();
    
    UFUNCTION(BlueprintCallable)
    ELastMenuStateBeforeJoin GetAndClearLastJoinState();
    
    UFUNCTION(BlueprintCallable)
    TArray<AReadyOrNotGameState*> GetAllGameStates();
    
    UFUNCTION(BlueprintCallable)
    TArray<AReadyOrNotGameMode*> GetAllGameModes();
    
    UFUNCTION(BlueprintCallable)
    void GenerateURLMap();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FReplayData> FindReplays();
    
    UFUNCTION(BlueprintCallable)
    void DeleteReplay(const FString& ReplayName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ConnectSteamServer(const FString& ServerConnect);
    
    UFUNCTION(BlueprintCallable)
    void BuildMapList();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDecalSettings();
    
    UFUNCTION(BlueprintCallable)
    void AddReplayEvent(const FString& Name, FVector Location, float Timestamp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddPauseGameCondition(const FString& PauseCondition);
    
};

