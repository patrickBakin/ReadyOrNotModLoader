#include "EvidenceExtractionDevice.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InteractableComponent.h"

class APlayerCharacter;

void AEvidenceExtractionDevice::TryExtractEvidence_Implementation(APlayerCharacter* EvidencePossessor) {
}

bool AEvidenceExtractionDevice::IsExtracting() const {
    return false;
}

bool AEvidenceExtractionDevice::HasEvidenceToExtract() const {
    return false;
}

bool AEvidenceExtractionDevice::CanStartExtraction() const {
    return false;
}

bool AEvidenceExtractionDevice::CanCollectEvidence() const {
    return false;
}

AEvidenceExtractionDevice::AEvidenceExtractionDevice() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->EvidenceExtractionTime = 30.00f;
}

