#include "FMODAmbientSound.h"
#include "FMODAudioComponent.h"

AFMODAmbientSound::AFMODAmbientSound() {
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FMODAudioComponent0"));
}

