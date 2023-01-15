#include "ItemVisualizationComponent.h"

UItemVisualizationComponent::UItemVisualizationComponent() {
    this->ItemVisualizationStatus = EItemVisualizationStatus::IVS_None;
    this->VisualizationType = EItemVisualizationType::IVT_None;
    this->BasedOfItem = NULL;
    this->MagazineComp = NULL;
    this->ScopeAttachment = NULL;
    this->MuzzleAttachment = NULL;
    this->UnderbarrelAttachment = NULL;
    this->OverbarrelAttachment = NULL;
}

