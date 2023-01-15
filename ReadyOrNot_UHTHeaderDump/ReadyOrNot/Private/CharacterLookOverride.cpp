#include "CharacterLookOverride.h"

FCharacterLookOverride::FCharacterLookOverride() {
    this->LockedToDLC = EDLC::DLC_None;
    this->BodyIcon = NULL;
    this->HeadIcon = NULL;
    this->FPMeshOverride = NULL;
    this->FPBodyMeshOverride = NULL;
    this->FaceMeshOverride = NULL;
    this->BodyMeshOverride = NULL;
}

