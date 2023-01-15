#include "AttachedSkeletalMeshData.h"

FAttachedSkeletalMeshData::FAttachedSkeletalMeshData() {
    this->SkeletalMesh = NULL;
    this->bUseMasterPose = false;
    this->SkeletalMeshComponent = NULL;
}

