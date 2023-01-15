#include "CharacterCustomizationPortal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
#include "InteractableComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

void ACharacterCustomizationPortal::UpdateCharacterLookOverride(FName Head, FName Body) {
}

bool ACharacterCustomizationPortal::SaveCharacterLookOverride(FName InHead, FName InBody) {
    return false;
}

bool ACharacterCustomizationPortal::IsDLCLocked(FCharacterPersonalizationData Data) {
    return false;
}

void ACharacterCustomizationPortal::GetCustomizationEntries(TArray<FCharacterPersonalizationData>& OutHeads, TArray<FCharacterPersonalizationData>& OutBodys) {
}

bool ACharacterCustomizationPortal::GetCurrentCharacterLookOverride(FName& OutHead, FName& OutBody) {
    return false;
}

bool ACharacterCustomizationPortal::GetCharacterLookOverride(FName Head, FName Body, FCharacterLookOverride& OutCharacterLookOverride) {
    return false;
}

void ACharacterCustomizationPortal::GetAllCompatibleHeads(FName InBody, TArray<FName>& OutHeads) {
}

void ACharacterCustomizationPortal::GetAllCompatibleBodies(FName InHead, TArray<FName>& OutBodies) {
}

ACharacterCustomizationPortal::ACharacterCustomizationPortal() {
    this->CustomizationCharacter = NULL;
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
    this->CharacterSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("CharacterSpawnPoint"));
    this->bHasLocked = false;
}

