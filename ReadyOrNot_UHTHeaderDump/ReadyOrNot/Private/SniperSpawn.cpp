#include "SniperSpawn.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

class ASniperCharacter;

void ASniperSpawn::SpawnSpotterHere(int32 Designation) {
}

void ASniperSpawn::SpawnSniperHere(int32 Designation) {
}

void ASniperSpawn::SpawnPersonnelOfClass(TSubclassOf<ASniperCharacter> CharacterClass, int32 Designation) {
}

void ASniperSpawn::SpawnMarksmanHere(int32 Designation) {
}

ASniperSpawn::ASniperSpawn() {
    this->bMovementLocked = false;
    this->bStartInADS = false;
    this->bLockADS = false;
    this->SniperClass = NULL;
    this->SpotterClass = NULL;
    this->MarksmanClass = NULL;
    this->SpawnDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnDirection"));
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->bHasSniperSpawned = false;
    this->SpawnedSniper = NULL;
}

