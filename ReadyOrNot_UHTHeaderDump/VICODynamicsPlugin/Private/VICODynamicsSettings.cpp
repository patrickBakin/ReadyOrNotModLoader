#include "VICODynamicsSettings.h"

UVICODynamicsSettings::UVICODynamicsSettings() {
    this->ReserveParticleBudget = 16384;
    this->NumberOfThreadsToUse = 4;
    this->EnableSelfCollision = true;
    this->EnablePhysXSceneCollision = true;
    this->PerformExtraCollisionResolutionLoop = false;
    this->EnableExplicitRigidBodyCollision = false;
    this->SimulationFramerate = 60;
    this->RunSimulationOnWorkerThread = true;
    this->WorkerThreadCoreAffinity = 1;
    this->SimulationIterations = 3;
    this->ConstraintIterations = 8;
    this->ConstrainSimulationTo2DPlane = false;
    this->bCachePerFrameResults = true;
    this->bCacheOnlyCollisionsWithStaticRigidBodies = false;
    this->bCacheNonHitsAlso = true;
    this->DrawCollisionDebug = true;
    this->bShowOnScreenStats = true;
}

