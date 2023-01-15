#include "AnimNotifyState_SpawnLight.h"

UAnimNotifyState_SpawnLight::UAnimNotifyState_SpawnLight() {
    this->StartIntensity = 100.00f;
    this->MiddleIntensity = 100.00f;
    this->EndIntensity = 100.00f;
    this->InterpSpeed = 1.00f;
    this->PointLight = NULL;
    this->MaxDuration = 0.00f;
    this->CurrentDuration = 0.00f;
}

