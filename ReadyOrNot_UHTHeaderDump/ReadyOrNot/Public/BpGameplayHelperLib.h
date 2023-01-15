#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECOOPMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PlayerDetails.h"
#include "LoadoutEquipOptions.h"
#include "WidgetLookupData.h"
#include "AnimatedIcon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointDamageEvent -FallbackName=PointDamageEvent
#include "SavedLoadout.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialDamageEvent -FallbackName=RadialDamageEvent
#include "EWeaponType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "ETeamType.h"
#include "EItemSelectionInterfaceType.h"
#include "ESwatCommand.h"
#include "EStructureCastPathway.h"
#include "EItemType.h"
#include "EOptiwandViewMode.h"
#include "EGrenadeThrowSettingType.h"
#include "EShotgunReloadType.h"
#include "EEmptyMagReloadType.h"
#include "EScoreReadoutMode.h"
#include "ENVGStyle.h"
#include "EInterfaceSoundType.h"
#include "LevelDataLookupTable.h"
#include "BpGameplayHelperLib.generated.h"

class AActor;
class USkeletalMeshComponent;
class UUserWidget;
class APlayerController;
class ABaseItem;
class AReadyOrNotGameState;
class UReadyOrNotSaveGame;
class ABaseMagazineWeapon;
class AReadyOrNotCharacter;
class ACivilianCharacter;
class UDataSingleton;
class UStaticMeshComponent;
class UInteractableComponent;
class UHumanCharacterHUD_V2;
class ULicenseSave;
class UItemData;
class AMapStatisticsSystem;
class ULookupData;
class UPenetrationData;
class UMusicData;
class APlayerCharacter;
class UReadyOrNotSingleplayerProfile;
class UReadyOrNotMultiplayerProfile;
class UReadyOrNotMetaProfile;
class UReadyOrNotProfile;
class UWorld;
class UReadyOrNotGameInstance;
class AReadyOrNotPlayerState;
class ASuspectCharacter;
class UWidgetsData;
class UTexture2D;
class UDataTable;

UCLASS(Blueprintable)
class READYORNOT_API UBpGameplayHelperLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBpGameplayHelperLib();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnloadCustomizationLevels(UWorld* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleGrenadeDrawDebug();
    
    UFUNCTION(BlueprintCallable)
    static void ToggleFriendlyNameplates();
    
    UFUNCTION(BlueprintCallable)
    void ShowLoadoutOnMeshes(FSavedLoadout Loadout, USkeletalMeshComponent* BodyMesh, USkeletalMeshComponent* HeadMesh, USkeletalMeshComponent* ArmorMesh, USkeletalMeshComponent* ItemMesh, UStaticMeshComponent* ItemMagMesh);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUseMeshpainting(bool bUseMeshPainting);
    
    UFUNCTION(BlueprintCallable)
    static bool SetShowFPS(bool bShowFPS);
    
    UFUNCTION(BlueprintCallable)
    static bool SetShowControls(bool bShowControls);
    
    UFUNCTION(BlueprintCallable)
    static bool SetShellLifetime(float ShellLifeTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSendMapStatistics(bool bSendMapStatistics);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPublicLobbyCooldown(int32 Seconds);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMouseSensitivity(float MouseSensitivity);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMouseInverted(bool bInvertVertical, bool bInvertHorizontal);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMicInputGain(float MicInputGain);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLastConnectedServerIP(const FString& IP);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFreelookSensitivity(float Sensitivity);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFoV(float FOV);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFlashlightShadows(bool bFlashLightShadows);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBounceLightEnabled(bool bBounceLightEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveZoomADSSetting(bool bZoomADS);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveVOIPVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveUIVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveToggleADS(bool ToggleADS);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveTeamViewSetting(bool bEnabled, int32 TeamViewFPS);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveShowTeamStatus(bool bShowTeamStatus);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveShowPlayerIconSetting(bool bShowPlayerIcon);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveShowHUDSetting(bool bShowHUD);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveShowHesitationBarSetting(bool bShowHesitationBar);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveShowHealthIconSetting(bool bShowHealthIcons);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveShowCommandMarkersSetting(bool bShowCommandMarkers);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveShowCommandContextHintSetting(bool bShowCommandContextHint);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveShotgunSettings(EShotgunReloadType ShotgunReloadType);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveSFXVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    static bool SaveServersideChecksum(bool bServerSideChecksumEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveSelectedAudioDevice(const FString& InAudioDevice);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveScoreReadoutSetting(EScoreReadoutMode InScoreReadoutMode);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveSafeZoneSettings(float SafeZoneX, float SafeZoneY);
    
    UFUNCTION(BlueprintCallable)
    static bool SavePlayerDetails(FPlayerDetails PlayerDetails);
    
    UFUNCTION(BlueprintCallable)
    static bool SavePiPResolutionScale(float ResolutionScale);
    
    UFUNCTION(BlueprintCallable)
    static bool SavePiPFPS(bool bEnabled, float FPS);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveOptiwandViewMode(EOptiwandViewMode OptiwandViewMode);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveNVGStyle(const ENVGStyle NewNVGStyle);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveMusicVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveMirrorResolutionScale(float ResolutionScale);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveMirrorReflectionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveMirrorEnabledOnlyInLobby(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveMirrorDynamicShadowsEnabled(bool bShowDynamicShadows);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveMirrorDecalsEnabled(bool bShowDecals);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveMirrorAntiAliasEnabled(bool bShowAntiAlias);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveMaxShellsInWorld(int32 NewMaxShells);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveMasterVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveLoadout(FSavedLoadout Loadout, const FString& LoadoutName);
    
    UFUNCTION(BlueprintCallable)
    static void SaveLicenseSave(ULicenseSave* LevelStats);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveItemSelectionStyleSettings(EItemSelectionInterfaceType ItemSelectionInterface);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveHUDSettings(bool bShowHUD, bool bCurvedHUD, bool bShowCompass, bool ShowWeaponHUD, bool bShowMagazineHUD, bool bShowChat, bool bSwayHUD, bool b2DReload, float IconScale, float QuickThrowScale, int32 FireModeDisplayOption, bool bShowMultiplayerNames, bool bShowButtonPrompts);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveHotkeyHintSetting(bool bShowHotkeyHint);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveHitmarkerSfxEnabled(bool bHitmarkerSfxEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveGrenadeSettings(EGrenadeThrowSettingType GrenadeThrowType);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveEmptyMagReloadSettings(EEmptyMagReloadType EmptyMagReloadType);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveDefaultCommandAsOption(int32 DefaultCommandOption, int32 DefaultDoorUnknownCommandOption, int32 DefaultDoorOpenCommandOption, int32 DefaultDoorLockedCommandOption, int32 DefaultDoorUnlockedCommandOption);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveDefaultCommand(ESwatCommand DefaultCommand, ESwatCommand DefaultDoorUnknownCommand, ESwatCommand DefaultDoorOpenCommand, ESwatCommand DefaultDoorLockedCommand, ESwatCommand DefaultDoorUnlockedCommand);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveWidgetFromViewport(const FString& WidgetName);
    
    UFUNCTION(BlueprintCallable)
    static bool ReloadSettings();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void PlayInterfaceSound(UWorld* WorldContext, EInterfaceSoundType SoundClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadZoomADSSetting(bool& bZoomADS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadToggleADS(bool& ToggleADS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadTeamViewFPSSetting(bool& bEnabled, int32& TeamViewFPS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadShowTeamStatus(bool& bShowTeamStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadShowPlayerNamesSetting(bool& bShowPlayerNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadShowPlayerIconSetting(bool& bShowPlayerIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadShowHUDSetting(bool& bShowHUD);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadShowHesitationBarSetting(bool& bShowHesitationBar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadShowHealthIconSetting(bool& bShowHealthIcons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadShowCommandMarkersSetting(bool& bShowCommandMarkers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadShowCommandContextHintSetting(bool& bShowCommandContextHint);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadShotgunSettings(EShotgunReloadType& ShotgunReloadType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadServersideChecksum(bool& bServerSideChecksumEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadSelectedAudioDevice(FString& OutAudioDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadScoreReadoutSetting(EScoreReadoutMode& OutScoreReadoutMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadSafeZoneSettings(float& SafeZoneX, float& SafeZoneY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadPlayerDetails(FPlayerDetails& PlayerDetails);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadPiPResolutionScale(float& ResolutionScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadPiPFPS(bool& bEnabled, float& FPS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadOptiwandViewMode(EOptiwandViewMode& OptiwandViewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadNVGStyle(ENVGStyle& NVGStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadMirrorResolutionScale(float& ResolutionScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadMirrorReflectionEnabled(bool& bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadMirrorEnabledOnlyInLobby(bool& bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadMirrorDynamicShadowsEnabled(bool& bShowDynamicShadows);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadMirrorDecalsEnabled(bool& bShowDecals);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadMirrorAntiAliasEnabled(bool& bShowAntiAlias);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadMaxShellsInWorld(int32& MaxShells);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadLoadoutAndEquipPlayer(FSavedLoadout& Loadout, AReadyOrNotCharacter* EquipPlayer, const FString& LoadoutName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadLoadout(FSavedLoadout& Loadout, const FString& LoadoutName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULicenseSave* LoadLicenseSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadItemSelectionStyleSettings(EItemSelectionInterfaceType& ItemSelectionInterface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadHUDSettings(bool& bShowHUD, bool& bCurvedHUD, bool& bShowCompass, bool& bShowWeaponHUD, bool& bShowMagazineHUD, bool& bShowChat, bool& bSwayHUD, bool& b2DReload, float& IconScale, float& QuickThrowScale, int32& FireModeDisplayOption, bool& bShowPlayerNames, bool& bShowButtonPrompts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadHotkeyHintSetting(bool& bShowHotkeyHint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadGrenadeSettings(EGrenadeThrowSettingType& GrenadeThrowType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadEmptyMagReloadSettings(EEmptyMagReloadType& EmptyMagReloadType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadDefaultCommandsAsOption(int32& DefaultCommandOption, int32& DefaultDoorUnknownCommandOption, int32& DefaultDoorOpenCommandOption, int32& DefaultDoorLockedCommandOption, int32& DefaultDoorUnlockedCommandOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LoadDefaultCommands(ESwatCommand& DefaultCommand, ESwatCommand& DefaultDoorUnknownCommand, ESwatCommand& DefaultDoorOpenCommand, ESwatCommand& DefaultDoorLockedCommand, ESwatCommand& DefaultDoorUnlockedCommand);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void LoadCustomizationLevels(UWorld* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSupporterOnlyBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShowHUDEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRTXDMOBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPvPSupported(FLevelDataLookupTable LookupTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPreMissionBriefingBeforeLoadout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsObjectiveTarget(AReadyOrNotCharacter* Target, AReadyOrNotCharacter* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInPublicLobbyCooldown(float& SecondsRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFriendly(AReadyOrNotGameState* GameState, ETeamType TeamOne, ETeamType TeamTwo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnemy(ETeamType TeamOne, ETeamType TeamTwo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditorBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDMOPVPOnly();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDMOMatchMake();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDMOBuild();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDLCLocked(TSubclassOf<ABaseItem> Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCOOPSupported(FLevelDataLookupTable LookupTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasWidgetInViewport(const FString& WidgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool HasLineOfSightLoc(UWorld* WorldContext, FVector A, FVector B, TArray<AActor*> ignoredActors, TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasLineOfSightExt(AActor* Observer, AActor* B, FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasLineOfSight(AActor* Observer, AActor* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorld* GetWorldStatic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorld* GetWorldBP(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUserWidget*> GetWidgetsFromViewport(const FString& WidgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWidgetLookupData GetWidgetDataFromLookupData(const FString& WidgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWidgetsData* GetWidgetData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVolumes(float& MasterVolume, float& UIVolume, float& SFXVolume, float& MusicVolume, float& VOIPVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUseMeshpainting(bool& bUseMeshPainting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetTrapLookupDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetSuspectArmourDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetSpeechLookupDataTable(const FString& Speaker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UReadyOrNotSingleplayerProfile* GetSingleplayerProfile(const FString& LoadSlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetShowFPS(bool& bShowFPS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetShowControls(bool& bShowControls);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetShellLifetime(float& ShellLifeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSendMapStatistics(bool& bSendMapStatistics);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UReadyOrNotGameInstance* GetRONGameInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataSingleton* GetRoNData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRandomLoadingScreenTip(FText& Tip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRadialDamageData(FRadialDamageEvent DamageEvent, FVector& Origin, float& BaseDamage, float& MinimumDamage, float& InnerRadius, float& OuterRadius, float& DamageFalloff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetProjectVersionAsInt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPointDamageData(FPointDamageEvent DamageEvent, float& Damage, FVector_NetQuantizeNormal& ShotDirection, FHitResult& HitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPenetrationData* GetPenetrationData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetPairedInteractionDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMusicData* GetMusicData(UWorld* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UReadyOrNotMultiplayerProfile* GetMultiplayerProfile(const FString& LoadSlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetMoveStyleDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMouseSensitivity(float& MouseSensitvity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMouseInverted(bool& bInvertVertical, bool& bInvertHorizontal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMicInputGain(float& MicInputGain);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UReadyOrNotMetaProfile* GetMetaProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static AMapStatisticsSystem* GetMapStatistics(UWorld* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLevelDataLookupTable GetMapDetailsFromName(const FString& MapName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULookupData* GetLookupData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AReadyOrNotPlayerState* GetLocalPlayerState(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLocalization(FString& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLoadURLFromData(FLevelDataLookupTable LookUp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLoadoutNames(TArray<FString>& LoadoutNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetLoadingScreenLevelImage(const FString& Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UReadyOrNotSaveGame* GetLoadGameInstance(const FString& LoadSlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FLevelDataLookupTable> GetLevels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetLevelLookupDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FLevelDataLookupTable GetLevelData(UWorld* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLastConnectedServerIP(FString& IP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetItemLookupDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UItemData* GetItemData(UWorld* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UHumanCharacterHUD_V2* GetHUDWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHitmarkerSfxEnabled(bool& bHitmarkerSfxEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetGameModeSettingsLookupDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UReadyOrNotGameInstance* GetGameInstance(UWorld* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFriendlyModeFromECoopMode(const ECOOPMode InCoopMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFriendlyMapAndModeFromName(const FString& InUrl, FString& OutInternalMapName, FString& OutFriendlyMap, FString& OutFriendlyMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFreelookSensitivity(float& Sensitivity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFoV(float& FOV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFlashlightShadows(bool& bFlashLightShadows);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* GetFirstWidgetFromViewport(const FString& WidgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static APlayerCharacter* GetFirstAlivePlayerControlledCharacter(UWorld* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetExperimentalFeatures(bool& bExperimentalFeatures);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetDoorLookupDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETeamType GetDMOTeamType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDMOGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDMOAddress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDistanceBetweenActors2D(AActor* Actor1, AActor* Actor2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDistanceBetweenActors(AActor* Actor1, AActor* Actor2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UReadyOrNotProfile* GetCurrentProfile(UWorld* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetConversationLookupDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASuspectCharacter* GetClosestActiveSuspect(const FVector& Location, float Distance, bool bMustHaveTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ACivilianCharacter* GetClosestActiveCivilian(const FVector& Location, float Distance, bool bMustHaveTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetCharacterLookOverrideDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBuildTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBuildDate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBounceLightEnabled(bool& bBounceLightEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAttachmentPointsRemaining(FSavedLoadout Loadout);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetAnimatedIconLookupDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAnimatedIcon GetAnimatedIconFromTable(FName RowName, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetAmmoLookupDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetAILookupDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAdditionalBugReportInformation(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerCharacter* FindClosestDeadGuyInRadius(FVector Origin, AActor* Causer, float Radius, bool bIncludeUnconscious);
    
    UFUNCTION(BlueprintCallable)
    static bool EquipLoadoutOnPlayer(FSavedLoadout Loadout, AReadyOrNotCharacter* EquipPlayer, FLoadoutEquipOptions LoadoutEquipOptions);
    
    UFUNCTION(BlueprintCallable)
    static void EnableInteractionForController(AActor* InInteractableActor, APlayerController* InPlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void EnableInteractionFor(AActor* InInteractableActor, APlayerCharacter* InPlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void EnableInteractionCompForController(UInteractableComponent* InteractableComponent, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void DisableInteractionForController(AActor* InInteractableActor, APlayerController* InPlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void DisableInteractionFor(AActor* InInteractableActor, APlayerCharacter* InPlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void DisableInteractionCompForController(UInteractableComponent* InteractableComponent, APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteLoadout(const FString& LoadoutName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EItemType ConvertWeaponTypeToItemType(EWeaponType WeaponType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ConvertSquareVectorToCircle(FVector2D SquareVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWeaponType ConvertItemTypeToWeaponType(EItemType ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertFloatToStringMinutes_Detail(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertFloatToStringMinutes(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertDegreeIntoLetter(float Degrees);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareLevelDataLookupBP(FLevelDataLookupTable A, FLevelDataLookupTable B);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeLocalization(const FString& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRadialDamageEvent CastToRadialDamageEvent(FDamageEvent DamageEvent, EStructureCastPathway& Branches);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPointDamageEvent CastToPointDamageEvent(FDamageEvent DamageEvent, EStructureCastPathway& Branches);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanSwatKillPlayer();
    
    UFUNCTION(BlueprintCallable)
    static void AttachMagazinesToWeapon(TSubclassOf<ABaseMagazineWeapon> WeaponClass, ABaseMagazineWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    static void AddDefaultItemsToPlayer(AReadyOrNotCharacter* Player);
    
};

