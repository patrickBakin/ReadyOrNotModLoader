#include "BloodData.h"

UBloodData::UBloodData() {
    this->SplatterMaxTraceDistance = 1000.00f;
    this->AnimatedDecalClass = NULL;
    this->AnimatedSplatterBones.AddDefaulted(6);
    this->AnimatedSplatterMaxDistance = 250.00f;
    this->AnimatedBloodTimescale = 0.25f;
    this->HeadshotDecalMesh = NULL;
    this->HeadshotSplatterBones.AddDefaulted(3);
    this->HeadshotMaxSplatterDistance = 375.00f;
    this->SkinnedDecalImageCount = 9;
    this->ArteryParticleCollisionChance = 0.10f;
    this->DismembermentParticleCollisionChance = 0.10f;
    this->BloodPoolClass = NULL;
    this->BloodPoolSpawnDelay = 3.00f;
    this->Gibs = NULL;
    this->BigSplatterTraceDistance = 100.00f;
    this->HitEvent = NULL;
    this->DeadHitEvent = NULL;
    this->GoreEvent = NULL;
    this->HeadshotEvent = NULL;
}

