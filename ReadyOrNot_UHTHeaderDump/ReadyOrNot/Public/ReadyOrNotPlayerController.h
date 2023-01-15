#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Zeuzsdk -ObjectName=ZeuzMatchMakingServerInfo -FallbackName=ZeuzMatchMakingServerInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Zeuzsdk -ObjectName=ZeuzMatchMakingPartyInit -FallbackName=ZeuzMatchMakingPartyInit
#include "SavedLoadout.h"
#include "LevelStreamOptions.h"
#include "VoteData.h"
#include "PlanningMarker.h"
#include "PlanningLine.h"
#include "RChatMessage.h"
#include "ETeamType.h"
#include "EFreeDrawColor.h"
#include "EVoteState.h"
#include "ESelectedSpawn.h"
#include "ReadyOrNotPlayerController.generated.h"

class AActor;
class USkeletalMesh;
class APawn;
class ACharacter;
class UUserWidget;
class AReferendum;
class AMapReferendum;
class APlayerReferendum;
class UProgressionComponent;
class ASpectatorPawn;
class APlayerState;
class AReadyOrNotPlayerState;
class ASwatAutomationManager;
class UMaterialInterface;
class ACameraActor;
class ULevelStreaming;

UCLASS(Blueprintable)
class READYORNOT_API AReadyOrNotPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVoiceChannelChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRTXDMOChanged, bool, bRTXOn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPreClientTravel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPawnPossessed, APawn*, PossessedPawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOutOfBoundsChanged, bool, bIsOutOfBounds);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMapListReplicated, const TArray<FString>&, MapList);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHudWidgetsCleared);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressionComponent* ProgressionComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ServerSideChecksum;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnPossessed OnPawnPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOutOfBoundsChanged OnOutOfBoundsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreClientTravel OnPreClientTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* SpectateCamera;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> StreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StreamingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StreamingOptions;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Maplist, meta=(AllowPrivateAccess=true))
    TArray<FString> ReplicatedMapList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapListReplicated OnMapListReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoteAntiSpamDebouncer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVoteData MyVoteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStatsProfiledQueued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> ProtectedWidgetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanOpenOptionsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<FString, UUserWidget*> CreatedWidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FZeuzMatchMakingServerInfo Rep_MatchmakingServerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FZeuzMatchMakingPartyInit Rep_MatchmakingPartyInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwatAutomationManager* SwatAutomationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> DebugActorList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceChannelChanged OnVoiceChannelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHudWidgetsCleared OnHudWidgetsClearedComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* TestCube;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TestMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartedCoopAsSpectator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* LastKilledCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReplaySpectator;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRTXDMOChanged OnRTXDMOChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRChatMessage> ChatMessages;
    
    AReadyOrNotPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinCoop();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Vote(bool VoteYes);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateAchievementProgress(const FString& ID, float Percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnhideAllWeaponAttachments();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnhideAllSmallItemMeshes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnhideAllItemMeshes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRTXDMO();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGodModeOnEveryone();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDeployMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestSendCrash();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestMatchmakingServerRefresh();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestMatchmakingServerCreateParty();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportUp();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToNextRemainingAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TakeDamageExec(float DamageAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwapAllItemSkeletalMeshesToCubes();
    
    UFUNCTION(BlueprintCallable)
    bool StreamInSession(FBlueprintSessionResult SessionResult, ULevelStreaming*& OutStreamedLevel, bool bShouldCreateLoadingScreen);
    
    UFUNCTION(BlueprintCallable)
    bool StreamInLevel(const FString& NewLevel, const FString& Options, ULevelStreaming*& OutStreamedLevel, FLevelStreamOptions LevelStreamOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopVoteInput();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopSwatAutomation();
    
    UFUNCTION(BlueprintCallable)
    void StopSpeaking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartSwatAutomation();
    
    UFUNCTION(BlueprintCallable)
    void StartSpeaking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartBleeding();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnRandomAI(int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnBotsForGame(int32 BotCount);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAIAtLocation(const FString& TableName, FVector Location, FVector MoveLocation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAI(const FString& TableName, int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SoftWinCoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCoopScoreChangeWidget(float ScoreChangeValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTimelimit(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetServerPasswordOnConnection(const FString& Password);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetScorelimit(int32 Score);
    
    UFUNCTION(BlueprintCallable)
    void SetPreferredTeamUniqueNetIdOnConnection(const FString& UniqueId);
    
    UFUNCTION(BlueprintCallable)
    void SetMousePosition(float LocationX, float LocationY);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetHostMigrationComplete();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetClubMusicMasterVolume(float Volume);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllComponentsUseParentsBounds();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerStatFileStop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerStatFileStart();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SwapPlayersTeam(APlayerState* ps);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StatFile(bool bStartStatFile);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartSpectating();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartReferendum(TSubclassOf<AReferendum> ReferendumClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartPlayerReferendum(TSubclassOf<APlayerReferendum> ReferendumClass, AReadyOrNotPlayerState* TargetPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartMapReferendum(TSubclassOf<AMapReferendum> ReferendumClass, const FString& MapURL);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetTeamType(ETeamType NewTeam);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSpawn(ETeamType SpawnTeam, ESelectedSpawn NewSpawnPoint);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SetHasFinishedLoading();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetDeployableDepot(int32 NewDepot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetChecksum(int32 Checksum);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendChatMessage(FRChatMessage ChatMessage);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RespawnAsLobby(TSubclassOf<ASpectatorPawn> Class, FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestLoadoutChange(FSavedLoadout Loadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveMarker(int32 ID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveLine(int32 ID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ReleaseVIP();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ReferendumVoteYes();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ReferendumVoteNo();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LoginAsAdmin(const FString& Password);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Equip(const FString& ItemName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EnablePersonnel(int32 PersonnelNum, int32 MapPointNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EnableDeployable(int32 DeployableNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DisablePersonnel(int32 PersonnelNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DisableDeployable(int32 DeployableNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ClearDrawingPointData(bool bClearAll, bool bClearAllFloors, int32 FloorNum);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_BecomeVIP();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AdminRestartServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AdminRemoveMapFromRotationByIndex(int32 Idx);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AdminRemoveMapFromRotation(const FString& MapURL);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AdminNextMap();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AdminKickPlayer(APlayerState* KickingPlayerState, const FText& ReasonOveride);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AdminBanPlayer(APlayerState* BanningPlayerState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AdminAddMapToRotationAtIndex(const FString& MapURL, int32 Idx);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AdminAddMapToRotation(const FString& MapURL);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddMarker(const FPlanningMarker& Marker);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddLine(const FPlanningLine& Line);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddDrawingPointData(FVector2D DrawingPointData, int32 FloorNum, EFreeDrawColor Color, bool bNewPoint, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    void SendChatMessage(FRChatMessage ChatMessage);
    
    UFUNCTION(BlueprintCallable)
    bool SaveFileToUserCloud(const FString& FullPath);
    
    UFUNCTION(BlueprintCallable)
    void SaveChatMessage(FRChatMessage Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void RetrieveChatLog(TArray<FRChatMessage>& OutMessages);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetKeybinds();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetDoorLockStateKnowledge();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAI(float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestVoteInput(FVoteData CurrentVoteData);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReportAllInstancedStaticMeshes();
    
    UFUNCTION(BlueprintCallable)
    void ReplicateMapListIfAdmin();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveWeaponSkin();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveCharacterSkin();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseVIP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintGPUBrand();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayDeadAllEnemies();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayAnimationFromLookupTable(const FString& AnimationRowName);
    
    UFUNCTION(BlueprintCallable)
    void PassMouseControlToValidWidget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OptimizeWorld();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStreamedLevelLoadedRemovingLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnStreamedLevelLoadedExecuteOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnStreamedLevelLoadedComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnSessionJoinSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnSessionJoinFailed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSaveLoadout();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Maplist();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OnlyCastLocalPlayerDynamicShadow();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelOpen();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyRespawnTime(float RespawnTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPersonnelAtPoint(int32 PersonnelNum, int32 MapPointNum);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RemovePersonnelAtPoint(int32 PersonnelNum);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ForcePlanningRefresh();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MeshMergeEverything();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MakeCrash();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KnockoutAllEnemies();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillSWATTeam();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Kill(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraFading();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideAllWeaponAttachments();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideAllSmallItemMeshes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideAllItemMeshes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveSWATRam();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GibAllComponents();
    
    UFUNCTION(BlueprintCallable)
    EVoteState GetVote();
    
    UFUNCTION(BlueprintCallable)
    ETeamType GetTeamType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRespawnTimeRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetReplicatedMapRotation();
    
    UFUNCTION(BlueprintCallable)
    FString GetPrefferredTeamUniqueNetIdOnConnection();
    
    UFUNCTION(BlueprintCallable)
    FString GetPasswordOnConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNetworkConnectionStatus(float& AvgLag, int32& OutLostPackets, int32& InLostPackets, int32& OutLostPacketPrcnt, int32& InLostPacketPrcnt);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FreeVIP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FlushDeadBodies();
    
    UFUNCTION(BlueprintCallable)
    void EscapeMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EquipAndDropEvidence();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Equip(const FString& ItemName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void EndVote();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableWeaponFovShader();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableScopeAlignmentTool();
    
    UFUNCTION(BlueprintCallable)
    void EnablePlayerInput();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DropAllSuspectWeapons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DownloadBlacklistHashes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayAllPlayingFMODEvents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableWeaponFovShader();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableSkeletalMeshShadowCasting();
    
    UFUNCTION(BlueprintCallable)
    void DisableForceShowMouseCursor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableAllMaterials();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableAllItemTicks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableAllItemMaterials();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroySwatTeam();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroySwatInventoryItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroySwatControllers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroySwatAnimation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyEverything();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllWorldDynamicItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllWidgets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllSuspects();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllLights();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllItemMeshes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllExceptClosestDoor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllExceptClosestCharacter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllDynamicLights();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllDecals();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllActorsOfName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeleteAnyNonMeshComponents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMigrateHost();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void DebugClientStartHostMigration();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartOnlineGame();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpawned();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetSpectatorCamera(FVector CameraLocation, FRotator CameraRotation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetNetSpeed(int32 NewNetSpeed);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientJoinVoice(const FString& OnlineSessionId, const int32& TeamNum);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEndOnlineGame();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetViewTargetWithBlend(APawn* NewViewTarget);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetControlRotation(FRotator NewControlRotation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RemoveWidget(TSubclassOf<UUserWidget> Widget);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PostLogin();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HideHUDWidgets();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_GetStats();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DisableUIMouse();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CreateWidget(const FString& WidgetName, bool bForceAddToWidgetStack, bool bIsEscapeKey);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CreateMessageDisplay(const FString& MessageTxt, const FString& ButtonTxt);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CreateLoadingScreen(const FString& Map, const FString& Mode, const FString& SessionName, bool bIsSeamlessTravel);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ClearHUDWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSetSpawn(ETeamType Team, ESelectedSpawn NewSpawnPoint, bool bSameSpawn);
    
    UFUNCTION(BlueprintCallable)
    bool CanSetDepotTo(int32 NewDepot, bool bSameDepot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnablePersonnel(int32 PersonnelNum, int32 MapPointNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnableDeployable(int32 DeployableNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDisablePersonnel(int32 PersonnelNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDisableDeployable(int32 DeployableNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_ReturnToMenu(const FText& ReturnReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleMessage(FRChatMessage ChatMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClientWasKicked(const FText& KickReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void BeginVote(const FString& reason, const FString& Question, bool CanVoteNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ArrestOne();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyWeaponSkin(const FString& SkinName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyCharacterSkin(const FString& SkinName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIStopHide();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIHide();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIEquipSecondary();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIEquipPrimary();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AcknowledgeVote(FVoteData CurrentVoteData);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AbortCover();
    
};

