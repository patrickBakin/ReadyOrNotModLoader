#include "CTF_Flag.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "ObjectiveMarkerComponent.h"

class AActor;
class UPrimitiveComponent;

void ACTF_Flag::ResetFlagTransforms() {
}

void ACTF_Flag::OnFlagBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FName ACTF_Flag::GetBoneToAttachName() const {
    return NAME_None;
}

ACTF_Flag::ACTF_Flag() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->FlagMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlagMeshComponent"));
    this->CaptureBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CaptureBoxComponent"));
    this->ObjectiveMarkerComponent = CreateDefaultSubobject<UObjectiveMarkerComponent>(TEXT("ObjectiveMarkerComponent"));
    this->BoneToAttach = TEXT("Flag_Socket");
}

