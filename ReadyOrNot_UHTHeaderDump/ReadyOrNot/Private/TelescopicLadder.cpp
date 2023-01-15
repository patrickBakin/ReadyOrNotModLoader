#include "TelescopicLadder.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

class ALadderSnapZone;

void ATelescopicLadder::Server_RemoveLadder_Implementation() {
}
bool ATelescopicLadder::Server_RemoveLadder_Validate() {
    return true;
}

void ATelescopicLadder::Server_PlaceLadder_Implementation() {
}
bool ATelescopicLadder::Server_PlaceLadder_Validate() {
    return true;
}

void ATelescopicLadder::Server_DeployLadderAtZone_Implementation(ALadderSnapZone* NewSnapZone) {
}
bool ATelescopicLadder::Server_DeployLadderAtZone_Validate(ALadderSnapZone* NewSnapZone) {
    return true;
}

void ATelescopicLadder::OnRep_Deployed() {
}

void ATelescopicLadder::OnRep_CurrentSnapZone() {
}

void ATelescopicLadder::Multicast_PlaceLadder_Implementation() {
}

void ATelescopicLadder::Multicast_DeployLadderAtZone_Implementation(ALadderSnapZone* NewSnapZone) {
}

void ATelescopicLadder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATelescopicLadder, FreezeTransform);
    DOREPLIFETIME(ATelescopicLadder, LastTransform);
    DOREPLIFETIME(ATelescopicLadder, bDeployed);
    DOREPLIFETIME(ATelescopicLadder, bDeployedHorizontal);
    DOREPLIFETIME(ATelescopicLadder, bMounted);
    DOREPLIFETIME(ATelescopicLadder, RetractedRungCount);
    DOREPLIFETIME(ATelescopicLadder, CurrentSnapZone);
}

ATelescopicLadder::ATelescopicLadder() {
    this->LadderVerticalIconPoint = CreateDefaultSubobject<USceneComponent>(TEXT("VerticalIconPoint"));
    this->LadderHorizontalIconPoint = CreateDefaultSubobject<USceneComponent>(TEXT("HorizontalIconPoint"));
    this->LadderBottomMountPoint = CreateDefaultSubobject<USceneComponent>(TEXT("LadderBottomMountPoint"));
    this->LadderTopMountPoint = CreateDefaultSubobject<USceneComponent>(TEXT("LadderTopMountPoint"));
    this->LadderSnapZoneBP = NULL;
    this->bFreezeFrame = false;
    this->MaxRollDegreesBeforeUnwalkable = 30.00f;
    this->bShowGhostLadder = true;
    this->bShowCollapsedLadder = true;
    this->CollapsedLadderAnim = NULL;
    this->GhostLadderActor = NULL;
    this->GhostLadderMaterial = NULL;
    this->DroppedPhysics = NULL;
    this->PlacedPhysics = NULL;
    this->PlacementSoundEvent = NULL;
    this->PickupSoundEvent = NULL;
    this->CollideSoundEvent = NULL;
    this->bDeployed = false;
    this->bDeployedHorizontal = false;
    this->bMounted = false;
    this->RetractedRungCount = 0.00f;
    this->CurrentSnapZone = NULL;
    this->bWallFound = false;
}

