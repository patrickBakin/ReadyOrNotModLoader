#include "QuadrotorPawn.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent

void AQuadrotorPawn::Server_UpdateDroneTransform_Implementation(FTransform NewTransform) {
}
bool AQuadrotorPawn::Server_UpdateDroneTransform_Validate(FTransform NewTransform) {
    return true;
}

void AQuadrotorPawn::OnRep_DroneMovement() {
}

void AQuadrotorPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AQuadrotorPawn, RPM);
    DOREPLIFETIME(AQuadrotorPawn, bApplyingInput);
    DOREPLIFETIME(AQuadrotorPawn, DroneTransform);
}

AQuadrotorPawn::AQuadrotorPawn() {
    this->FlightBox = CreateDefaultSubobject<UBoxComponent>(TEXT("FlightBox"));
    this->DroneMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DroneMesh"));
    this->FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    this->RPM = 0.00f;
    this->RPMThrottleMultiplier = 1.00f;
    this->bApplyingInput = false;
    this->MaxRPM = 0.00f;
    this->IdleRPM = 0.00f;
    this->RPMForceScale = 0.00f;
    this->MaximumTilt = 0.00f;
    this->MaxVelocity = 0.00f;
    this->bEngineOn = false;
}

