#include "Door.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "DestructibleDoorChunkComponent.h"
#include "FMODAudioPropagationComponent.h"
#include "InteractableComponent.h"
#include "MirrorPortalComponent.h"

class UObject;
class AActor;
class UFMODEvent;
class AController;
class AReadyOrNotCharacter;
class ADoorJam;
class ADoor;
class APlacedC2Explosive;
class AStackUpActor;
class ATrapActorAttachedToDoor;

void ADoor::UpdateDoorTickRate() {
}

void ADoor::UnlockDoor(bool bUnlockSubDoor) {
}

void ADoor::TryPlayAISuspectResponseToDoorBroken() {
}

void ADoor::ToggleLightBlocker() {
}

void ADoor::Tick_DoorRam() {
}

void ADoor::Tick_DoorPush() {
}

void ADoor::Tick_DoorOpenClose() {
}

void ADoor::Tick_DoorLocked() {
}

void ADoor::Tick_DoorKick_Success() {
}

void ADoor::Tick_DoorKick_Fail() {
}

void ADoor::Tick_DoorHandleLocked() {
}

void ADoor::Tick_DoorHandle_Push() {
}

void ADoor::Tick_DoorHandle_Open() {
}

void ADoor::Tick_DoorExplode() {
}

void ADoor::Tick_DoorBreach() {
}

bool ADoor::TeamKnowsDoorTrapState(bool bSuspectTeam) const {
    return false;
}

bool ADoor::TeamKnowsDoorLockState(bool bSuspectTeam) const {
    return false;
}

bool ADoor::SubDoor_CanOpenDoors(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::SubDoor_CanCloseDoors(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

void ADoor::SpawnDoorBlocker() {
}

void ADoor::SkippedBreachAction() {
}

void ADoor::SetupTrap() {
}

void ADoor::Setup() {
}

void ADoor::SetSWATHasAllKeycards(UObject* WorldContextObject) {
}

void ADoor::SetLocked(bool bNewLocked) {
}

void ADoor::SetDoorTrapKnowledge(bool bSuspectTeam, bool bKnowledge) {
}

void ADoor::SetDoorLockKnowledge(bool bSuspectTeam, bool bKnowledge) {
}

void ADoor::SetAllElectronicLocks(UObject* WorldContextObject, bool NewBlocked) {
}

void ADoor::Server_SetTrapKnowledgeState_Implementation(bool bSuspectTeam, bool bNewKnowledgeState) {
}
bool ADoor::Server_SetTrapKnowledgeState_Validate(bool bSuspectTeam, bool bNewKnowledgeState) {
    return true;
}

void ADoor::Server_SetLockKnowledgeState_Implementation(bool bSuspectTeam, bool bNewKnowledgeState) {
}
bool ADoor::Server_SetLockKnowledgeState_Validate(bool bSuspectTeam, bool bNewKnowledgeState) {
    return true;
}

void ADoor::Restore() {
}

void ADoor::ResetDoorTrapKnowledge() {
}

void ADoor::ResetDoorLockKnowledge() {
}

void ADoor::RemoveWedges() {
}

void ADoor::RemoveDoorBlocker() {
}

float ADoor::RamDoor(AReadyOrNotCharacter* DoorRamCharacter) {
    return 0.0f;
}

void ADoor::PushDoor_SpecificAngle(AReadyOrNotCharacter* DoorPusherCharacter, float CustomTargetAngle, bool bAnimateDoorHandle) {
}

float ADoor::PushDoor(AReadyOrNotCharacter* DoorPusherCharacter, float InIncrementAngle, bool bAnimateDoorHandle, bool bPlaySound) {
    return 0.0f;
}

void ADoor::PlayDoorSound(EDoorInteraction DoorInteraction, AReadyOrNotCharacter* DoorInteractionInstigator, const TArray<FMODParam>& Params) {
}

void ADoor::PlayDoorKickSound(AReadyOrNotCharacter* Kicker, float Result) {
}

void ADoor::PlayDoorDamageSound(EDoorDamageType DoorDamage, const TArray<FMODParam>& Params) {
}

float ADoor::PeekDoor(AReadyOrNotCharacter* DoorPeekerCharacter, float InIncrementAngle, bool bAnimateDoorHandle) {
    return 0.0f;
}

void ADoor::OpenSubDoor(AReadyOrNotCharacter* DoorOpenCharacter, bool bInstant, bool bAnimateDoorHandle) {
}

void ADoor::OpenDoor_SpecificAngle(AReadyOrNotCharacter* DoorOpenCharacter, float CustomTargetAngle, bool bInstant, bool bAnimateDoorHandle) {
}

void ADoor::OpenDoor_Debug() {
}

float ADoor::OpenDoor(AReadyOrNotCharacter* DoorOpenCharacter, bool bInstant, bool bAnimateDoorHandle, const bool bNoCloseThreshold) {
    return 0.0f;
}

void ADoor::OnRep_TrapDataUpdated() {
}

void ADoor::OnRep_DoorHandlesBroken() {
}

void ADoor::OnRep_DoorDataUpdated() {
}

void ADoor::OnRep_DestroyedChunkIdxChanged() {
}

void ADoor::OnRep_ClientResetDoor() {
}

bool ADoor::NonMainSubDoor_CanShowOpenDoorPrompt() const {
    return false;
}

void ADoor::Multicast_SetLocked_Implementation(bool bShouldLocked) {
}

void ADoor::Multicast_PlayElectronicDoorSound_Implementation(UFMODEvent* Event) {
}

void ADoor::Multicast_PlayDoorSound_Implementation(EDoorInteraction DoorDamage, AReadyOrNotCharacter* DoorInteractionInstigator, const TArray<FMODParam>& Params) {
}

void ADoor::Multicast_PlayDoorDamageSound_Implementation(EDoorDamageType DoorDamage, const TArray<FMODParam>& Params) {
}

void ADoor::Multicast_ExplodeDoor_Implementation(AReadyOrNotCharacter* DoorBreacherCharacter, AActor* ExplosionCauser, bool bKeepHinges) {
}

void ADoor::Multicast_CheckSupports_Implementation() {
}

bool ADoor::MainSubDoor_CanShowOpenDoorPrompt() const {
    return false;
}

void ADoor::LockDoor(bool bLockSubDoor) {
}

void ADoor::KickSubDoor(AReadyOrNotCharacter* DoorKickCharacter) {
}

void ADoor::KickDoor(AReadyOrNotCharacter* DoorKickCharacter, bool bKickSubDoor, const bool bForce) {
}

bool ADoor::IsTrapLive() const {
    return false;
}

bool ADoor::IsTooFarForKick() const {
    return false;
}

bool ADoor::IsSubDoorOpen() {
    return false;
}

bool ADoor::IsStackUpDisabled(FVector CommandLocation) const {
    return false;
}

bool ADoor::IsPointRightOfDoorway(FVector Vector) const {
    return false;
}

bool ADoor::IsPointInFrontOfDoor(FVector Vector) const {
    return false;
}

bool ADoor::IsPendingSubDoorKick() const {
    return false;
}

bool ADoor::IsOutlineEnabled(EActorOutlineType OutlineType) const {
    return false;
}

bool ADoor::IsOutlineDisabled() const {
    return false;
}

bool ADoor::IsOpening() const {
    return false;
}

bool ADoor::IsOpenBy_Angle(float Angle) const {
    return false;
}

bool ADoor::IsOpenBy(float Percentage) const {
    return false;
}

bool ADoor::IsOpenBeyondIncrementThreshold() const {
    return false;
}

bool ADoor::IsOpenBeyondCloseThreshold() const {
    return false;
}

bool ADoor::IsOpenBeyond_Angle(float Angle) const {
    return false;
}

bool ADoor::IsOpenBeyond(float Percentage) const {
    return false;
}

bool ADoor::IsOpenAtOrBeyond_Angle(float Angle) const {
    return false;
}

bool ADoor::IsOpenAtOrBeyond(float Percentage) const {
    return false;
}

bool ADoor::IsOpen_Forward() const {
    return false;
}

bool ADoor::IsOpen_Backward() const {
    return false;
}

bool ADoor::IsOpen() const {
    return false;
}

bool ADoor::IsNonMainSubdoor() const {
    return false;
}

bool ADoor::IsNonDoorInteractionPlaying() const {
    return false;
}

bool ADoor::IsMirrorBlocked() const {
    return false;
}

bool ADoor::IsMiddleChunkBroken() const {
    return false;
}

bool ADoor::IsMainSubdoor() const {
    return false;
}

bool ADoor::IsLocked() const {
    return false;
}

bool ADoor::IsLockChanceOverriden() const {
    return false;
}

bool ADoor::IsLockable() const {
    return false;
}

bool ADoor::IsLocationSameSideAsTrap(FVector InLocation) const {
    return false;
}

bool ADoor::IsJammed() const {
    return false;
}

bool ADoor::IsIgnoredForFlee() {
    return false;
}

bool ADoor::IsHalfwayOpen() const {
    return false;
}

bool ADoor::IsFullyOpen_Forward() const {
    return false;
}

bool ADoor::IsFullyOpen_Backward() const {
    return false;
}

bool ADoor::IsFullyOpen() const {
    return false;
}

bool ADoor::IsElectronicDoor() const {
    return false;
}

bool ADoor::IsDoorwayOnly() const {
    return false;
}

bool ADoor::IsDoorInteractionPlaying() const {
    return false;
}

bool ADoor::IsDoorChunkDestroyed(UDestructibleDoorChunkComponent* InChunkComponent) const {
    return false;
}

bool ADoor::IsDoorBroken() const {
    return false;
}

bool ADoor::IsDestructible() const {
    return false;
}

bool ADoor::IsClosing() const {
    return false;
}

bool ADoor::IsClosed() const {
    return false;
}

bool ADoor::IsC2Placed() const {
    return false;
}

bool ADoor::IsAttachedToRoot() const {
    return false;
}

bool ADoor::IsAnyInteractionPlaying() const {
    return false;
}

bool ADoor::IsAnyAIOpening() const {
    return false;
}

bool ADoor::IsAnyAIClosing() const {
    return false;
}

bool ADoor::IsActorSameSideAsTrap(AActor* InActor) const {
    return false;
}

bool ADoor::IsActorRightOfDoorway(AActor* Actor) const {
    return false;
}

bool ADoor::IsActorInFrontOfDoorway(AActor* Actor) const {
    return false;
}

bool ADoor::IsActorInFrontOfDoor(AActor* Actor) const {
    return false;
}

bool ADoor::IsActorBehindDoor_Relative(AActor* Actor) const {
    return false;
}

bool ADoor::HasTrapAndSWATKnowsTrap() const {
    return false;
}

bool ADoor::HasTrapAndSuspectKnowsTrap() const {
    return false;
}

bool ADoor::HasEverBeenOpened() const {
    return false;
}

FVector ADoor::GetWedgeLocation() const {
    return FVector{};
}

FName ADoor::GetTypeOfDoorTrap() {
    return NAME_None;
}

FName ADoor::GetTypeOfDoorRow() {
    return NAME_None;
}

float ADoor::GetTargetAngle() const {
    return 0.0f;
}

bool ADoor::GetSWATKnowsLockState() const {
    return false;
}

bool ADoor::GetSuspectKnowsLockState() const {
    return false;
}

ADoor* ADoor::GetSubDoor() const {
    return NULL;
}

float ADoor::GetStartingOpenAngle() const {
    return 0.0f;
}

TArray<AStackUpActor*> ADoor::GetStackupsForArea(EStackupGenArea StackupArea) const {
    return TArray<AStackUpActor*>();
}

float ADoor::GetPseudoVelocity() const {
    return 0.0f;
}

APlacedC2Explosive* ADoor::GetPlacedC2() const {
    return NULL;
}

float ADoor::GetOpenThreshold() const {
    return 0.0f;
}

float ADoor::GetOpenAmountAsPercentage() const {
    return 0.0f;
}

float ADoor::GetOpenAmount() const {
    return 0.0f;
}

float ADoor::GetMaxOpenAmount() const {
    return 0.0f;
}

AReadyOrNotCharacter* ADoor::GetLastDoorUser() const {
    return NULL;
}

float ADoor::GetIncrementAngle() const {
    return 0.0f;
}

TMap<EDoorDamageType, float> ADoor::GetDoorStunDistance() const {
    return TMap<EDoorDamageType, float>();
}

FVector ADoor::GetDoorMidLocation() const {
    return FVector{};
}

TMap<EDoorDamageType, float> ADoor::GetDoorKillDistance() const {
    return TMap<EDoorDamageType, float>();
}

FVector ADoor::GetBestDoorInteraction_FromStackUpArea(const EStackupGenArea& InStackUpArea, bool bDoorwayBased) const {
    return FVector{};
}

FVector ADoor::GetBestDoorInteraction_FromLocation(const FVector& InInteractionLocation, bool bDoorwayBased) const {
    return FVector{};
}

ADoorJam* ADoor::GetAttachedWedge() const {
    return NULL;
}

ATrapActorAttachedToDoor* ADoor::GetAttachedTrap() const {
    return NULL;
}

void ADoor::GenerateClearPoints() {
}

void ADoor::FlipStackUpArea(EStackupGenArea& OutStackUpArea, bool bHorizontalFlip, bool bVerticalFlip) {
}

void ADoor::Finished_DoorRam() {
}

void ADoor::Finished_DoorKick_Success() {
}

void ADoor::Finished_DoorExplode() {
}

EStackupGenArea ADoor::FindStackUpAreaFromLocation(const FVector& InInteractionLocation) const {
    return EStackupGenArea::SGA_None;
}

void ADoor::ExplodeDoor(AReadyOrNotCharacter* DoorBreacherCharacter, AActor* ExplosionCauser, bool bKeepHinges) {
}

void ADoor::EnableOutline(EActorOutlineType OutlineType) {
}

void ADoor::EnableNavLink() {
}

void ADoor::EnableAllInteractables() {
}

bool ADoor::DoesSWATKnowTrapState() const {
    return false;
}

bool ADoor::DoesSuspectKnowTrapState() const {
    return false;
}

void ADoor::DisableStackupsOnErroringSide() {
}

void ADoor::DisableOutline() {
}

void ADoor::DisableNavLink() {
}

void ADoor::DisableAllInteractables() {
}

void ADoor::DestroyNavLink() {
}

void ADoor::DestroyChunk_Index(int32 ChunkIndex, const FVector& Impulse, float ImpulseStrength) {
}

void ADoor::DestroyChunk(UDestructibleDoorChunkComponent* InChunk, const FVector& Impulse, float ImpulseStrength) {
}

void ADoor::DestroyAllChunks(const FVector& Impulse, float ImpulseStrength, bool bKeepHinges) {
}

void ADoor::DecreaseNumKicksToBreakDown(AReadyOrNotCharacter* DoorKickCharacter, bool& bShouldOpenDoor, bool& bCanBreakLock, float KickChanceOffset) {
}

void ADoor::CollapseDoor(AReadyOrNotCharacter* DoorBreacherCharacter, FVector BreachLocation) {
}

void ADoor::CloseSubDoor(AReadyOrNotCharacter* DoorCloseCharacter, bool bInstant, bool bAnimateDoorHandle) {
}

void ADoor::CloseDoor_Debug() {
}

void ADoor::CloseDoor(AReadyOrNotCharacter* DoorCloserCharacter, bool bInstant, bool bAnimateDoorHandle) {
}

bool ADoor::CanTakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) const {
    return false;
}

bool ADoor::CanSpawnTrap() const {
    return false;
}

bool ADoor::CanRamDoor(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanPushDoorWhileBroken() const {
    return false;
}

bool ADoor::CanPushDoor(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanPullDoor(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanPlaceC2Explosive(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanPeekDoor(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanOpenDoor(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanMirrorUnderDoor(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanLockpickDoor(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanKickDoor(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanIssueOrdersHere(const FHitResult& TraceResult) const {
    return false;
}

bool ADoor::CanEquipWedge(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanEquipOptiwand(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanEquipMultitool(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanEquipC2Explosive(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanEquipBreachingShotgun(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanEquipBatteringRam(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanDeployWedge(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool ADoor::CanCloseDoor(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

void ADoor::BreakDoorHandles() {
}

void ADoor::BreakDoor(bool bDestroyAllChunks, AReadyOrNotCharacter* DoorBreakerCharacter) {
}

void ADoor::BreachDoorFromPoint(AReadyOrNotCharacter* DoorBreacherCharacter, FVector BreachPoint, float InIncrementAngle) {
}

void ADoor::BreachDoor(AReadyOrNotCharacter* DoorBreacherCharacter, float InIncrementAngle) {
}

void ADoor::AttachWedge(ADoorJam* NewWedge) {
}

void ADoor::AttachTrap(ATrapActorAttachedToDoor* NewTrap, bool bAttachToDoor) {
}

void ADoor::ApplyRandomDamageToChunks(float MinDamage, float MaxDamage) {
}

void ADoor::ApplyDoorDamage(EDoorDamageType InDoorDamage, AReadyOrNotCharacter* Victim) {
}

bool ADoor::AnyTopDoorChunksBroken() const {
    return false;
}

bool ADoor::AnyMiddleDoorChunksBroken() const {
    return false;
}

bool ADoor::AnyHingesLeft() const {
    return false;
}

bool ADoor::AnyChunksDestroyed() const {
    return false;
}

bool ADoor::AnyBottomDoorChunksBroken() const {
    return false;
}

bool ADoor::AllTopDoorChunksBroken() const {
    return false;
}

bool ADoor::AllMiddleDoorChunksBroken() const {
    return false;
}

bool ADoor::AllMajorDoorChunksDestroyed() const {
    return false;
}

bool ADoor::AllBottomDoorChunksBroken() const {
    return false;
}

void ADoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADoor, bDoorJammed);
    DOREPLIFETIME(ADoor, DestroyedChunkIdxs);
    DOREPLIFETIME(ADoor, ChunkComponents);
    DOREPLIFETIME(ADoor, LastDoorUser);
    DOREPLIFETIME(ADoor, LastDoorDamage);
    DOREPLIFETIME(ADoor, AttachedTrap);
    DOREPLIFETIME(ADoor, AttachedWedge);
    DOREPLIFETIME(ADoor, OpenCloseAmount);
    DOREPLIFETIME(ADoor, DoorHandlePitchAmount);
    DOREPLIFETIME(ADoor, bC2Placed);
    DOREPLIFETIME(ADoor, bSWATKnowsLockState);
    DOREPLIFETIME(ADoor, bSuspectKnowsLockState);
    DOREPLIFETIME(ADoor, bSWATKnowsTrapState);
    DOREPLIFETIME(ADoor, bSuspectKnowsTrapState);
    DOREPLIFETIME(ADoor, Blocked);
    DOREPLIFETIME(ADoor, bDoorBroken);
    DOREPLIFETIME(ADoor, bTrapInFront);
    DOREPLIFETIME(ADoor, bClientReset);
    DOREPLIFETIME(ADoor, bDoorHandlesBroken);
    DOREPLIFETIME(ADoor, DoorData);
    DOREPLIFETIME(ADoor, TrapData);
}

ADoor::ADoor() {
    this->DoorBlockerActor = NULL;
    this->DoorBlockerActorInst = NULL;
    this->bDrawNoStackupExtent = false;
    this->bRandomlyOpenAtGameStart = true;
    this->bIgnoreForFlee = false;
    this->CurrentTeamBreachActivity = NULL;
    this->bDoorJammed = false;
    this->StackupGenType = EStackupGenType::SG_0DegreeLine;
    this->StackupGenArea = EStackupGenArea::SGA_All;
    this->ElectronicLockChance = 0.00f;
    this->bShouldInvertTrap = false;
    this->RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->DoorStatic = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorStatic"));
    this->DoorHandleFront = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorHandleFront"));
    this->DoorHandleBack = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorHandleBack"));
    this->FrontMirrorPoint = CreateDefaultSubobject<UMirrorPortalComponent>(TEXT("FrontMirrorPoint"));
    this->BackMirrorPoint = CreateDefaultSubobject<UMirrorPortalComponent>(TEXT("BackMirrorPoint"));
    this->DoorChunk0 = CreateDefaultSubobject<UDestructibleDoorChunkComponent>(TEXT("DoorChunk0"));
    this->DoorChunk1 = CreateDefaultSubobject<UDestructibleDoorChunkComponent>(TEXT("DoorChunk1"));
    this->DoorChunk2 = CreateDefaultSubobject<UDestructibleDoorChunkComponent>(TEXT("DoorChunk2"));
    this->DoorChunk3 = CreateDefaultSubobject<UDestructibleDoorChunkComponent>(TEXT("DoorChunk3"));
    this->DoorChunk4 = CreateDefaultSubobject<UDestructibleDoorChunkComponent>(TEXT("DoorChunk4"));
    this->DoorChunk5 = CreateDefaultSubobject<UDestructibleDoorChunkComponent>(TEXT("DoorChunk5"));
    this->DoorChunk6 = CreateDefaultSubobject<UDestructibleDoorChunkComponent>(TEXT("DoorChunk6"));
    this->DoorChunk7 = CreateDefaultSubobject<UDestructibleDoorChunkComponent>(TEXT("DoorChunk7"));
    this->DoorChunk8 = CreateDefaultSubobject<UDestructibleDoorChunkComponent>(TEXT("DoorChunk8"));
    this->LightBlocker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Light Blocker"));
    this->DoorOpenInteractableComp = CreateDefaultSubobject<UInteractableComponent>(TEXT("Door Open Interactable Comp"));
    this->DoorSublinkOpenInteractableComp = CreateDefaultSubobject<UInteractableComponent>(TEXT("Door Sublink Open Interactable Comp"));
    this->DoorSublinkPushInteractableComp = CreateDefaultSubobject<UInteractableComponent>(TEXT("Door Sublink Push Interactable Comp"));
    this->DoorPushInteractableComp = CreateDefaultSubobject<UInteractableComponent>(TEXT("Door Push Interactable Comp"));
    this->DoorKickInteractableComp = CreateDefaultSubobject<UInteractableComponent>(TEXT("Door Kick Interactable Comp"));
    this->DoorSublinkKickInteractableComp = CreateDefaultSubobject<UInteractableComponent>(TEXT("Door Sublink Kick Interactable Comp"));
    this->LockpickInteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Lockpick Interactable Component"));
    this->C2InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("C2 Interactable Component"));
    this->WedgeInteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Wedge Interactable Component"));
    this->OptiwandInteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Optiwand Interactable Component"));
    this->BSGInteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("BSG Interactable Component"));
    this->BSGInteractableComponent_2 = CreateDefaultSubobject<UInteractableComponent>(TEXT("BSG Interactable Component 2"));
    this->DoorRamInteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Door Ram Interactable Component"));
    this->FMODAudioPropagationComp = CreateDefaultSubobject<UFMODAudioPropagationComponent>(TEXT("FMODAudioPropagationComp"));
    this->NavLinkProxy = NULL;
    this->LockpickArea = CreateDefaultSubobject<USceneComponent>(TEXT("Lockpick Highlight Component"));
    this->DoorArea = CreateDefaultSubobject<USceneComponent>(TEXT("Door Highlight Component"));
    this->C2Area = CreateDefaultSubobject<USceneComponent>(TEXT("C2 Highlight Component"));
    this->BSGArea = CreateDefaultSubobject<USceneComponent>(TEXT("BSG Highlight Component"));
    this->MirrorgunArea = CreateDefaultSubobject<USceneComponent>(TEXT("Optiwand Area Component"));
    this->WedgeArea = CreateDefaultSubobject<USceneComponent>(TEXT("Doorjam Highlight Component"));
    this->BatteringRamArea = CreateDefaultSubobject<USceneComponent>(TEXT("Ram Area Component"));
    this->NavModifierVolume = NULL;
    this->bHasEverBeenOpenedBySwat = false;
    this->TrapSetup = ETrapSetup::Automatic;
    this->bNoSpawnTrap = false;
    this->DoorName = TEXT("Door");
    this->bOneWay = false;
    this->bCanOpenFromOppositeSide = true;
    this->bCanPlayerInteract = true;
    this->bCanMirrorGun = true;
    this->MaxOpenClose = 90.00f;
    this->StartingOpenCloseAngle = 0.00f;
    this->OpenThreshold = 5.00f;
    this->CloseThreshold = 75.00f;
    this->IncrementAngle = 15.00f;
    this->MultitoolUseTime = 4.00f;
    this->GrenadeDamageToBreakDoor = 3500.00f;
    this->MoveAndClearRequiredAmount = 0.00f;
    this->PhysicalPushAmount = 30.00f;
    this->bCanIssueOrdersOnFrontSide = true;
    this->bCanIssueOrdersOnBackSide = true;
    this->DriveSubDoor = NULL;
    this->MatchOpenCloseDoor = NULL;
    this->bMainSubDoor = false;
    this->bKickAlwaysFails = false;
    this->DoorKickSuccessChance = 0.90f;
    this->NumSuccessfulKicksToBreakDown = 1;
    this->C2ExplosionDecal = NULL;
    this->bDisableStackUpOnFront = false;
    this->bDisableStackUpOnBack = false;
    this->bOverrideLockChance = false;
    this->LockedChance = 0.20f;
    this->DoorPushCurve = NULL;
    this->DoorOpenCurve = NULL;
    this->DoorCloseCurve = NULL;
    this->DoorKickSuccessCurve = NULL;
    this->DoorKickFailCurve = NULL;
    this->DoorLockedCurve = NULL;
    this->DoorRamCurve = NULL;
    this->DoorExplodeCurve = NULL;
    this->DoorBreachCurve = NULL;
    this->DoorHandleOpenCurve = NULL;
    this->DoorHandlePushCurve = NULL;
    this->DoorHandleLockedCurve = NULL;
    this->PlacedC2 = NULL;
    this->ChunkComponents.AddDefaulted(9);
    this->bPendingSubDoorKick = false;
    this->LastDoorUser = NULL;
    this->LastDoorDamage = EDoorDamageType::DDT_None;
    this->AttachedTrap = NULL;
    this->AttachedWedge = NULL;
    this->bIsElectronicDoor = false;
    this->OpenCloseAmount = 0.00f;
    this->DoorHandlePitchAmount = 0.00f;
    this->bC2Placed = false;
    this->bSWATKnowsLockState = false;
    this->bSuspectKnowsLockState = false;
    this->bSWATKnowsTrapState = false;
    this->bSuspectKnowsTrapState = false;
    this->Blocked = false;
    this->bDoorBroken = false;
    this->bTrapInFront = false;
    this->bClientReset = false;
    this->bDoorHandlesBroken = false;
    this->bSWATHasKeycard = false;
    this->bSuspectsHaveKeycard = false;
    this->bAlarmTriggered = false;
    this->DoorOcclusionMultiplier = 2.00f;
}

