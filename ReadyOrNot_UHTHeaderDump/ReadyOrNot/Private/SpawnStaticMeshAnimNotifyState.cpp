#include "SpawnStaticMeshAnimNotifyState.h"

USpawnStaticMeshAnimNotifyState::USpawnStaticMeshAnimNotifyState() {
    this->StaticMeshToSpawn = NULL;
    this->bCastShadow = true;
    this->bOnlyOwnerSee = false;
    this->bOwnerNoSee = false;
    this->bDestroyAtEnd = true;
    this->bSimulatePhysicsAtEnd = false;
}

