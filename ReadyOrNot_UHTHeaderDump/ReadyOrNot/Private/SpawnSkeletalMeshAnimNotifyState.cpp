#include "SpawnSkeletalMeshAnimNotifyState.h"

USpawnSkeletalMeshAnimNotifyState::USpawnSkeletalMeshAnimNotifyState() {
    this->SkeletalMeshToSpawn = NULL;
    this->PlayAnimation = NULL;
    this->bEnableWeaponFOVShader = false;
    this->bOnlyOwnerSee = false;
    this->bOwnerNoSee = false;
    this->bDestroyAtEnd = true;
    this->bSimulatePhysicsAtEnd = false;
    this->SkeletalMeshActor = NULL;
}

