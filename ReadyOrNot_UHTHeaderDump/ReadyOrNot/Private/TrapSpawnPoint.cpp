#include "TrapSpawnPoint.h"
#include "TrapSpawnComponent.h"

void ATrapSpawnPoint::OnTrapSpawned_Implementation(UTrapSpawnComponent* TrapSpawnPoint) {
}

void ATrapSpawnPoint::FinishTrapSpawningFromRoster(UTrapSpawnComponent* Spawner) {
}

void ATrapSpawnPoint::CheckForTrapDespawning() {
}

ATrapSpawnPoint::ATrapSpawnPoint() {
    this->SpawnPoint = CreateDefaultSubobject<UTrapSpawnComponent>(TEXT("SpawnPoint"));
    this->bAlreadySpawned = false;
}

