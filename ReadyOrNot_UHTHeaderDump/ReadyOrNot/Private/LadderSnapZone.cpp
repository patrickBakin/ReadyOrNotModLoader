#include "LadderSnapZone.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

class AActor;
class UPrimitiveComponent;

void ALadderSnapZone::OnCollisionOverlapEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ALadderSnapZone::OnCollisionOverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ALadderSnapZone::Multicast_StopShowingGhostMesh_Implementation() {
}
bool ALadderSnapZone::Multicast_StopShowingGhostMesh_Validate() {
    return true;
}

void ALadderSnapZone::Multicast_StartShowingGhostMesh_Implementation(bool bAbleToPlace) {
}
bool ALadderSnapZone::Multicast_StartShowingGhostMesh_Validate(bool bAbleToPlace) {
    return true;
}

void ALadderSnapZone::EnableCollision() {
}

void ALadderSnapZone::DisableCollision() {
}

void ALadderSnapZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALadderSnapZone, AttachedLadder);
}

ALadderSnapZone::ALadderSnapZone() {
    this->SelectionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("SelectionZone"));
    this->GhostLadder = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GhostLadder"));
    this->Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->ValidPlacementMaterial = NULL;
    this->InvalidPlacementMaterial = NULL;
    this->MaxRetractedRungCount = 0.00f;
    this->bHorizontal = false;
    this->AttachedLadder = NULL;
    this->bUnableToPlace = false;
    this->NumberOverlappers = 0;
}

