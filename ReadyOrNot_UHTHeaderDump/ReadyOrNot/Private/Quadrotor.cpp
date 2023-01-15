#include "Quadrotor.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D

void AQuadrotor::Server_SpawnDrone_Implementation() {
}
bool AQuadrotor::Server_SpawnDrone_Validate() {
    return true;
}

void AQuadrotor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AQuadrotor, SpawnedDrone);
}

AQuadrotor::AQuadrotor() {
    this->ViewfinderMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Viewfinder"));
    this->SceneCapture2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture2D"));
    this->RenderTarget = NULL;
    this->bToggleDroneControl = false;
    this->DefaultViewfinderMaterial = NULL;
    this->ViewfinderScreenMaterial = NULL;
    this->ThrowDrone_1P = NULL;
    this->ThrowDrone_3P = NULL;
    this->DronePawnClass = NULL;
    this->SpawnedDrone = NULL;
}

