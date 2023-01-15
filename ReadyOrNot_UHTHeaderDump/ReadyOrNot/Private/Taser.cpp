#include "Taser.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CableComponent -ObjectName=CableComponent -FallbackName=CableComponent

void ATaser::Server_SetHoldingTaser_Implementation(bool bNewHold) {
}
bool ATaser::Server_SetHoldingTaser_Validate(bool bNewHold) {
    return true;
}

void ATaser::Server_DetachProbes_Implementation() {
}
bool ATaser::Server_DetachProbes_Validate() {
    return true;
}

void ATaser::Server_DeliverStunToAttachedTarget_Implementation() {
}
bool ATaser::Server_DeliverStunToAttachedTarget_Validate() {
    return true;
}

void ATaser::OnRep_ProjectileReplicated() {
}

void ATaser::Multicast_StopCrackleSoundEffect_Implementation() {
}

void ATaser::Multicast_StartCrackleSoundEffect_Implementation() {
}

void ATaser::Multicast_ResetDoors_Implementation() {
}

void ATaser::Multicast_ResetCableAttachments_Implementation() {
}

void ATaser::Multicast_PlayTaserHitEffect_Implementation(FHitResult Hit) {
}

void ATaser::Multicast_PlayFireEffects_Implementation(bool bDryFire) {
}

void ATaser::Multicast_PlayDetachEffect_Implementation() {
}

void ATaser::Multicast_HideCables_Implementation() {
}

void ATaser::Multicast_DestroyProjectiles_Implementation() {
}

void ATaser::HandleMeleeDeffered(FHitResult Hit) {
}

void ATaser::DetachProbes_Implementation() {
}
bool ATaser::DetachProbes_Validate() {
    return true;
}

void ATaser::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATaser, ProjectileHitResult);
    DOREPLIFETIME(ATaser, bFiredCartridge);
    DOREPLIFETIME(ATaser, bDetachedProbes);
    DOREPLIFETIME(ATaser, StunDurationRemaining);
    DOREPLIFETIME(ATaser, bStartedStun);
    DOREPLIFETIME(ATaser, LeftProjectile);
    DOREPLIFETIME(ATaser, RightProjectile);
    DOREPLIFETIME(ATaser, LeftCableAttachActor);
    DOREPLIFETIME(ATaser, RightCableAttachActor);
}

ATaser::ATaser() {
    this->TaserLightDynamicMaterial = NULL;
    this->CartridgesPerSlot = 1;
    this->StartingCartridges = 6;
    this->SweepForReactionVolumeSize = 800.00f;
    this->CartridgeWeight = 0.00f;
    this->bFiredCartridge = false;
    this->bDetachedProbes = false;
    this->BlinkTime = 1.00f;
    this->bBlinkState = false;
    this->MaxBatteryLevel = 100.00f;
    this->MinCableLength = 0.00f;
    this->MaxCableLength = 70.00f;
    this->CableGainRate = 70.00f;
    this->ProbeMaxDistance = 2000.00f;
    this->DetachSoundEffect = NULL;
    this->DetachSoundEffectFMOD = NULL;
    this->PingStunDuration = 8.00f;
    this->StunDurationRemaining = 8.00f;
    this->bStartedStun = false;
    this->CrackleSoundEffect = NULL;
    this->CrackleSoundEffectFMOD = NULL;
    this->TaserHitEffectFMOD = NULL;
    this->LeftProjectile = NULL;
    this->RightProjectile = NULL;
    this->TaserImpactParticle_Start = NULL;
    this->TaserImpactParticleComp_Start = NULL;
    this->TaserImpactParticle_Loop = NULL;
    this->TaserImpactParticleComp_LoopLeft = NULL;
    this->TaserImpactParticleComp_LoopRight = NULL;
    this->DoorBlowOutForce = 200.00f;
    this->LeftCableAttachActor = NULL;
    this->RightCableAttachActor = NULL;
    this->TaserFireLoop1P = NULL;
    this->TaserFireLoop3P = NULL;
    this->TaserFireLoopCameraShake = NULL;
    this->TopCable = CreateDefaultSubobject<UCableComponent>(TEXT("LeftCable"));
    this->BottomCable = CreateDefaultSubobject<UCableComponent>(TEXT("RightCable"));
    this->LeftDoor = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LeftDoor"));
    this->RightDoor = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RightDoor"));
    this->CrackleSoundGenerator = CreateDefaultSubobject<UAudioComponent>(TEXT("CrackleSoundGenerator"));
    this->CrackleSoundGeneratorFMOD = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("CrackleSoundGeneratorFMOD"));
    this->LaserAttachmentClass = NULL;
}

