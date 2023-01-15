#include "AISpawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

class ACyberneticCharacter;

void AAISpawn::TransferSpawnDataToRosterSpawnData() {
}

bool AAISpawn::GetSuspectSpawnData(TArray<FSpawnData>& OutSpawnData) const {
    return false;
}

ETeamType AAISpawn::GetSpawningTeamType(FSpawnData Sd) const {
    return ETeamType::TT_NONE;
}

ACyberneticCharacter* AAISpawn::GetSpawnedCharacterDeffered() const {
    return NULL;
}

ETeamType AAISpawn::GetDefaultSpawningTeamType() const {
    return ETeamType::TT_NONE;
}

bool AAISpawn::GetCivilianSpawnData(TArray<FSpawnData>& OutSpawnData) const {
    return false;
}

bool AAISpawn::DoSpawn() {
    return false;
}

AAISpawn::AAISpawn() {
    this->SpawnChance = 1.00f;
    this->bIsExplosiveVestSpawn = true;
    this->bIsRoamerSpawn = false;
    this->DefaultScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
    this->SpawnDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnDirection"));
    this->SpawnedCharacterDeffered = NULL;
}

