#include "TugOfWarMover.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

void ATugOfWarMover::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATugOfWarMover, bMoverForward);
    DOREPLIFETIME(ATugOfWarMover, bMoverMoving);
    DOREPLIFETIME(ATugOfWarMover, MoverCurrentPosition);
    DOREPLIFETIME(ATugOfWarMover, bContested);
}

ATugOfWarMover::ATugOfWarMover() {
    this->MoverPath = CreateDefaultSubobject<USplineComponent>(TEXT("MoverPath"));
    this->MoverMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mover"));
    this->MoverSpeed = 0.00f;
    this->bInvertVictoryPositions = false;
    this->bMoverForward = true;
    this->bMoverMoving = false;
    this->MoverStartingPosition = 0.50f;
    this->MoverCurrentPosition = 0.00f;
    this->bContested = false;
}

