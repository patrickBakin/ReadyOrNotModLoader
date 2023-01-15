#include "PickupActor.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InteractableComponent.h"
#include "ObjectiveMarkerComponent.h"

class AActor;
class APlayerCharacter;

void APickupActor::ToggleObjectiveMarker() {
}

void APickupActor::ShowObjectiveMarker() {
}

void APickupActor::HideObjectiveMarker() {
}

AActor* APickupActor::GetPickupInstigator() const {
    return NULL;
}

void APickupActor::EnableOutline(EActorOutlineType OutlineType) {
}

void APickupActor::DisableOutline() {
}

bool APickupActor::CanPickUpNow(APlayerCharacter* PickerUpper) {
    return false;
}

void APickupActor::ActorPickedUp(AActor* InPickupInstigator) {
}

void APickupActor::ActorDropped(AActor* InDroppedInstigator) {
}

void APickupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APickupActor, PickupInstigator);
}

APickupActor::APickupActor() {
    this->PickupName = TEXT("Actor");
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PickupSkeletalMesh"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupStaticMesh"));
    this->ObjectiveMarkerComponent = CreateDefaultSubobject<UObjectiveMarkerComponent>(TEXT("Objective Marker Component"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->PickupInstigator = NULL;
}

