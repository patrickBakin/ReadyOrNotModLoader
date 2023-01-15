#include "OcclusionTestActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
#include "FMODAudioPropagationComponent.h"

AOcclusionTestActor::AOcclusionTestActor() {
    this->OcclusionMultiplier = 1.00f;
    this->FullOcclusionDepth = 150.00f;
    this->TickInterval = 1.00f;
    this->GunshotOrFootstep = true;
    this->GunshotSound = NULL;
    this->bIsOutside = false;
    this->FootstepSound = NULL;
    this->FoleySound = NULL;
    this->bHeavyArmor = false;
    this->bIsCrouching = false;
    this->FMODAudioPropagationComp = CreateDefaultSubobject<UFMODAudioPropagationComponent>(TEXT("FMODAudioPropagationComponent"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("UFMODAudioComponent"));
}

