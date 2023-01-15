#include "DestructibleVehicle.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ApexDestruction -ObjectName=DestructibleComponent -FallbackName=DestructibleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpotLightComponent -FallbackName=SpotLightComponent

class UFMODEvent;

void ADestructibleVehicle::StopCarAlarm() {
}

void ADestructibleVehicle::Multicast_PlayTireDestroyedEffects_Implementation(UStaticMeshComponent* TireMesh) {
}

void ADestructibleVehicle::Multicast_PlayAudioEvent_Implementation(UFMODEvent* Event, FVector_NetQuantize Location) {
}

void ADestructibleVehicle::Multicast_DeployCarFeatures_Implementation(bool bAirbag, bool bCarAlarm, bool bDisableLeftLight, bool bDisableRightLight, bool bSimulateRearVisionMirror, bool bSimulateLeftWingMirror, bool bSimulateRightWingMirror) {
}

void ADestructibleVehicle::Multicast_ApplyWindowShatterEffects_Implementation(UDestructibleComponent* Destructible) {
}

void ADestructibleVehicle::Multicast_ApplyRadialDamageToWindow_Implementation(UDestructibleComponent* Destructible, FVector_NetQuantize DamageOrigin, float DamageRadius, float ImpulseStrength) {
}

void ADestructibleVehicle::FlashHeadLights() {
}

void ADestructibleVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADestructibleVehicle, bFrontLeftTyreDestroyed);
    DOREPLIFETIME(ADestructibleVehicle, bFrontRightTyreDestroyed);
    DOREPLIFETIME(ADestructibleVehicle, bRearLeftTyreDestroyed);
    DOREPLIFETIME(ADestructibleVehicle, bRearRightTyreDestroyed);
}

ADestructibleVehicle::ADestructibleVehicle() {
    this->bComplexVehicle = true;
    this->bLightsOn = false;
    this->ChanceToCauseAlarmOnDamage = 1.00f;
    this->AlarmPlayLength = 30.00f;
    this->AlarmHeadLightsFlashInterval = 1.00f;
    this->ChanceToCauseAirbagToDeployOnDamage = 1.00f;
    this->GlassHealth = 150.00f;
    this->GlassDamageToApply = 1000.00f;
    this->RollAmountOnTyreDamage = 2.00f;
    this->PitchAmountOnTyreDamage = 2.00f;
    this->SinkAmountOnTyreDamage = -2.00f;
    this->TireDeflationInterpSpeed = 0.25f;
    this->FlatTireMesh = NULL;
    this->BodyImpactEvent = NULL;
    this->BodyBreakEvent = NULL;
    this->GlassImpactEvent = NULL;
    this->GlassBreakEvent = NULL;
    this->AirbagParticle = NULL;
    this->AirbagEvent = NULL;
    this->TireDeflateEvent = NULL;
    this->FrontLightsOnMaterial = NULL;
    this->FrontLightsOffMaterial = NULL;
    this->RearLightsOnMaterial = NULL;
    this->RearLightsOffMaterial = NULL;
    this->FrontLeftLightsMaterialIndex = 0;
    this->FrontRightLightsMaterialIndex = 0;
    this->RearLightsMaterialIndex = 0;
    this->bLeftLightDestroyed = false;
    this->bRightLightDestroyed = false;
    this->bFrontLeftTyreDestroyed = false;
    this->bFrontRightTyreDestroyed = false;
    this->bRearLeftTyreDestroyed = false;
    this->bRearRightTyreDestroyed = false;
    this->CarBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CarBody"));
    this->FrontLeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontLeftDoor"));
    this->FrontRightDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontRightDoor"));
    this->BackLeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackLeftDoor"));
    this->BackRightDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackRightDoor"));
    this->Boot = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Boot"));
    this->RearWindshield = CreateDefaultSubobject<UDestructibleComponent>(TEXT("RearWindshield"));
    this->FrontWindshield = CreateDefaultSubobject<UDestructibleComponent>(TEXT("FrontWindshield"));
    this->RearSideWindowLeft = CreateDefaultSubobject<UDestructibleComponent>(TEXT("RearSideWindowLeft"));
    this->RearSideWindowRight = CreateDefaultSubobject<UDestructibleComponent>(TEXT("RearSideWindowRight"));
    this->RearDoorWindowLeft = CreateDefaultSubobject<UDestructibleComponent>(TEXT("RearDoorWindowLeft"));
    this->RearDoorWindowRight = CreateDefaultSubobject<UDestructibleComponent>(TEXT("RearDoorWindowRight"));
    this->FrontDoorWindowLeft = CreateDefaultSubobject<UDestructibleComponent>(TEXT("FrontDoorWindowLeft"));
    this->FrontDoorWindowRight = CreateDefaultSubobject<UDestructibleComponent>(TEXT("FrontDoorWindowRight"));
    this->RearVisionMirror = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RearVisionMirror"));
    this->AirBag = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AirBag"));
    this->AirBagEffects = CreateDefaultSubobject<UArrowComponent>(TEXT("AirBagEffects"));
    this->LeftSideMirror = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftSideMirror"));
    this->RightSideMirror = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightSideMirror"));
    this->FrontLeftTyre = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontLeftTyre"));
    this->FrontRightTyre = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontRightTyre"));
    this->RearLeftTyre = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RearLeftTyre"));
    this->RearRightTyre = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RearRightTyre"));
    this->LeftLightCollision = CreateDefaultSubobject<USphereComponent>(TEXT("LeftLightCollision"));
    this->RightLightCollision = CreateDefaultSubobject<USphereComponent>(TEXT("RightLightCollision"));
    this->LeftHeadLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("LeftHeadLight"));
    this->RightHeadLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("RightHeadLight"));
    this->AlarmAudio = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("AlarmAudio"));
}

