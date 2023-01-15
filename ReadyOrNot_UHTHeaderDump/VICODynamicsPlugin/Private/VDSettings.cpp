#include "VDSettings.h"

FVDSettings::FVDSettings() {
    this->bOverride_ReserveParticleBudget = false;
    this->bOverride_NumberOfThreadsToUse = false;
    this->bOverride_EnableSelfCollision = false;
    this->bOverride_EnablePhysXSceneCollision = false;
    this->bOverride_PerformExtraCollisionResolutionLoop = false;
    this->bOverride_EnableExplicitRigidBodyCollision = false;
    this->bOverride_SimulationFramerate = false;
    this->bOverride_RunSimulationOnWorkerThread = false;
    this->bOverride_WorkerThreadCoreAffinity = false;
    this->bOverride_SimulationIterations = false;
    this->bOverride_ConstraintIterations = false;
    this->bOverride_ConstrainSimulationTo2DPlane = false;
    this->bOverride_PlaneOrigin = false;
    this->bOverride_PlaneNormal = false;
    this->bOverride_CachePerFrameResults = false;
    this->bOverride_CacheOnlyCollisionsWithStaticRigidBodies = false;
    this->bOverride_CacheNonHitsAlso = false;
    this->ReserveParticleBudget = 0;
    this->NumberOfThreadsToUse = 0;
    this->EnableSelfCollision = false;
    this->EnablePhysXSceneCollision = false;
    this->PerformExtraCollisionResolutionLoop = false;
    this->EnableExplicitRigidBodyCollision = false;
    this->SimulationFramerate = 0;
    this->RunSimulationOnWorkerThread = false;
    this->WorkerThreadCoreAffinity = 0;
    this->SimulationIterations = 0;
    this->ConstraintIterations = 0;
    this->ConstrainSimulationTo2DPlane = false;
    this->bCachePerFrameResults = false;
    this->bCacheOnlyCollisionsWithStaticRigidBodies = false;
    this->bCacheNonHitsAlso = false;
    this->DrawCollisionDebug = false;
    this->bShowOnScreenStats = false;
}

