#include "Optiwand.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D

void AOptiwand::Server_NotifyMirroring_Implementation(bool bIsMirroring) {
}
bool AOptiwand::Server_NotifyMirroring_Validate(bool bIsMirroring) {
    return true;
}

bool AOptiwand::IsCameraBlocked() const {
    return false;
}

EOptiwandViewMode AOptiwand::GetViewMode() const {
    return EOptiwandViewMode::PiP;
}

void AOptiwand::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOptiwand, bRepMirroring);
}

AOptiwand::AOptiwand() {
    this->Montage_StartOptiwandADS = NULL;
    this->Montage_EndOptiwandADS = NULL;
    this->CollisionTraceDistance = 25.00f;
    this->FMODOptiwandMove = NULL;
    this->FMODOptiwandEnterView = NULL;
    this->FMODOptiwandExitView = NULL;
    this->SceneCapture2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture2D"));
    this->CameraActor = NULL;
    this->bMirorring = false;
    this->bRepMirroring = false;
    this->bInUse = false;
    this->LastUsedDoor = NULL;
    this->FMODOptiwandMoveAudioComp = NULL;
    this->FMODOptiwandEnterViewComp = NULL;
    this->FMODOptiwandExitViewComp = NULL;
}

