#include "CuttableCableActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CableComponent -ObjectName=CableComponent -FallbackName=CableComponent

void ACuttableCableActor::Server_PullCable_Implementation() {
}
bool ACuttableCableActor::Server_PullCable_Validate() {
    return true;
}

void ACuttableCableActor::Server_CutCableAt_Implementation(FVector CutOrigin) {
}
bool ACuttableCableActor::Server_CutCableAt_Validate(FVector CutOrigin) {
    return true;
}





void ACuttableCableActor::Multicast_OnCablePulled_Implementation() {
}

void ACuttableCableActor::Multicast_OnCableCutAt_Implementation(FVector SplitOrigin) {
}

void ACuttableCableActor::GetCablePoints(TArray<FVector>& OutPoints) {
}

ACuttableCableActor::ACuttableCableActor() {
    this->bCableCut = false;
    this->CableSnapLength = 100.00f;
    this->bCablePullInsteadOfCutting = true;
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SubCable1 = CreateDefaultSubobject<UCableComponent>(TEXT("SubCable1"));
    this->SubCable2 = CreateDefaultSubobject<UCableComponent>(TEXT("SubCable2"));
    this->WholeCable = CreateDefaultSubobject<UCableComponent>(TEXT("WholeCable"));
}

