#include "NotifyingRecastNavMesh.h"

void ANotifyingRecastNavMesh::GenerateCoverPoints() {
}

void ANotifyingRecastNavMesh::DeleteAllCoverPoints() {
}

ANotifyingRecastNavMesh::ANotifyingRecastNavMesh() {
    this->NumCoverPoints = 0;
    this->CoverGenTimeMs = 0.00f;
    this->MinDistanceBetweenCoverPoints = 45.00f;
    this->IgnoredPhysicalSurfacesForGeoTest.AddDefaulted(11);
    this->IgnoredPhysicalSurfacesForEdgeTests.AddDefaulted(12);
}

