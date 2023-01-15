#include "ReadyOrNotFaceAnimInstance.h"

class UPoseAsset;

UPoseAsset* UReadyOrNotFaceAnimInstance::GetFaceROM() const {
    return NULL;
}

UReadyOrNotFaceAnimInstance::UReadyOrNotFaceAnimInstance() {
    this->BodyDriverMesh = NULL;
    this->DefaultFaceROMData = NULL;
}

