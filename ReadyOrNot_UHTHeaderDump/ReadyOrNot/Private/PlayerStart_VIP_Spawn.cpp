#include "PlayerStart_VIP_Spawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

FText APlayerStart_VIP_Spawn::GetVIPSpawnDescriptor() const {
    return FText::GetEmpty();
}

FRotator APlayerStart_VIP_Spawn::GetSpawnDirection() {
    return FRotator{};
}

FVector APlayerStart_VIP_Spawn::GetRandomSpawnPoint() {
    return FVector{};
}

APlayerStart_VIP_Spawn::APlayerStart_VIP_Spawn() : APlayerStart(FObjectInitializer::Get()) {
    this->bHasVisited = false;
    this->SuffixNumber = 1;
    this->SpawnBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Spawn Box"));
    this->TextRender = NULL;
    this->SpawnDirection = NULL;
}

