#include "SpawnGenerator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

class APlayerStart;

void ASpawnGenerator::UpdatePlayerStartTags() {
}

void ASpawnGenerator::SelectAll() {
}

void ASpawnGenerator::RefreshSpawns() {
}

ETeamType ASpawnGenerator::GetSpawnTeam() const {
    return ETeamType::TT_NONE;
}

TArray<FVector> ASpawnGenerator::GetNodes() const {
    return TArray<FVector>();
}

TArray<APlayerStart*> ASpawnGenerator::GetAllPlayerStarts() const {
    return TArray<APlayerStart*>();
}

ASpawnGenerator::ASpawnGenerator() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
    this->BillboardComponent = NULL;
    this->SpawnTeam = ETeamType::TT_NONE;
    this->Rows = 5;
    this->Columns = 5;
    this->RowSpacing = 100.00f;
    this->ColumnSpacing = 100.00f;
    this->bShowNodes = false;
}

