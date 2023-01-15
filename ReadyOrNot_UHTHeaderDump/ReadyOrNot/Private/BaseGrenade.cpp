#include "BaseGrenade.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialForceComponent -FallbackName=RadialForceComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionStimuliSourceComponent -FallbackName=AIPerceptionStimuliSourceComponent

void ABaseGrenade::UpdateServerPath_Implementation(const TArray<FVector_NetQuantize>& Path, int32 Bounce1, int32 Bounce2, int32 Bounce3) {
}
bool ABaseGrenade::UpdateServerPath_Validate(const TArray<FVector_NetQuantize>& Path, int32 Bounce1, int32 Bounce2, int32 Bounce3) {
    return true;
}

void ABaseGrenade::SetFullyPrimed() {
}

void ABaseGrenade::Server_UpdateThrowPosition_Implementation(FVector Position) {
}
bool ABaseGrenade::Server_UpdateThrowPosition_Validate(FVector Position) {
    return true;
}

void ABaseGrenade::Server_ThrowGrenade_Implementation(bool bOverarmThrow, FVector ThrowDirection, FVector ThrowStart) {
}
bool ABaseGrenade::Server_ThrowGrenade_Validate(bool bOverarmThrow, FVector ThrowDirection, FVector ThrowStart) {
    return true;
}

void ABaseGrenade::Server_StartFastThrow_Implementation() {
}
bool ABaseGrenade::Server_StartFastThrow_Validate() {
    return true;
}

void ABaseGrenade::Server_SetThrowOverarm_Implementation(bool bThrowOverarm, bool bQuickThrow) {
}
bool ABaseGrenade::Server_SetThrowOverarm_Validate(bool bThrowOverarm, bool bQuickThrow) {
    return true;
}

void ABaseGrenade::OnRep_GrenadeUsed() {
}

void ABaseGrenade::OnRep_GrenadePath() {
}

void ABaseGrenade::OnGrenadeBounceSoundStopped() {
}

void ABaseGrenade::Multicast_OnDeadDropped_Implementation() {
}

void ABaseGrenade::Multicast_GrenadeThrow_Implementation(bool bOverarmThrow, FVector ThrowDirection, FVector ThrowStart) {
}

void ABaseGrenade::Multicast_DetonationEffects_Implementation(FVector CalculatedForce) {
}

void ABaseGrenade::Multicast_AddImpulse_Implementation(FVector Impulse, FVector FromLocation) {
}

bool ABaseGrenade::IsOutside() {
    return false;
}

void ABaseGrenade::DoThrowFast() {
}

void ABaseGrenade::Detonate() {
}

void ABaseGrenade::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABaseGrenade, CompletePath);
    DOREPLIFETIME(ABaseGrenade, BouncePt1);
    DOREPLIFETIME(ABaseGrenade, BouncePt2);
    DOREPLIFETIME(ABaseGrenade, BouncePt3);
    DOREPLIFETIME(ABaseGrenade, Rep_InterpedPosition);
    DOREPLIFETIME(ABaseGrenade, bThrowAsQuickThrow);
    DOREPLIFETIME(ABaseGrenade, bFastThrowing);
    DOREPLIFETIME(ABaseGrenade, bGrenadeReleased);
    DOREPLIFETIME(ABaseGrenade, bUsed);
    DOREPLIFETIME(ABaseGrenade, ThrownBy);
}

ABaseGrenade::ABaseGrenade() {
    this->DetonationLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("DetonationLight"));
    this->DetonationRadialForce = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForceComponent"));
    this->FMODBounceSoundComponent = NULL;
    this->DetonationStimuliComp = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PerceptionComp"));
    this->GrenadeBounciness = 5.00f;
    this->bDetonationTriggersStimuli = true;
    this->DetonationSoundMaxRange = 1500.00f;
    this->DetonationLoudness = 1.00f;
    this->DetonationTag = TEXT("GrenadeExplosion");
    this->ThrownTag = TEXT("GrenadeThrown");
    this->BounceTag = TEXT("GrenadeBounce");
    this->Thrown = NULL;
    this->BouncePt1 = 0;
    this->BouncePt2 = 0;
    this->BouncePt3 = 0;
    this->GrenadeSpeed = 1500.00f;
    this->BounceSoundMinImpulse = 250.00f;
    this->ActivationEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ActivationComponent"));
    this->GrenadeBounceEffect = NULL;
    this->ActivationSound = NULL;
    this->ActivationTime = 0.00f;
    this->ActivationElapsedTime = 0.00f;
    this->bActivated = false;
    this->bPlayDetonationEffectsExactlyOnce = false;
    this->DrawDebugType = EDrawDebugTrace::ForDuration;
    this->bThrowAsQuickThrow = false;
    this->bFastThrowOnceEquipped = false;
    this->bFastThrowing = false;
    this->bGrenadeReleased = false;
    this->ThrowImpulse = 220.00f;
    this->UpImpulse = 52.50f;
    this->bTriggersActionMusic = true;
    this->bCanThrowGrenade = false;
    this->DetonationTime = 2.00f;
    this->bIncreaseDamageRadiusOverTime = false;
    this->UnderarmForceScale = 1.00f;
    this->Drag = 0.00f;
    this->DragAppliedPerBounce = 100.00f;
    this->DetonationFlashIntensitiy = 0.00f;
    this->DetonationFlashInterp = 10.00f;
    this->ReDetonationTime = 0.50f;
    this->bTriggerSFXOnRedetonate = false;
    this->ThrowDistance = 1300.00f;
    this->RedotonateCount = 0.00f;
    this->ListenerTriggerDistance = 300.00f;
    this->DetonationFMODEvent = NULL;
    this->DetonationEvent = NULL;
    this->bHideGrenadeOnDetonate = false;
    this->RedrawDelayAfterThrow = 0.50f;
    this->bUsed = false;
    this->ThrownBy = NULL;
    this->bUseScreenShake = false;
    this->ExplosionScreenShake = NULL;
    this->CameraShakeRadius = 500.00f;
    this->bUseDetonationDecal = false;
    this->DetonationDecalTraceDistance = 20.00f;
    this->DetonationDecal = NULL;
    this->GrenadeThrowerInstigator = NULL;
    this->BounceActivationRadius = 100.00f;
    this->FMODGrenadeBounce = NULL;
}

