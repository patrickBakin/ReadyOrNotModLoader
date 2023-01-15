#include "WallHoleTraversal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

class AController;

void AWallHoleTraversal::TestForMeshes() {
}

bool AWallHoleTraversal::IsCooldownActiveFor(const AController* InController) const {
    return false;
}

void AWallHoleTraversal::AddCooldownFor(AController* InController, float InCooldownTime) {
}

AWallHoleTraversal::AWallHoleTraversal() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
    this->bEnabled = true;
    this->Name = TEXT("None");
    this->CooldownAfterUse = 5.00f;
    this->NavLinkProxyDistance = 50.00f;
    this->EntryAnim = NULL;
    this->LoopAnim = NULL;
    this->ExitAnim = NULL;
    this->OccupiedByController = NULL;
    this->NavLinkProxy = NULL;
}

