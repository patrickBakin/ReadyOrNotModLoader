#include "DroneVehicle.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FloatingPawnMovement -FallbackName=FloatingPawnMovement
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

class AActor;
class UPrimitiveComponent;

void ADroneVehicle::UpdatePilotingInfo() {
}

void ADroneVehicle::Server_UpdateDroneTransform_Implementation(FTransform NewTransform) {
}
bool ADroneVehicle::Server_UpdateDroneTransform_Validate(FTransform NewTransform) {
    return true;
}

void ADroneVehicle::OnRep_DroneMovement() {
}

void ADroneVehicle::OnDroneHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ADroneVehicle::Drone_Yaw(float Val) {
}

void ADroneVehicle::Drone_ToggleThirdPerson() {
}

void ADroneVehicle::Drone_Throttle(float Val) {
}

void ADroneVehicle::Drone_Steady() {
}

void ADroneVehicle::Drone_Right(float Val) {
}

void ADroneVehicle::Drone_QuickTurn() {
}

void ADroneVehicle::Drone_MoveForward(float Val) {
}

void ADroneVehicle::Drone_Exit() {
}

void ADroneVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADroneVehicle, RPM);
    DOREPLIFETIME(ADroneVehicle, DroneTransform);
    DOREPLIFETIME(ADroneVehicle, bApplyingInput);
    DOREPLIFETIME(ADroneVehicle, bSteadyDrone);
}

ADroneVehicle::ADroneVehicle() {
    this->FlightBox = CreateDefaultSubobject<UBoxComponent>(TEXT("FlightBox"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DroneMesh"));
    this->Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
    this->FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    this->ThirdPersonSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("ThirdPersonArm"));
    this->ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
    this->FloatingMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
    this->MaxTilt = 0.00f;
    this->MaxRPM = 0.00f;
    this->IdleRPM = 0.00f;
    this->RPMForceScale = 0.00f;
    this->RPMThrottleMultiplier = 0.00f;
    this->ThrottleInterpSpeed = 12.00f;
    this->RotationInterpSpeed = 3.00f;
    this->TurnSpeed = 3.00f;
    this->RotationInterpSpeedWhenSteady = 10.00f;
    this->TurnSpeedWhenSteady = 10.00f;
    this->MinSpeed = 300.00f;
    this->MaxSpeed = 1200.00f;
    this->SpeedIncrementRate = 20.00f;
    this->InvincibilityTimeAfterDamageApplied = 1.00f;
    this->RPM = 0.00f;
    this->CurrentAltitude = 0.00f;
    this->CurrentPilotDistance = 0.00f;
    this->bApplyingInput = false;
    this->bSteadyDrone = false;
    this->DroneOwner = NULL;
    this->World = NULL;
}

