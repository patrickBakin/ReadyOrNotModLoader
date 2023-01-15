#include "VDWindDirectionalSourceActor.h"
#include "VDWindDirectionalSourceComponent.h"

AVDWindDirectionalSourceActor::AVDWindDirectionalSourceActor() {
    this->Component = CreateDefaultSubobject<UVDWindDirectionalSourceComponent>(TEXT("VDWindDirectionalSourceComponent0"));
}

