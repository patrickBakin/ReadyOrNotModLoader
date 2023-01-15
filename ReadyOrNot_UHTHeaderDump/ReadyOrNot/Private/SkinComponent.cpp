#include "SkinComponent.h"
#include "Templates/SubclassOf.h"

class USkinComponent;
class UTexture2D;

void USkinComponent::ResetSkin() {
}

bool USkinComponent::IsFactorySkin() {
    return false;
}

bool USkinComponent::HasDLCUnlocked() {
    return false;
}

UTexture2D* USkinComponent::GetClassDefaultIcon(TSubclassOf<USkinComponent> SkinComponent) {
    return NULL;
}

USkinComponent::USkinComponent() {
    this->bRequiresDLC = false;
    this->Dlc = EDLC::DLC_None;
    this->bResetsToFactorySkin = false;
    this->LockedToTeam = ETeamType::TT_NONE;
}

