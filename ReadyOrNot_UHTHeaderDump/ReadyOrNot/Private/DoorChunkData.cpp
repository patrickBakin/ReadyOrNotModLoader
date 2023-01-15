#include "DoorChunkData.h"

FDoorChunkData::FDoorChunkData() {
    this->Mesh = NULL;
    this->bIsHinge = false;
    this->bIsDoorHandleChunk = false;
    this->bCannotKickIfDestroyed = false;
}

