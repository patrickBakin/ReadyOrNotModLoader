#include "VDSimulation.h"

class UPrimitiveComponent;
class UBaseVDComponent;
class UVDSimulatedParticle;
class UVDSimulatedObject;

void UVDSimulation::SetSubstepCount(int32 SubstepCount) {
}

void UVDSimulation::SetSelfCollisionEnabled(bool IsEnabled) {
}

void UVDSimulation::SetPhysXSceneCollisionEnabled(bool IsEnabled) {
}

void UVDSimulation::SetPerFrameCollisionCacheEnable(bool IsEnabled) {
}

void UVDSimulation::SetPerformExtraCollisionResolutionLoop(bool IsEnabled) {
}

void UVDSimulation::SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled) {
}

void UVDSimulation::SetFrameRate(int32 FrameRate) {
}

void UVDSimulation::SetConstraintIterationCount(int32 ConstraintIterationCount) {
}

void UVDSimulation::SetConstrainSimulationTo2DPlane(bool IsEnabled) {
}

void UVDSimulation::SetConstrainPlaneOrigin(FVector Origin) {
}

void UVDSimulation::SetConstrainPlaneNormal(FVector Normal) {
}

void UVDSimulation::RemoveExplicitColliderMapping(UBaseVDComponent* VDComponent, UPrimitiveComponent* Collider) {
}

void UVDSimulation::RemoveAllExplicitColliderMappings(UBaseVDComponent* VDComponent) {
}

bool UVDSimulation::k2QuerySphereOverlaps(FVector Location, float Radius, TArray<UVDSimulatedParticle*>& Overlaps, const TArray<UVDSimulatedObject*>& SimObjectsToIgnore, int32 MaxOverlaps) {
    return false;
}

bool UVDSimulation::k2QueryBoxOverlaps(FVector Location, FVector HalfExtents, TArray<UVDSimulatedParticle*>& Overlaps, const TArray<UVDSimulatedObject*>& SimObjectsToIgnore, int32 MaxOverlaps) {
    return false;
}

FVDSettings UVDSimulation::GetSettings() {
    return FVDSettings{};
}

bool UVDSimulation::GetIsRunningOnWorkerThread() const {
    return false;
}

bool UVDSimulation::GetIsExplicitRigidBodyCollisionEnabled() const {
    return false;
}

void UVDSimulation::GetDirectionalWindParameters(UBaseVDComponent* VDComponent, FVector& OutDirection, float& OutSpeed, float& OutGust) const {
}

void UVDSimulation::AddExplicitColliderMapping(UBaseVDComponent* VDComponent, UPrimitiveComponent* Collider, bool IgnoreConvexShapes) {
}

UVDSimulation::UVDSimulation() {
}

