#include "ReadyOrNotDebugSubsystem.h"

class APlayerCharacter;
class UMaterialInterface;

void UReadyOrNotDebugSubsystem::WeakenAllEnemiesToLowHealth() {
}

void UReadyOrNotDebugSubsystem::ToggleVSync() {
}

void UReadyOrNotDebugSubsystem::ToggleSWATDynamicCover() {
}

void UReadyOrNotDebugSubsystem::ToggleSuspectDynamicCover() {
}

void UReadyOrNotDebugSubsystem::ToggleRuleOfThirdsOverlayGuide(UMaterialInterface* InMaterial) {
}

void UReadyOrNotDebugSubsystem::ToggleRTXSettings() {
}

void UReadyOrNotDebugSubsystem::ToggleRifleLineOverlayGuide(UMaterialInterface* InMaterial) {
}

void UReadyOrNotDebugSubsystem::TogglePistolLineOverlayGuide(UMaterialInterface* InMaterial) {
}

void UReadyOrNotDebugSubsystem::TogglePauseFMOD() {
}

void UReadyOrNotDebugSubsystem::ToggleObjectiveMarkers() {
}

void UReadyOrNotDebugSubsystem::ToggleMuteFMOD() {
}

void UReadyOrNotDebugSubsystem::ToggleMusic(bool bMusicOn) {
}

void UReadyOrNotDebugSubsystem::ToggleLogWeaponDamage() {
}

void UReadyOrNotDebugSubsystem::ToggleLogPlayerAnimationStatus() {
}

void UReadyOrNotDebugSubsystem::ToggleLineUpOverlayGuide(UMaterialInterface* InMaterial) {
}

void UReadyOrNotDebugSubsystem::ToggleLaserEyes() {
}

void UReadyOrNotDebugSubsystem::ToggleInteractableComponents() {
}

void UReadyOrNotDebugSubsystem::ToggleInfiniteSWATItems() {
}

void UReadyOrNotDebugSubsystem::ToggleInfiniteHealth() {
}

void UReadyOrNotDebugSubsystem::ToggleInfiniteAmmo() {
}

void UReadyOrNotDebugSubsystem::ToggleHesitationBar() {
}

void UReadyOrNotDebugSubsystem::ToggleGrenadeDrawDebug() {
}

void UReadyOrNotDebugSubsystem::ToggleGlobalDamageMultiplier_Weapons() {
}

void UReadyOrNotDebugSubsystem::ToggleGlobalDamageMultiplier_Grenades() {
}

void UReadyOrNotDebugSubsystem::ToggleFibonacciOverlayGuide(UMaterialInterface* InMaterial) {
}

void UReadyOrNotDebugSubsystem::ToggleDrawSWATCoverLogic() {
}

void UReadyOrNotDebugSubsystem::ToggleDrawSuspectCoverLogic() {
}

void UReadyOrNotDebugSubsystem::ToggleDrawMeleeRange() {
}

void UReadyOrNotDebugSubsystem::ToggleDrawInteractableComponents() {
}

void UReadyOrNotDebugSubsystem::ToggleDrawDoorKillStunDistances() {
}

void UReadyOrNotDebugSubsystem::ToggleDrawDebugTraces() {
}

void UReadyOrNotDebugSubsystem::ToggleCoverPoints() {
}

void UReadyOrNotDebugSubsystem::ToggleCoverOctree() {
}

void UReadyOrNotDebugSubsystem::ToggleAllEvidenceActorMarkers() {
}

void UReadyOrNotDebugSubsystem::SetMeleeRange(APlayerCharacter* PlayerCharacter, float NewMeleeRange) {
}

void UReadyOrNotDebugSubsystem::SetMeleeDamage(APlayerCharacter* PlayerCharacter, float NewMeleeDamage) {
}

void UReadyOrNotDebugSubsystem::SetGlobalDamageMultiplier_Weapons(float NewDamageMultiplier) {
}

void UReadyOrNotDebugSubsystem::SetGlobalDamageMultiplier_Grenades(float NewDamageMultiplier) {
}

void UReadyOrNotDebugSubsystem::RTX_ToggleTranslucency() {
}

void UReadyOrNotDebugSubsystem::RTX_ToggleShadows() {
}

void UReadyOrNotDebugSubsystem::RTX_ToggleReflections() {
}

void UReadyOrNotDebugSubsystem::RTX_ToggleGlobalIllumination() {
}

void UReadyOrNotDebugSubsystem::RTX_ToggleAmbientOcclusion() {
}

void UReadyOrNotDebugSubsystem::OpenAllDoors() {
}

void UReadyOrNotDebugSubsystem::IncreaseGlobalDamageMultiplier_Weapons(float Amount) {
}

void UReadyOrNotDebugSubsystem::IncreaseGlobalDamageMultiplier_Grenades(float Amount) {
}

void UReadyOrNotDebugSubsystem::DecreaseGlobalDamageMultiplier_Weapons(float Amount) {
}

void UReadyOrNotDebugSubsystem::DecreaseGlobalDamageMultiplier_Grenades(float Amount) {
}

void UReadyOrNotDebugSubsystem::CloseAllDoors() {
}

void UReadyOrNotDebugSubsystem::AddOrUpdatePostProcessMaterial(UMaterialInterface* InMaterial, bool& bMaterialOn) {
}

UReadyOrNotDebugSubsystem::UReadyOrNotDebugSubsystem() {
    this->bDrawMeleeRange = false;
    this->bInfiniteHealth = false;
    this->bInfiniteAmmo = false;
    this->bDrawGrenadePath = false;
    this->bRTXOn = false;
    this->bRTX_GlobalIlluminationOn = false;
    this->bRTX_ReflectionsOn = false;
    this->bRTX_AmbientOcclusionOn = false;
    this->bRTX_ShadowsOn = false;
    this->bRTX_TranslucencyOn = false;
    this->bVSyncOn = false;
    this->bOverlayOn_Fibonacci = false;
    this->bOverlayOn_LineUp = false;
    this->bOverlayOn_PistolLine = false;
    this->bOverlayOn_RifleLine = false;
    this->bOverlayOn_RuleOfThirds = false;
    this->bApplyGlobalDamageMultiplier_Weapons = false;
    this->bApplyGlobalDamageMultiplier_Grenades = false;
    this->GlobalDamageMultiplier_Weapons = 1.00f;
    this->GlobalDamageMultiplier_Grenades = 1.00f;
    this->bLogWeaponDamageValuesToConsole = false;
    this->bShowObjectiveMarkers = true;
    this->bShowAllEvidenceActors = false;
    this->bShowHesitationBar = true;
    this->bLogPlayerAnimationStatus = false;
    this->bDrawInteractableComponents = false;
    this->bDisableInteractableComponent = false;
    this->bDrawDebugTraces = false;
    this->bDrawDoorKillStunDistances = false;
    this->bMuteFMOD = false;
    this->bPauseFMOD = false;
    this->bForceOpenAllDoors = false;
    this->bForceCloseAllDoors = false;
    this->bLaserEyes = false;
    this->bDisableMusic = false;
    this->bDrawCoverPoints = false;
    this->bDrawCoverOctree = false;
    this->bSWATDynamicCover = false;
    this->bSuspectDynamicCover = true;
    this->bDrawSWATCoverLogic = false;
    this->bDrawSuspectCoverLogic = false;
    this->bInfiniteSWATItems = false;
}

