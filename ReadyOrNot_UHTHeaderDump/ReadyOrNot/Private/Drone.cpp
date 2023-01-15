#include "Drone.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FloatingPawnMovement -FallbackName=FloatingPawnMovement
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

class AActor;
class UPrimitiveComponent;
class AReadyOrNotPlayerController;

void ADrone::UpdatePilotingInfo() {
}

void ADrone::ToggleThirdPerson() {
}

void ADrone::Tick_CameraReset() {
}

void ADrone::Tick_CameraDamage() {
}

void ADrone::SteadyDrone() {
}

void ADrone::Server_UpdateDrone_Implementation(FTransform NewTransform, float InRPM) {
}
bool ADrone::Server_UpdateDrone_Validate(FTransform NewTransform, float InRPM) {
    return true;
}

void ADrone::RetrieveLastHitDamageInfo(EDroneDamageSpeed& InDroneDamageSpeed, float& InDamageAmount) const {
}

void ADrone::QuickTurn() {
}

void ADrone::OnDroneHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ADrone::OnDetectionSphereOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ADrone::IsStabilized() const {
    return false;
}

bool ADrone::IsSpeedThresholdMet(float InSpeedAsPercentage) {
    return false;
}

bool ADrone::IsMovingRight() const {
    return false;
}

bool ADrone::IsMovingLeft() const {
    return false;
}

bool ADrone::IsMovingForward() const {
    return false;
}

bool ADrone::IsMovingBackward() const {
    return false;
}

bool ADrone::IsMoving() const {
    return false;
}

bool ADrone::IsInvincible() const {
    return false;
}

bool ADrone::IsInThirdPersonMode() const {
    return false;
}

bool ADrone::IsApplyingInput() const {
    return false;
}

void ADrone::IncrementSpeed(float Value) {
}

bool ADrone::HasPilot() const {
    return false;
}

float ADrone::GetMinSpeed() const {
    return 0.0f;
}

float ADrone::GetMaxSpeed() const {
    return 0.0f;
}

float ADrone::GetMaxRPM() const {
    return 0.0f;
}

float ADrone::GetIdleRPM() const {
    return 0.0f;
}

AReadyOrNotPlayerController* ADrone::GetDroneController() const {
    return NULL;
}

float ADrone::GetDistanceToPilot() const {
    return 0.0f;
}

float ADrone::GetCurrentSpeedAsPercentage() const {
    return 0.0f;
}

float ADrone::GetCurrentRPM() const {
    return 0.0f;
}

FVector ADrone::GetCurrentMovementDirection() const {
    return FVector{};
}

float ADrone::GetAltitude() const {
    return 0.0f;
}

void ADrone::Finished_CameraDamage() {
}

void ADrone::ExitDrone() {
}

void ADrone::Client_UpdateDrone_Implementation(FTransform NewTransform, float InRPM) {
}
bool ADrone::Client_UpdateDrone_Validate(FTransform NewTransform, float InRPM) {
    return true;
}

void ADrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADrone, RotorRotation);
    DOREPLIFETIME(ADrone, RPM);
    DOREPLIFETIME(ADrone, DroneTransform);
    DOREPLIFETIME(ADrone, TargetRotation);
    DOREPLIFETIME(ADrone, TargetSteadyCameraRotation);
    DOREPLIFETIME(ADrone, bApplyingInput);
    DOREPLIFETIME(ADrone, bSteadyDrone);
    DOREPLIFETIME(ADrone, OriginalController);
}

ADrone::ADrone() {
    this->DroneWidgetClass = NULL;
    this->FPCameraRotationResetSpeed = 1.00f;
    this->FPDamageSpeed = 1.00f;
    this->MaxPitchTilt = 30.00f;
    this->MaxRollTilt = 30.00f;
    this->MaxRPM = 2000.00f;
    this->IdleRPM = 800.00f;
    this->RPMThrottleMultiplier = 100.00f;
    this->ThrottleInterpSpeed = 20.00f;
    this->RotationInterpSpeed = 5.00f;
    this->TurnSpeed = 5.00f;
    this->RotationInterpSpeedWhenSteady = 5.00f;
    this->TurnSpeedWhenSteady = 3.00f;
    this->MinSpeed = 300.00f;
    this->MaxSpeed = 1200.00f;
    this->SpeedIncrementRate = 20.00f;
    this->InvincibilityTimeAfterDamageApplied = 1.00f;
    this->RPM = 0.00f;
    this->CurrentAltitude = 0.00f;
    this->CurrentPilotDistance = 0.00f;
    this->bApplyingInput = false;
    this->bSteadyDrone = false;
    this->bDroneThirdPerson = false;
    this->World = NULL;
    this->DroneController = NULL;
    this->OriginalController = NULL;
    this->FlightBox = CreateDefaultSubobject<UBoxComponent>(TEXT("FlightBox"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DroneMesh"));
    this->DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));
    this->FloatingMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
    this->TPCameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("ThirdPersonCameraArm"));
    this->TPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
    this->Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
    this->FPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    this->DroneWidgetHUD = NULL;
}

