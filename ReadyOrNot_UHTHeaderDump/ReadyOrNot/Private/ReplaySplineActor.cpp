#include "ReplaySplineActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

AReplaySplineActor::AReplaySplineActor() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Component"));
}

