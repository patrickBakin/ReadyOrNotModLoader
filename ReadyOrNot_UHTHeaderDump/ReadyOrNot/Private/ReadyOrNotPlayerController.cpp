#include "ReadyOrNotPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "ProgressionComponent.h"

class APawn;
class UUserWidget;
class AReferendum;
class AMapReferendum;
class APlayerReferendum;
class ASpectatorPawn;
class APlayerState;
class AReadyOrNotPlayerState;
class ULevelStreaming;

void AReadyOrNotPlayerController::WinCoop() {
}

void AReadyOrNotPlayerController::Vote_Implementation(bool VoteYes) {
}

void AReadyOrNotPlayerController::UpdateAchievementProgress_Implementation(const FString& ID, float Percent) {
}

void AReadyOrNotPlayerController::UnhideAllWeaponAttachments() {
}

void AReadyOrNotPlayerController::UnhideAllSmallItemMeshes() {
}

void AReadyOrNotPlayerController::UnhideAllItemMeshes() {
}

void AReadyOrNotPlayerController::ToggleRTXDMO() {
}

void AReadyOrNotPlayerController::ToggleGodModeOnEveryone() {
}

void AReadyOrNotPlayerController::ToggleDeployMenu() {
}

void AReadyOrNotPlayerController::TestSendCrash() {
}

void AReadyOrNotPlayerController::TestMatchmakingServerRefresh() {
}

void AReadyOrNotPlayerController::TestMatchmakingServerCreateParty() {
}

void AReadyOrNotPlayerController::TeleportUp() {
}

void AReadyOrNotPlayerController::TeleportToNextRemainingAI() {
}

void AReadyOrNotPlayerController::TakeDamageExec(float DamageAmount) {
}

void AReadyOrNotPlayerController::SwapAllItemSkeletalMeshesToCubes() {
}

bool AReadyOrNotPlayerController::StreamInSession(FBlueprintSessionResult SessionResult, ULevelStreaming*& OutStreamedLevel, bool bShouldCreateLoadingScreen) {
    return false;
}

bool AReadyOrNotPlayerController::StreamInLevel(const FString& NewLevel, const FString& Options, ULevelStreaming*& OutStreamedLevel, FLevelStreamOptions LevelStreamOptions) {
    return false;
}


void AReadyOrNotPlayerController::StopSwatAutomation() {
}

void AReadyOrNotPlayerController::StopSpeaking() {
}

void AReadyOrNotPlayerController::StartSwatAutomation() {
}

void AReadyOrNotPlayerController::StartSpeaking() {
}

void AReadyOrNotPlayerController::StartBleeding() {
}

void AReadyOrNotPlayerController::SpawnRandomAI(int32 Count) {
}

void AReadyOrNotPlayerController::SpawnBotsForGame(int32 BotCount) {
}

void AReadyOrNotPlayerController::SpawnAIAtLocation(const FString& TableName, FVector Location, FVector MoveLocation) {
}

void AReadyOrNotPlayerController::SpawnAI(const FString& TableName, int32 Count) {
}

void AReadyOrNotPlayerController::SoftWinCoop() {
}


void AReadyOrNotPlayerController::SetTimelimit(float Time) {
}

void AReadyOrNotPlayerController::SetServerPasswordOnConnection(const FString& Password) {
}

void AReadyOrNotPlayerController::SetScorelimit(int32 Score) {
}

void AReadyOrNotPlayerController::SetPreferredTeamUniqueNetIdOnConnection(const FString& UniqueId) {
}

void AReadyOrNotPlayerController::SetMousePosition(float LocationX, float LocationY) {
}

void AReadyOrNotPlayerController::SetHostMigrationComplete_Implementation() {
}

void AReadyOrNotPlayerController::SetClubMusicMasterVolume(float Volume) {
}

void AReadyOrNotPlayerController::SetAllComponentsUseParentsBounds() {
}

void AReadyOrNotPlayerController::ServerStatFileStop() {
}

void AReadyOrNotPlayerController::ServerStatFileStart() {
}

void AReadyOrNotPlayerController::Server_SwapPlayersTeam_Implementation(APlayerState* ps) {
}
bool AReadyOrNotPlayerController::Server_SwapPlayersTeam_Validate(APlayerState* ps) {
    return true;
}

void AReadyOrNotPlayerController::Server_StatFile_Implementation(bool bStartStatFile) {
}
bool AReadyOrNotPlayerController::Server_StatFile_Validate(bool bStartStatFile) {
    return true;
}

void AReadyOrNotPlayerController::Server_StartSpectating_Implementation() {
}
bool AReadyOrNotPlayerController::Server_StartSpectating_Validate() {
    return true;
}

void AReadyOrNotPlayerController::Server_StartReferendum_Implementation(TSubclassOf<AReferendum> ReferendumClass) {
}
bool AReadyOrNotPlayerController::Server_StartReferendum_Validate(TSubclassOf<AReferendum> ReferendumClass) {
    return true;
}

void AReadyOrNotPlayerController::Server_StartPlayerReferendum_Implementation(TSubclassOf<APlayerReferendum> ReferendumClass, AReadyOrNotPlayerState* TargetPlayer) {
}
bool AReadyOrNotPlayerController::Server_StartPlayerReferendum_Validate(TSubclassOf<APlayerReferendum> ReferendumClass, AReadyOrNotPlayerState* TargetPlayer) {
    return true;
}

void AReadyOrNotPlayerController::Server_StartMapReferendum_Implementation(TSubclassOf<AMapReferendum> ReferendumClass, const FString& MapURL) {
}
bool AReadyOrNotPlayerController::Server_StartMapReferendum_Validate(TSubclassOf<AMapReferendum> ReferendumClass, const FString& MapURL) {
    return true;
}

void AReadyOrNotPlayerController::Server_SetTeamType_Implementation(ETeamType NewTeam) {
}
bool AReadyOrNotPlayerController::Server_SetTeamType_Validate(ETeamType NewTeam) {
    return true;
}

void AReadyOrNotPlayerController::Server_SetSpawn_Implementation(ETeamType SpawnTeam, ESelectedSpawn NewSpawnPoint) {
}
bool AReadyOrNotPlayerController::Server_SetSpawn_Validate(ETeamType SpawnTeam, ESelectedSpawn NewSpawnPoint) {
    return true;
}

void AReadyOrNotPlayerController::Server_SetHasFinishedLoading_Implementation() {
}
bool AReadyOrNotPlayerController::Server_SetHasFinishedLoading_Validate() {
    return true;
}

void AReadyOrNotPlayerController::Server_SetDeployableDepot_Implementation(int32 NewDepot) {
}
bool AReadyOrNotPlayerController::Server_SetDeployableDepot_Validate(int32 NewDepot) {
    return true;
}

void AReadyOrNotPlayerController::Server_SetChecksum_Implementation(int32 Checksum) {
}
bool AReadyOrNotPlayerController::Server_SetChecksum_Validate(int32 Checksum) {
    return true;
}

void AReadyOrNotPlayerController::Server_SendChatMessage_Implementation(FRChatMessage ChatMessage) {
}
bool AReadyOrNotPlayerController::Server_SendChatMessage_Validate(FRChatMessage ChatMessage) {
    return true;
}

void AReadyOrNotPlayerController::Server_RespawnAsLobby_Implementation(TSubclassOf<ASpectatorPawn> Class, FTransform SpawnTransform) {
}
bool AReadyOrNotPlayerController::Server_RespawnAsLobby_Validate(TSubclassOf<ASpectatorPawn> Class, FTransform SpawnTransform) {
    return true;
}

void AReadyOrNotPlayerController::Server_RequestLoadoutChange_Implementation(FSavedLoadout Loadout) {
}
bool AReadyOrNotPlayerController::Server_RequestLoadoutChange_Validate(FSavedLoadout Loadout) {
    return true;
}

void AReadyOrNotPlayerController::Server_RemoveMarker_Implementation(int32 ID) {
}

void AReadyOrNotPlayerController::Server_RemoveLine_Implementation(int32 ID) {
}

void AReadyOrNotPlayerController::Server_ReleaseVIP_Implementation() {
}
bool AReadyOrNotPlayerController::Server_ReleaseVIP_Validate() {
    return true;
}

void AReadyOrNotPlayerController::Server_ReferendumVoteYes_Implementation() {
}
bool AReadyOrNotPlayerController::Server_ReferendumVoteYes_Validate() {
    return true;
}

void AReadyOrNotPlayerController::Server_ReferendumVoteNo_Implementation() {
}
bool AReadyOrNotPlayerController::Server_ReferendumVoteNo_Validate() {
    return true;
}

void AReadyOrNotPlayerController::Server_LoginAsAdmin_Implementation(const FString& Password) {
}
bool AReadyOrNotPlayerController::Server_LoginAsAdmin_Validate(const FString& Password) {
    return true;
}

void AReadyOrNotPlayerController::Server_Equip_Implementation(const FString& ItemName) {
}
bool AReadyOrNotPlayerController::Server_Equip_Validate(const FString& ItemName) {
    return true;
}

void AReadyOrNotPlayerController::Server_EnablePersonnel_Implementation(int32 PersonnelNum, int32 MapPointNum) {
}
bool AReadyOrNotPlayerController::Server_EnablePersonnel_Validate(int32 PersonnelNum, int32 MapPointNum) {
    return true;
}

void AReadyOrNotPlayerController::Server_EnableDeployable_Implementation(int32 DeployableNum) {
}
bool AReadyOrNotPlayerController::Server_EnableDeployable_Validate(int32 DeployableNum) {
    return true;
}

void AReadyOrNotPlayerController::Server_DisablePersonnel_Implementation(int32 PersonnelNum) {
}
bool AReadyOrNotPlayerController::Server_DisablePersonnel_Validate(int32 PersonnelNum) {
    return true;
}

void AReadyOrNotPlayerController::Server_DisableDeployable_Implementation(int32 DeployableNum) {
}
bool AReadyOrNotPlayerController::Server_DisableDeployable_Validate(int32 DeployableNum) {
    return true;
}

void AReadyOrNotPlayerController::Server_ClearDrawingPointData_Implementation(bool bClearAll, bool bClearAllFloors, int32 FloorNum) {
}
bool AReadyOrNotPlayerController::Server_ClearDrawingPointData_Validate(bool bClearAll, bool bClearAllFloors, int32 FloorNum) {
    return true;
}

void AReadyOrNotPlayerController::Server_BecomeVIP_Implementation() {
}
bool AReadyOrNotPlayerController::Server_BecomeVIP_Validate() {
    return true;
}

void AReadyOrNotPlayerController::Server_AdminRestartServer_Implementation() {
}
bool AReadyOrNotPlayerController::Server_AdminRestartServer_Validate() {
    return true;
}

void AReadyOrNotPlayerController::Server_AdminRemoveMapFromRotationByIndex_Implementation(int32 Idx) {
}
bool AReadyOrNotPlayerController::Server_AdminRemoveMapFromRotationByIndex_Validate(int32 Idx) {
    return true;
}

void AReadyOrNotPlayerController::Server_AdminRemoveMapFromRotation_Implementation(const FString& MapURL) {
}
bool AReadyOrNotPlayerController::Server_AdminRemoveMapFromRotation_Validate(const FString& MapURL) {
    return true;
}

void AReadyOrNotPlayerController::Server_AdminNextMap_Implementation() {
}
bool AReadyOrNotPlayerController::Server_AdminNextMap_Validate() {
    return true;
}

void AReadyOrNotPlayerController::Server_AdminKickPlayer_Implementation(APlayerState* KickingPlayerState, const FText& ReasonOveride) {
}
bool AReadyOrNotPlayerController::Server_AdminKickPlayer_Validate(APlayerState* KickingPlayerState, const FText& ReasonOveride) {
    return true;
}

void AReadyOrNotPlayerController::Server_AdminBanPlayer_Implementation(APlayerState* BanningPlayerState) {
}
bool AReadyOrNotPlayerController::Server_AdminBanPlayer_Validate(APlayerState* BanningPlayerState) {
    return true;
}

void AReadyOrNotPlayerController::Server_AdminAddMapToRotationAtIndex_Implementation(const FString& MapURL, int32 Idx) {
}
bool AReadyOrNotPlayerController::Server_AdminAddMapToRotationAtIndex_Validate(const FString& MapURL, int32 Idx) {
    return true;
}

void AReadyOrNotPlayerController::Server_AdminAddMapToRotation_Implementation(const FString& MapURL) {
}
bool AReadyOrNotPlayerController::Server_AdminAddMapToRotation_Validate(const FString& MapURL) {
    return true;
}

void AReadyOrNotPlayerController::Server_AddMarker_Implementation(const FPlanningMarker& Marker) {
}

void AReadyOrNotPlayerController::Server_AddLine_Implementation(const FPlanningLine& Line) {
}

void AReadyOrNotPlayerController::Server_AddDrawingPointData_Implementation(FVector2D DrawingPointData, int32 FloorNum, EFreeDrawColor Color, bool bNewPoint, float Thickness) {
}
bool AReadyOrNotPlayerController::Server_AddDrawingPointData_Validate(FVector2D DrawingPointData, int32 FloorNum, EFreeDrawColor Color, bool bNewPoint, float Thickness) {
    return true;
}

void AReadyOrNotPlayerController::SendChatMessage(FRChatMessage ChatMessage) {
}

bool AReadyOrNotPlayerController::SaveFileToUserCloud(const FString& FullPath) {
    return false;
}

void AReadyOrNotPlayerController::SaveChatMessage(FRChatMessage Message) {
}

void AReadyOrNotPlayerController::RetrieveChatLog(TArray<FRChatMessage>& OutMessages) {
}

void AReadyOrNotPlayerController::ResetKeybinds() {
}

void AReadyOrNotPlayerController::ResetDoorLockStateKnowledge() {
}

void AReadyOrNotPlayerController::ResetAI(float Range) {
}


void AReadyOrNotPlayerController::ReportAllInstancedStaticMeshes() {
}

void AReadyOrNotPlayerController::ReplicateMapListIfAdmin() {
}

void AReadyOrNotPlayerController::RemoveWeaponSkin() {
}

void AReadyOrNotPlayerController::RemoveHUD() {
}

void AReadyOrNotPlayerController::RemoveCharacterSkin() {
}

void AReadyOrNotPlayerController::ReleaseVIP() {
}

void AReadyOrNotPlayerController::PrintGPUBrand() {
}

void AReadyOrNotPlayerController::PlayDeadAllEnemies() {
}

void AReadyOrNotPlayerController::PlayAnimationFromLookupTable(const FString& AnimationRowName) {
}

void AReadyOrNotPlayerController::PassMouseControlToValidWidget() {
}

void AReadyOrNotPlayerController::OptimizeWorld() {
}

void AReadyOrNotPlayerController::OnStreamedLevelLoadedRemovingLoadingScreen() {
}

void AReadyOrNotPlayerController::OnStreamedLevelLoadedExecuteOpen() {
}

void AReadyOrNotPlayerController::OnStreamedLevelLoadedComplete() {
}

void AReadyOrNotPlayerController::OnSessionJoinSuccess() {
}

void AReadyOrNotPlayerController::OnSessionJoinFailed() {
}


void AReadyOrNotPlayerController::OnRep_Maplist() {
}

void AReadyOrNotPlayerController::OnlyCastLocalPlayerDynamicShadow() {
}

void AReadyOrNotPlayerController::OnLevelOpen() {
}

void AReadyOrNotPlayerController::NotifyRespawnTime_Implementation(float RespawnTime) {
}

void AReadyOrNotPlayerController::Multicast_SetPersonnelAtPoint_Implementation(int32 PersonnelNum, int32 MapPointNum) {
}

void AReadyOrNotPlayerController::Multicast_RemovePersonnelAtPoint_Implementation(int32 PersonnelNum) {
}

void AReadyOrNotPlayerController::Multicast_ForcePlanningRefresh_Implementation() {
}

void AReadyOrNotPlayerController::MeshMergeEverything() {
}

void AReadyOrNotPlayerController::MakeCrash() {
}

void AReadyOrNotPlayerController::KnockoutAllEnemies() {
}

void AReadyOrNotPlayerController::KillSWATTeam() {
}

void AReadyOrNotPlayerController::Kill(float Time) {
}

bool AReadyOrNotPlayerController::IsCameraFading() {
    return false;
}

void AReadyOrNotPlayerController::HideAllWeaponAttachments() {
}

void AReadyOrNotPlayerController::HideAllSmallItemMeshes() {
}

void AReadyOrNotPlayerController::HideAllItemMeshes() {
}

void AReadyOrNotPlayerController::GiveSWATRam() {
}

void AReadyOrNotPlayerController::GibAllComponents() {
}

EVoteState AReadyOrNotPlayerController::GetVote() {
    return EVoteState::Undecided;
}

ETeamType AReadyOrNotPlayerController::GetTeamType() {
    return ETeamType::TT_NONE;
}

float AReadyOrNotPlayerController::GetRespawnTimeRemaining() {
    return 0.0f;
}

TArray<FString> AReadyOrNotPlayerController::GetReplicatedMapRotation() {
    return TArray<FString>();
}

FString AReadyOrNotPlayerController::GetPrefferredTeamUniqueNetIdOnConnection() {
    return TEXT("");
}

FString AReadyOrNotPlayerController::GetPasswordOnConnection() {
    return TEXT("");
}

void AReadyOrNotPlayerController::GetNetworkConnectionStatus(float& AvgLag, int32& OutLostPackets, int32& InLostPackets, int32& OutLostPacketPrcnt, int32& InLostPacketPrcnt) {
}

void AReadyOrNotPlayerController::FreeVIP() {
}

void AReadyOrNotPlayerController::FlushDeadBodies() {
}

void AReadyOrNotPlayerController::EscapeMenu() {
}

void AReadyOrNotPlayerController::EquipAndDropEvidence() {
}

void AReadyOrNotPlayerController::Equip(const FString& ItemName) {
}

void AReadyOrNotPlayerController::EndVote_Implementation() {
}

void AReadyOrNotPlayerController::EnableWeaponFovShader() {
}

void AReadyOrNotPlayerController::EnableScopeAlignmentTool() {
}

void AReadyOrNotPlayerController::EnablePlayerInput() {
}

void AReadyOrNotPlayerController::DropAllSuspectWeapons() {
}

void AReadyOrNotPlayerController::DownloadBlacklistHashes() {
}

void AReadyOrNotPlayerController::DisplayAllPlayingFMODEvents() {
}

void AReadyOrNotPlayerController::DisableWeaponFovShader() {
}

void AReadyOrNotPlayerController::DisableSkeletalMeshShadowCasting() {
}

void AReadyOrNotPlayerController::DisableForceShowMouseCursor() {
}

void AReadyOrNotPlayerController::DisableAllMaterials() {
}

void AReadyOrNotPlayerController::DisableAllItemTicks() {
}

void AReadyOrNotPlayerController::DisableAllItemMaterials() {
}

void AReadyOrNotPlayerController::DestroySwatTeam() {
}

void AReadyOrNotPlayerController::DestroySwatInventoryItems() {
}

void AReadyOrNotPlayerController::DestroySwatControllers() {
}

void AReadyOrNotPlayerController::DestroySwatAnimation() {
}

void AReadyOrNotPlayerController::DestroyEverything() {
}

void AReadyOrNotPlayerController::DestroyAllWorldDynamicItems() {
}

void AReadyOrNotPlayerController::DestroyAllWidgets() {
}

void AReadyOrNotPlayerController::DestroyAllSuspects() {
}

void AReadyOrNotPlayerController::DestroyAllLights() {
}

void AReadyOrNotPlayerController::DestroyAllItems() {
}

void AReadyOrNotPlayerController::DestroyAllItemMeshes() {
}

void AReadyOrNotPlayerController::DestroyAllExceptClosestDoor() {
}

void AReadyOrNotPlayerController::DestroyAllExceptClosestCharacter() {
}

void AReadyOrNotPlayerController::DestroyAllDynamicLights() {
}

void AReadyOrNotPlayerController::DestroyAllDecals() {
}

void AReadyOrNotPlayerController::DestroyAllAI() {
}

void AReadyOrNotPlayerController::DestroyAllActorsOfName(const FString& Name) {
}

void AReadyOrNotPlayerController::DeleteAnyNonMeshComponents() {
}

void AReadyOrNotPlayerController::DebugMigrateHost() {
}

void AReadyOrNotPlayerController::DebugClientStartHostMigration_Implementation() {
}

void AReadyOrNotPlayerController::ClientStartOnlineGame_Implementation() {
}

void AReadyOrNotPlayerController::ClientSpawned_Implementation() {
}

void AReadyOrNotPlayerController::ClientSetSpectatorCamera_Implementation(FVector CameraLocation, FRotator CameraRotation) {
}

void AReadyOrNotPlayerController::ClientSetNetSpeed_Implementation(int32 NewNetSpeed) {
}

void AReadyOrNotPlayerController::ClientJoinVoice_Implementation(const FString& OnlineSessionId, const int32& TeamNum) {
}

void AReadyOrNotPlayerController::ClientEndOnlineGame_Implementation() {
}

void AReadyOrNotPlayerController::Client_SetViewTargetWithBlend_Implementation(APawn* NewViewTarget) {
}

void AReadyOrNotPlayerController::Client_SetControlRotation_Implementation(FRotator NewControlRotation) {
}

void AReadyOrNotPlayerController::Client_RemoveWidget_Implementation(TSubclassOf<UUserWidget> Widget) {
}

void AReadyOrNotPlayerController::Client_PostLogin_Implementation() {
}

void AReadyOrNotPlayerController::Client_HideHUDWidgets_Implementation() {
}

void AReadyOrNotPlayerController::Client_GetStats_Implementation() {
}

void AReadyOrNotPlayerController::Client_DisableUIMouse_Implementation() {
}

void AReadyOrNotPlayerController::Client_CreateWidget_Implementation(const FString& WidgetName, bool bForceAddToWidgetStack, bool bIsEscapeKey) {
}

void AReadyOrNotPlayerController::Client_CreateMessageDisplay_Implementation(const FString& MessageTxt, const FString& ButtonTxt) {
}

void AReadyOrNotPlayerController::Client_CreateLoadingScreen_Implementation(const FString& Map, const FString& Mode, const FString& SessionName, bool bIsSeamlessTravel) {
}

void AReadyOrNotPlayerController::Client_ClearHUDWidgets_Implementation() {
}

bool AReadyOrNotPlayerController::CanSetSpawn(ETeamType Team, ESelectedSpawn NewSpawnPoint, bool bSameSpawn) {
    return false;
}

bool AReadyOrNotPlayerController::CanSetDepotTo(int32 NewDepot, bool bSameDepot) {
    return false;
}

bool AReadyOrNotPlayerController::CanEnablePersonnel(int32 PersonnelNum, int32 MapPointNum) {
    return false;
}

bool AReadyOrNotPlayerController::CanEnableDeployable(int32 DeployableNum) {
    return false;
}

bool AReadyOrNotPlayerController::CanDisablePersonnel(int32 PersonnelNum) {
    return false;
}

bool AReadyOrNotPlayerController::CanDisableDeployable(int32 DeployableNum) {
    return false;
}

void AReadyOrNotPlayerController::BP_ReturnToMenu(const FText& ReturnReason) {
}



void AReadyOrNotPlayerController::BeginVote_Implementation(const FString& reason, const FString& Question, bool CanVoteNo) {
}

void AReadyOrNotPlayerController::ArrestOne() {
}

void AReadyOrNotPlayerController::ApplyWeaponSkin(const FString& SkinName) {
}

void AReadyOrNotPlayerController::ApplyCharacterSkin(const FString& SkinName) {
}

void AReadyOrNotPlayerController::AIStopHide() {
}

void AReadyOrNotPlayerController::AIHide() {
}

void AReadyOrNotPlayerController::AIEquipSecondary() {
}

void AReadyOrNotPlayerController::AIEquipPrimary() {
}


void AReadyOrNotPlayerController::AbortCover() {
}

void AReadyOrNotPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReadyOrNotPlayerController, ServerSideChecksum);
    DOREPLIFETIME(AReadyOrNotPlayerController, ReplicatedMapList);
    DOREPLIFETIME(AReadyOrNotPlayerController, MyVoteData);
    DOREPLIFETIME(AReadyOrNotPlayerController, Rep_MatchmakingServerInfo);
    DOREPLIFETIME(AReadyOrNotPlayerController, Rep_MatchmakingPartyInit);
}

AReadyOrNotPlayerController::AReadyOrNotPlayerController() {
    this->ProgressionComp = CreateDefaultSubobject<UProgressionComponent>(TEXT("ProgressionComp"));
    this->ServerSideChecksum = 0;
    this->RespawnTimeLeft = 0.00f;
    this->SpectateCamera = NULL;
    this->VoteAntiSpamDebouncer = 5.00f;
    this->bStatsProfiledQueued = false;
    this->bCanOpenOptionsMenu = true;
    this->SwatAutomationManager = NULL;
    this->TestCube = NULL;
    this->TestMaterial = NULL;
    this->bStartedCoopAsSpectator = false;
    this->LastKilledCharacter = NULL;
    this->bIsReplaySpectator = false;
}

