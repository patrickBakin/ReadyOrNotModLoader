#include "WorldDataGenerator.h"

void AWorldDataGenerator::VerifyWorldBuildingActivities() {
}

void AWorldDataGenerator::UnblockAllDoorways() {
}

void AWorldDataGenerator::SortAndTrimMaxVisibleThreats() {
}

void AWorldDataGenerator::SetSpawnerSavedData(FSpawnerSavedData InSpawnerSavedData) {
}

void AWorldDataGenerator::SaveCullDistanceSettings() {
}

void AWorldDataGenerator::SaveAllScenarios() {
}

void AWorldDataGenerator::ReportAllUnreachableSpawnsAndCoverToLog() {
}

void AWorldDataGenerator::ReplaceAllDoors() {
}

void AWorldDataGenerator::RemoveAllUnreachableThreats() {
}

void AWorldDataGenerator::RemoveAllUnreachableStacks() {
}

void AWorldDataGenerator::RemoveAllUnreachableSpawns() {
}

void AWorldDataGenerator::RemoveAllUnreachableCover() {
}

void AWorldDataGenerator::RemoveAllStackups() {
}

void AWorldDataGenerator::RemoveAllOverlappingThreats() {
}

void AWorldDataGenerator::PushThreatsAwayFromWalls() {
}

void AWorldDataGenerator::PlacePatrolPointsOnAllThreats() {
}

void AWorldDataGenerator::PlacePatrolPointsOnAllDoors() {
}

void AWorldDataGenerator::NextBrokenDoor() {
}

void AWorldDataGenerator::MultiplyAllCullDistances() {
}

void AWorldDataGenerator::LoadCullDistanceSettings() {
}

void AWorldDataGenerator::LinkSubdoors() {
}

void AWorldDataGenerator::GetSpawnerSavedData(FSpawnerSavedData& OutSpawnerSavedData) {
}

void AWorldDataGenerator::GenerateWorldThreatAwarenessActors() {
}

void AWorldDataGenerator::GenerateWorld() {
}

void AWorldDataGenerator::GenerateWebbedBreachPoints() {
}

void AWorldDataGenerator::GenerateSwatLookAtPointsForEachThreat() {
}

void AWorldDataGenerator::GenerateStackUpPoints() {
}

void AWorldDataGenerator::GenerateSpawnHidingSpots() {
}

void AWorldDataGenerator::GenerateInstancedStaticMesh() {
}

void AWorldDataGenerator::GenerateCullDistances() {
}

void AWorldDataGenerator::GenerateAllDoorThreatAwarenessActors() {
}

void AWorldDataGenerator::GenerateAllDoorClearPoints() {
}

void AWorldDataGenerator::FixCachedCullDistance() {
}

void AWorldDataGenerator::DetermineAutomaticTrapOrientation() {
}

void AWorldDataGenerator::DestroyAllThreats() {
}

void AWorldDataGenerator::DestroyAllPatrolPoints() {
}

void AWorldDataGenerator::CleanUpOverlappingThreats() {
}

void AWorldDataGenerator::CapMaxCullDistanceByBoundsMultiplier() {
}

void AWorldDataGenerator::CalculateAllExits() {
}

void AWorldDataGenerator::BlockAllDoorways() {
}

AWorldDataGenerator::AWorldDataGenerator() {
    this->DoorClass = NULL;
    this->bDoorwaysBlocked = false;
    this->MaxRedBlueClearDistanceApart = 3000.00f;
    this->CullDistanceMultiplier = 1.00f;
    this->CullDistanceMaxBoundsMultiplier = 250.00f;
    this->bHasWorldEverBeenGenerated = false;
    this->WorldGenSave = NULL;
    this->CurrentBrokenDoor = NULL;
}

