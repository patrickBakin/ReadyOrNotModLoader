#include "BpGameplayHelperLib.h"
#include "Templates/SubclassOf.h"

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

void UBpGameplayHelperLib::UnloadCustomizationLevels(UWorld* WorldContext) {
}

void UBpGameplayHelperLib::ToggleGrenadeDrawDebug() {
}

void UBpGameplayHelperLib::ToggleFriendlyNameplates() {
}

void UBpGameplayHelperLib::ShowLoadoutOnMeshes(FSavedLoadout Loadout, USkeletalMeshComponent* BodyMesh, USkeletalMeshComponent* HeadMesh, USkeletalMeshComponent* ArmorMesh, USkeletalMeshComponent* ItemMesh, UStaticMeshComponent* ItemMagMesh) {
}

bool UBpGameplayHelperLib::SetUseMeshpainting(bool bUseMeshPainting) {
    return false;
}

bool UBpGameplayHelperLib::SetShowFPS(bool bShowFPS) {
    return false;
}

bool UBpGameplayHelperLib::SetShowControls(bool bShowControls) {
    return false;
}

bool UBpGameplayHelperLib::SetShellLifetime(float ShellLifeTime) {
    return false;
}

bool UBpGameplayHelperLib::SetSendMapStatistics(bool bSendMapStatistics) {
    return false;
}

bool UBpGameplayHelperLib::SetPublicLobbyCooldown(int32 Seconds) {
    return false;
}

bool UBpGameplayHelperLib::SetMouseSensitivity(float MouseSensitivity) {
    return false;
}

bool UBpGameplayHelperLib::SetMouseInverted(bool bInvertVertical, bool bInvertHorizontal) {
    return false;
}

bool UBpGameplayHelperLib::SetMicInputGain(float MicInputGain) {
    return false;
}

bool UBpGameplayHelperLib::SetLastConnectedServerIP(const FString& IP) {
    return false;
}

bool UBpGameplayHelperLib::SetFreelookSensitivity(float Sensitivity) {
    return false;
}

bool UBpGameplayHelperLib::SetFoV(float FOV) {
    return false;
}

bool UBpGameplayHelperLib::SetFlashlightShadows(bool bFlashLightShadows) {
    return false;
}

bool UBpGameplayHelperLib::SetBounceLightEnabled(bool bBounceLightEnabled) {
    return false;
}

bool UBpGameplayHelperLib::SaveZoomADSSetting(bool bZoomADS) {
    return false;
}

bool UBpGameplayHelperLib::SaveVOIPVolume(float Volume) {
    return false;
}

bool UBpGameplayHelperLib::SaveUIVolume(float Volume) {
    return false;
}

bool UBpGameplayHelperLib::SaveToggleADS(bool ToggleADS) {
    return false;
}

bool UBpGameplayHelperLib::SaveTeamViewSetting(bool bEnabled, int32 TeamViewFPS) {
    return false;
}

bool UBpGameplayHelperLib::SaveShowTeamStatus(bool bShowTeamStatus) {
    return false;
}

bool UBpGameplayHelperLib::SaveShowPlayerIconSetting(bool bShowPlayerIcon) {
    return false;
}

bool UBpGameplayHelperLib::SaveShowHUDSetting(bool bShowHUD) {
    return false;
}

bool UBpGameplayHelperLib::SaveShowHesitationBarSetting(bool bShowHesitationBar) {
    return false;
}

bool UBpGameplayHelperLib::SaveShowHealthIconSetting(bool bShowHealthIcons) {
    return false;
}

bool UBpGameplayHelperLib::SaveShowCommandMarkersSetting(bool bShowCommandMarkers) {
    return false;
}

bool UBpGameplayHelperLib::SaveShowCommandContextHintSetting(bool bShowCommandContextHint) {
    return false;
}

bool UBpGameplayHelperLib::SaveShotgunSettings(EShotgunReloadType ShotgunReloadType) {
    return false;
}

bool UBpGameplayHelperLib::SaveSFXVolume(float Volume) {
    return false;
}

bool UBpGameplayHelperLib::SaveSettings() {
    return false;
}

bool UBpGameplayHelperLib::SaveServersideChecksum(bool bServerSideChecksumEnabled) {
    return false;
}

bool UBpGameplayHelperLib::SaveSelectedAudioDevice(const FString& InAudioDevice) {
    return false;
}

bool UBpGameplayHelperLib::SaveScoreReadoutSetting(EScoreReadoutMode InScoreReadoutMode) {
    return false;
}

bool UBpGameplayHelperLib::SaveSafeZoneSettings(float SafeZoneX, float SafeZoneY) {
    return false;
}

bool UBpGameplayHelperLib::SavePlayerDetails(FPlayerDetails PlayerDetails) {
    return false;
}

bool UBpGameplayHelperLib::SavePiPResolutionScale(float ResolutionScale) {
    return false;
}

bool UBpGameplayHelperLib::SavePiPFPS(bool bEnabled, float FPS) {
    return false;
}

bool UBpGameplayHelperLib::SaveOptiwandViewMode(EOptiwandViewMode OptiwandViewMode) {
    return false;
}

bool UBpGameplayHelperLib::SaveNVGStyle(const ENVGStyle NewNVGStyle) {
    return false;
}

bool UBpGameplayHelperLib::SaveMusicVolume(float Volume) {
    return false;
}

bool UBpGameplayHelperLib::SaveMirrorResolutionScale(float ResolutionScale) {
    return false;
}

bool UBpGameplayHelperLib::SaveMirrorReflectionEnabled(bool bEnabled) {
    return false;
}

bool UBpGameplayHelperLib::SaveMirrorEnabledOnlyInLobby(bool bEnabled) {
    return false;
}

bool UBpGameplayHelperLib::SaveMirrorDynamicShadowsEnabled(bool bShowDynamicShadows) {
    return false;
}

bool UBpGameplayHelperLib::SaveMirrorDecalsEnabled(bool bShowDecals) {
    return false;
}

bool UBpGameplayHelperLib::SaveMirrorAntiAliasEnabled(bool bShowAntiAlias) {
    return false;
}

bool UBpGameplayHelperLib::SaveMaxShellsInWorld(int32 NewMaxShells) {
    return false;
}

bool UBpGameplayHelperLib::SaveMasterVolume(float Volume) {
    return false;
}

bool UBpGameplayHelperLib::SaveLoadout(FSavedLoadout Loadout, const FString& LoadoutName) {
    return false;
}

void UBpGameplayHelperLib::SaveLicenseSave(ULicenseSave* LevelStats) {
}

bool UBpGameplayHelperLib::SaveItemSelectionStyleSettings(EItemSelectionInterfaceType ItemSelectionInterface) {
    return false;
}

bool UBpGameplayHelperLib::SaveHUDSettings(bool bShowHUD, bool bCurvedHUD, bool bShowCompass, bool ShowWeaponHUD, bool bShowMagazineHUD, bool bShowChat, bool bSwayHUD, bool b2DReload, float IconScale, float QuickThrowScale, int32 FireModeDisplayOption, bool bShowMultiplayerNames, bool bShowButtonPrompts) {
    return false;
}

bool UBpGameplayHelperLib::SaveHotkeyHintSetting(bool bShowHotkeyHint) {
    return false;
}

bool UBpGameplayHelperLib::SaveHitmarkerSfxEnabled(bool bHitmarkerSfxEnabled) {
    return false;
}

bool UBpGameplayHelperLib::SaveGrenadeSettings(EGrenadeThrowSettingType GrenadeThrowType) {
    return false;
}

bool UBpGameplayHelperLib::SaveEmptyMagReloadSettings(EEmptyMagReloadType EmptyMagReloadType) {
    return false;
}

bool UBpGameplayHelperLib::SaveDefaultCommandAsOption(int32 DefaultCommandOption, int32 DefaultDoorUnknownCommandOption, int32 DefaultDoorOpenCommandOption, int32 DefaultDoorLockedCommandOption, int32 DefaultDoorUnlockedCommandOption) {
    return false;
}

bool UBpGameplayHelperLib::SaveDefaultCommand(ESwatCommand DefaultCommand, ESwatCommand DefaultDoorUnknownCommand, ESwatCommand DefaultDoorOpenCommand, ESwatCommand DefaultDoorLockedCommand, ESwatCommand DefaultDoorUnlockedCommand) {
    return false;
}

void UBpGameplayHelperLib::RemoveWidgetFromViewport(const FString& WidgetName) {
}

bool UBpGameplayHelperLib::ReloadSettings() {
    return false;
}

void UBpGameplayHelperLib::PlayInterfaceSound(UWorld* WorldContext, EInterfaceSoundType SoundClass) {
}

bool UBpGameplayHelperLib::LoadZoomADSSetting(bool& bZoomADS) {
    return false;
}

bool UBpGameplayHelperLib::LoadToggleADS(bool& ToggleADS) {
    return false;
}

bool UBpGameplayHelperLib::LoadTeamViewFPSSetting(bool& bEnabled, int32& TeamViewFPS) {
    return false;
}

bool UBpGameplayHelperLib::LoadShowTeamStatus(bool& bShowTeamStatus) {
    return false;
}

bool UBpGameplayHelperLib::LoadShowPlayerNamesSetting(bool& bShowPlayerNames) {
    return false;
}

bool UBpGameplayHelperLib::LoadShowPlayerIconSetting(bool& bShowPlayerIcon) {
    return false;
}

bool UBpGameplayHelperLib::LoadShowHUDSetting(bool& bShowHUD) {
    return false;
}

bool UBpGameplayHelperLib::LoadShowHesitationBarSetting(bool& bShowHesitationBar) {
    return false;
}

bool UBpGameplayHelperLib::LoadShowHealthIconSetting(bool& bShowHealthIcons) {
    return false;
}

bool UBpGameplayHelperLib::LoadShowCommandMarkersSetting(bool& bShowCommandMarkers) {
    return false;
}

bool UBpGameplayHelperLib::LoadShowCommandContextHintSetting(bool& bShowCommandContextHint) {
    return false;
}

bool UBpGameplayHelperLib::LoadShotgunSettings(EShotgunReloadType& ShotgunReloadType) {
    return false;
}

bool UBpGameplayHelperLib::LoadServersideChecksum(bool& bServerSideChecksumEnabled) {
    return false;
}

bool UBpGameplayHelperLib::LoadSelectedAudioDevice(FString& OutAudioDevice) {
    return false;
}

bool UBpGameplayHelperLib::LoadScoreReadoutSetting(EScoreReadoutMode& OutScoreReadoutMode) {
    return false;
}

bool UBpGameplayHelperLib::LoadSafeZoneSettings(float& SafeZoneX, float& SafeZoneY) {
    return false;
}

bool UBpGameplayHelperLib::LoadPlayerDetails(FPlayerDetails& PlayerDetails) {
    return false;
}

bool UBpGameplayHelperLib::LoadPiPResolutionScale(float& ResolutionScale) {
    return false;
}

bool UBpGameplayHelperLib::LoadPiPFPS(bool& bEnabled, float& FPS) {
    return false;
}

bool UBpGameplayHelperLib::LoadOptiwandViewMode(EOptiwandViewMode& OptiwandViewMode) {
    return false;
}

bool UBpGameplayHelperLib::LoadNVGStyle(ENVGStyle& NVGStyle) {
    return false;
}

bool UBpGameplayHelperLib::LoadMirrorResolutionScale(float& ResolutionScale) {
    return false;
}

bool UBpGameplayHelperLib::LoadMirrorReflectionEnabled(bool& bEnabled) {
    return false;
}

bool UBpGameplayHelperLib::LoadMirrorEnabledOnlyInLobby(bool& bEnabled) {
    return false;
}

bool UBpGameplayHelperLib::LoadMirrorDynamicShadowsEnabled(bool& bShowDynamicShadows) {
    return false;
}

bool UBpGameplayHelperLib::LoadMirrorDecalsEnabled(bool& bShowDecals) {
    return false;
}

bool UBpGameplayHelperLib::LoadMirrorAntiAliasEnabled(bool& bShowAntiAlias) {
    return false;
}

bool UBpGameplayHelperLib::LoadMaxShellsInWorld(int32& MaxShells) {
    return false;
}

bool UBpGameplayHelperLib::LoadLoadoutAndEquipPlayer(FSavedLoadout& Loadout, AReadyOrNotCharacter* EquipPlayer, const FString& LoadoutName) {
    return false;
}

bool UBpGameplayHelperLib::LoadLoadout(FSavedLoadout& Loadout, const FString& LoadoutName) {
    return false;
}

ULicenseSave* UBpGameplayHelperLib::LoadLicenseSave() {
    return NULL;
}

bool UBpGameplayHelperLib::LoadItemSelectionStyleSettings(EItemSelectionInterfaceType& ItemSelectionInterface) {
    return false;
}

bool UBpGameplayHelperLib::LoadHUDSettings(bool& bShowHUD, bool& bCurvedHUD, bool& bShowCompass, bool& bShowWeaponHUD, bool& bShowMagazineHUD, bool& bShowChat, bool& bSwayHUD, bool& b2DReload, float& IconScale, float& QuickThrowScale, int32& FireModeDisplayOption, bool& bShowPlayerNames, bool& bShowButtonPrompts) {
    return false;
}

bool UBpGameplayHelperLib::LoadHotkeyHintSetting(bool& bShowHotkeyHint) {
    return false;
}

bool UBpGameplayHelperLib::LoadGrenadeSettings(EGrenadeThrowSettingType& GrenadeThrowType) {
    return false;
}

bool UBpGameplayHelperLib::LoadEmptyMagReloadSettings(EEmptyMagReloadType& EmptyMagReloadType) {
    return false;
}

bool UBpGameplayHelperLib::LoadDefaultCommandsAsOption(int32& DefaultCommandOption, int32& DefaultDoorUnknownCommandOption, int32& DefaultDoorOpenCommandOption, int32& DefaultDoorLockedCommandOption, int32& DefaultDoorUnlockedCommandOption) {
    return false;
}

bool UBpGameplayHelperLib::LoadDefaultCommands(ESwatCommand& DefaultCommand, ESwatCommand& DefaultDoorUnknownCommand, ESwatCommand& DefaultDoorOpenCommand, ESwatCommand& DefaultDoorLockedCommand, ESwatCommand& DefaultDoorUnlockedCommand) {
    return false;
}

void UBpGameplayHelperLib::LoadCustomizationLevels(UWorld* WorldContext) {
}

bool UBpGameplayHelperLib::IsSupporterOnlyBuild() {
    return false;
}

bool UBpGameplayHelperLib::IsShowHUDEnabled() {
    return false;
}

bool UBpGameplayHelperLib::IsShippingBuild() {
    return false;
}

bool UBpGameplayHelperLib::IsRTXDMOBuild() {
    return false;
}

bool UBpGameplayHelperLib::IsPvPSupported(FLevelDataLookupTable LookupTable) {
    return false;
}

bool UBpGameplayHelperLib::IsPreMissionBriefingBeforeLoadout() {
    return false;
}

bool UBpGameplayHelperLib::IsObjectiveTarget(AReadyOrNotCharacter* Target, AReadyOrNotCharacter* LocalPlayer) {
    return false;
}

bool UBpGameplayHelperLib::IsInPublicLobbyCooldown(float& SecondsRemaining) {
    return false;
}

bool UBpGameplayHelperLib::IsFriendly(AReadyOrNotGameState* GameState, ETeamType TeamOne, ETeamType TeamTwo) {
    return false;
}

bool UBpGameplayHelperLib::IsEnemy(ETeamType TeamOne, ETeamType TeamTwo) {
    return false;
}

bool UBpGameplayHelperLib::IsEditorBuild() {
    return false;
}

bool UBpGameplayHelperLib::IsDMOPVPOnly() {
    return false;
}

bool UBpGameplayHelperLib::IsDMOMatchMake() {
    return false;
}

bool UBpGameplayHelperLib::IsDMOBuild() {
    return false;
}

bool UBpGameplayHelperLib::IsDLCLocked(TSubclassOf<ABaseItem> Item) {
    return false;
}

bool UBpGameplayHelperLib::IsCOOPSupported(FLevelDataLookupTable LookupTable) {
    return false;
}

bool UBpGameplayHelperLib::HasWidgetInViewport(const FString& WidgetName) {
    return false;
}

bool UBpGameplayHelperLib::HasLineOfSightLoc(UWorld* WorldContext, FVector A, FVector B, TArray<AActor*> ignoredActors, TEnumAsByte<ECollisionChannel> CollisionChannel) {
    return false;
}

bool UBpGameplayHelperLib::HasLineOfSightExt(AActor* Observer, AActor* B, FHitResult& HitResult) {
    return false;
}

bool UBpGameplayHelperLib::HasLineOfSight(AActor* Observer, AActor* B) {
    return false;
}

UWorld* UBpGameplayHelperLib::GetWorldStatic() {
    return NULL;
}

UWorld* UBpGameplayHelperLib::GetWorldBP(APlayerController* PC) {
    return NULL;
}

TArray<UUserWidget*> UBpGameplayHelperLib::GetWidgetsFromViewport(const FString& WidgetName) {
    return TArray<UUserWidget*>();
}

FWidgetLookupData UBpGameplayHelperLib::GetWidgetDataFromLookupData(const FString& WidgetName) {
    return FWidgetLookupData{};
}

UWidgetsData* UBpGameplayHelperLib::GetWidgetData() {
    return NULL;
}

bool UBpGameplayHelperLib::GetVolumes(float& MasterVolume, float& UIVolume, float& SFXVolume, float& MusicVolume, float& VOIPVolume) {
    return false;
}

bool UBpGameplayHelperLib::GetUseMeshpainting(bool& bUseMeshPainting) {
    return false;
}

UDataTable* UBpGameplayHelperLib::GetTrapLookupDataTable() {
    return NULL;
}

UDataTable* UBpGameplayHelperLib::GetSuspectArmourDataTable() {
    return NULL;
}

UDataTable* UBpGameplayHelperLib::GetSpeechLookupDataTable(const FString& Speaker) {
    return NULL;
}

UReadyOrNotSingleplayerProfile* UBpGameplayHelperLib::GetSingleplayerProfile(const FString& LoadSlotName) {
    return NULL;
}

bool UBpGameplayHelperLib::GetShowFPS(bool& bShowFPS) {
    return false;
}

bool UBpGameplayHelperLib::GetShowControls(bool& bShowControls) {
    return false;
}

bool UBpGameplayHelperLib::GetShellLifetime(float& ShellLifeTime) {
    return false;
}

bool UBpGameplayHelperLib::GetSendMapStatistics(bool& bSendMapStatistics) {
    return false;
}

UReadyOrNotGameInstance* UBpGameplayHelperLib::GetRONGameInstance() {
    return NULL;
}

UDataSingleton* UBpGameplayHelperLib::GetRoNData() {
    return NULL;
}

bool UBpGameplayHelperLib::GetRandomLoadingScreenTip(FText& Tip) {
    return false;
}

void UBpGameplayHelperLib::GetRadialDamageData(FRadialDamageEvent DamageEvent, FVector& Origin, float& BaseDamage, float& MinimumDamage, float& InnerRadius, float& OuterRadius, float& DamageFalloff) {
}

int32 UBpGameplayHelperLib::GetProjectVersionAsInt() {
    return 0;
}

FString UBpGameplayHelperLib::GetProjectVersion() {
    return TEXT("");
}

void UBpGameplayHelperLib::GetPointDamageData(FPointDamageEvent DamageEvent, float& Damage, FVector_NetQuantizeNormal& ShotDirection, FHitResult& HitInfo) {
}

UPenetrationData* UBpGameplayHelperLib::GetPenetrationData() {
    return NULL;
}

UDataTable* UBpGameplayHelperLib::GetPairedInteractionDataTable() {
    return NULL;
}

UMusicData* UBpGameplayHelperLib::GetMusicData(UWorld* WorldContext) {
    return NULL;
}

UReadyOrNotMultiplayerProfile* UBpGameplayHelperLib::GetMultiplayerProfile(const FString& LoadSlotName) {
    return NULL;
}

UDataTable* UBpGameplayHelperLib::GetMoveStyleDataTable() {
    return NULL;
}

bool UBpGameplayHelperLib::GetMouseSensitivity(float& MouseSensitvity) {
    return false;
}

bool UBpGameplayHelperLib::GetMouseInverted(bool& bInvertVertical, bool& bInvertHorizontal) {
    return false;
}

bool UBpGameplayHelperLib::GetMicInputGain(float& MicInputGain) {
    return false;
}

UReadyOrNotMetaProfile* UBpGameplayHelperLib::GetMetaProfile() {
    return NULL;
}

AMapStatisticsSystem* UBpGameplayHelperLib::GetMapStatistics(UWorld* WorldContext) {
    return NULL;
}

FLevelDataLookupTable UBpGameplayHelperLib::GetMapDetailsFromName(const FString& MapName) {
    return FLevelDataLookupTable{};
}

ULookupData* UBpGameplayHelperLib::GetLookupData() {
    return NULL;
}

AReadyOrNotPlayerState* UBpGameplayHelperLib::GetLocalPlayerState(UWorld* World) {
    return NULL;
}

bool UBpGameplayHelperLib::GetLocalization(FString& Target) {
    return false;
}

FString UBpGameplayHelperLib::GetLoadURLFromData(FLevelDataLookupTable LookUp) {
    return TEXT("");
}

bool UBpGameplayHelperLib::GetLoadoutNames(TArray<FString>& LoadoutNames) {
    return false;
}

UTexture2D* UBpGameplayHelperLib::GetLoadingScreenLevelImage(const FString& Level) {
    return NULL;
}

UReadyOrNotSaveGame* UBpGameplayHelperLib::GetLoadGameInstance(const FString& LoadSlotName) {
    return NULL;
}

TArray<FLevelDataLookupTable> UBpGameplayHelperLib::GetLevels() {
    return TArray<FLevelDataLookupTable>();
}

UDataTable* UBpGameplayHelperLib::GetLevelLookupDataTable() {
    return NULL;
}

FLevelDataLookupTable UBpGameplayHelperLib::GetLevelData(UWorld* WorldContext) {
    return FLevelDataLookupTable{};
}

bool UBpGameplayHelperLib::GetLastConnectedServerIP(FString& IP) {
    return false;
}

UDataTable* UBpGameplayHelperLib::GetItemLookupDataTable() {
    return NULL;
}

UItemData* UBpGameplayHelperLib::GetItemData(UWorld* WorldContext) {
    return NULL;
}

UHumanCharacterHUD_V2* UBpGameplayHelperLib::GetHUDWidget() {
    return NULL;
}

bool UBpGameplayHelperLib::GetHitmarkerSfxEnabled(bool& bHitmarkerSfxEnabled) {
    return false;
}

UDataTable* UBpGameplayHelperLib::GetGameModeSettingsLookupDataTable() {
    return NULL;
}

UReadyOrNotGameInstance* UBpGameplayHelperLib::GetGameInstance(UWorld* WorldContext) {
    return NULL;
}

FString UBpGameplayHelperLib::GetFriendlyModeFromECoopMode(const ECOOPMode InCoopMode) {
    return TEXT("");
}

void UBpGameplayHelperLib::GetFriendlyMapAndModeFromName(const FString& InUrl, FString& OutInternalMapName, FString& OutFriendlyMap, FString& OutFriendlyMode) {
}

bool UBpGameplayHelperLib::GetFreelookSensitivity(float& Sensitivity) {
    return false;
}

bool UBpGameplayHelperLib::GetFoV(float& FOV) {
    return false;
}

bool UBpGameplayHelperLib::GetFlashlightShadows(bool& bFlashLightShadows) {
    return false;
}

UUserWidget* UBpGameplayHelperLib::GetFirstWidgetFromViewport(const FString& WidgetName) {
    return NULL;
}

APlayerCharacter* UBpGameplayHelperLib::GetFirstAlivePlayerControlledCharacter(UWorld* WorldContext) {
    return NULL;
}

bool UBpGameplayHelperLib::GetExperimentalFeatures(bool& bExperimentalFeatures) {
    return false;
}

UDataTable* UBpGameplayHelperLib::GetDoorLookupDataTable() {
    return NULL;
}

ETeamType UBpGameplayHelperLib::GetDMOTeamType() {
    return ETeamType::TT_NONE;
}

FString UBpGameplayHelperLib::GetDMOGameMode() {
    return TEXT("");
}

FString UBpGameplayHelperLib::GetDMOAddress() {
    return TEXT("");
}

float UBpGameplayHelperLib::GetDistanceBetweenActors2D(AActor* Actor1, AActor* Actor2) {
    return 0.0f;
}

float UBpGameplayHelperLib::GetDistanceBetweenActors(AActor* Actor1, AActor* Actor2) {
    return 0.0f;
}

UReadyOrNotProfile* UBpGameplayHelperLib::GetCurrentProfile(UWorld* WorldContext) {
    return NULL;
}

UDataTable* UBpGameplayHelperLib::GetConversationLookupDataTable() {
    return NULL;
}

ASuspectCharacter* UBpGameplayHelperLib::GetClosestActiveSuspect(const FVector& Location, float Distance, bool bMustHaveTarget) {
    return NULL;
}

ACivilianCharacter* UBpGameplayHelperLib::GetClosestActiveCivilian(const FVector& Location, float Distance, bool bMustHaveTarget) {
    return NULL;
}

UDataTable* UBpGameplayHelperLib::GetCharacterLookOverrideDataTable() {
    return NULL;
}

FString UBpGameplayHelperLib::GetBuildTime() {
    return TEXT("");
}

FString UBpGameplayHelperLib::GetBuildDate() {
    return TEXT("");
}

bool UBpGameplayHelperLib::GetBounceLightEnabled(bool& bBounceLightEnabled) {
    return false;
}

int32 UBpGameplayHelperLib::GetAttachmentPointsRemaining(FSavedLoadout Loadout) {
    return 0;
}

UDataTable* UBpGameplayHelperLib::GetAnimatedIconLookupDataTable() {
    return NULL;
}

FAnimatedIcon UBpGameplayHelperLib::GetAnimatedIconFromTable(FName RowName, bool& bSuccess) {
    return FAnimatedIcon{};
}

UDataTable* UBpGameplayHelperLib::GetAmmoLookupDataTable() {
    return NULL;
}

UDataTable* UBpGameplayHelperLib::GetAILookupDataTable() {
    return NULL;
}

FString UBpGameplayHelperLib::GetAdditionalBugReportInformation(APlayerController* PC) {
    return TEXT("");
}

APlayerCharacter* UBpGameplayHelperLib::FindClosestDeadGuyInRadius(FVector Origin, AActor* Causer, float Radius, bool bIncludeUnconscious) {
    return NULL;
}

bool UBpGameplayHelperLib::EquipLoadoutOnPlayer(FSavedLoadout Loadout, AReadyOrNotCharacter* EquipPlayer, FLoadoutEquipOptions LoadoutEquipOptions) {
    return false;
}

void UBpGameplayHelperLib::EnableInteractionForController(AActor* InInteractableActor, APlayerController* InPlayerCharacter) {
}

void UBpGameplayHelperLib::EnableInteractionFor(AActor* InInteractableActor, APlayerCharacter* InPlayerCharacter) {
}

void UBpGameplayHelperLib::EnableInteractionCompForController(UInteractableComponent* InteractableComponent, APlayerController* InPlayerController) {
}

void UBpGameplayHelperLib::DisableInteractionForController(AActor* InInteractableActor, APlayerController* InPlayerCharacter) {
}

void UBpGameplayHelperLib::DisableInteractionFor(AActor* InInteractableActor, APlayerCharacter* InPlayerCharacter) {
}

void UBpGameplayHelperLib::DisableInteractionCompForController(UInteractableComponent* InteractableComponent, APlayerController* InPlayerController) {
}

bool UBpGameplayHelperLib::DeleteLoadout(const FString& LoadoutName) {
    return false;
}

EItemType UBpGameplayHelperLib::ConvertWeaponTypeToItemType(EWeaponType WeaponType) {
    return EItemType::IT_None;
}

FVector2D UBpGameplayHelperLib::ConvertSquareVectorToCircle(FVector2D SquareVector) {
    return FVector2D{};
}

EWeaponType UBpGameplayHelperLib::ConvertItemTypeToWeaponType(EItemType ItemType) {
    return EWeaponType::WT_None;
}

FString UBpGameplayHelperLib::ConvertFloatToStringMinutes_Detail(float Val) {
    return TEXT("");
}

FString UBpGameplayHelperLib::ConvertFloatToStringMinutes(float Val) {
    return TEXT("");
}

FString UBpGameplayHelperLib::ConvertDegreeIntoLetter(float Degrees) {
    return TEXT("");
}

bool UBpGameplayHelperLib::CompareLevelDataLookupBP(FLevelDataLookupTable A, FLevelDataLookupTable B) {
    return false;
}

void UBpGameplayHelperLib::ChangeLocalization(const FString& Target) {
}

FRadialDamageEvent UBpGameplayHelperLib::CastToRadialDamageEvent(FDamageEvent DamageEvent, EStructureCastPathway& Branches) {
    return FRadialDamageEvent{};
}

FPointDamageEvent UBpGameplayHelperLib::CastToPointDamageEvent(FDamageEvent DamageEvent, EStructureCastPathway& Branches) {
    return FPointDamageEvent{};
}

bool UBpGameplayHelperLib::CanSwatKillPlayer() {
    return false;
}

void UBpGameplayHelperLib::AttachMagazinesToWeapon(TSubclassOf<ABaseMagazineWeapon> WeaponClass, ABaseMagazineWeapon* Weapon) {
}

void UBpGameplayHelperLib::AddDefaultItemsToPlayer(AReadyOrNotCharacter* Player) {
}

UBpGameplayHelperLib::UBpGameplayHelperLib() {
}

