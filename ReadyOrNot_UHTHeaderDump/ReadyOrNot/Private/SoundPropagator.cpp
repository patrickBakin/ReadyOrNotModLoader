#include "SoundPropagator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

class AActor;
class UPrimitiveComponent;

void ASoundPropagator::OnPropagationExitOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASoundPropagator::OnPropagationEnterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ASoundPropagator::ASoundPropagator() {
    this->bStopPropagationIfClosestToSound = false;
    this->PathTracerRefreshRate = 0.80f;
    this->NavCheckRefreshRate = 4.00f;
    this->bEnableDebugSpheres = false;
    this->bEnableDebugPathPoints = false;
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
    this->PropagationSwitchEnter = CreateDefaultSubobject<UBoxComponent>(TEXT("Propagation Switch Enter"));
    this->PropagationSwitchExit = CreateDefaultSubobject<UBoxComponent>(TEXT("Propagation Switch Exit"));
}

