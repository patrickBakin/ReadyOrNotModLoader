#include "TrapActor.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CableComponent -ObjectName=CableComponent -FallbackName=CableComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InteractableComponent.h"
#include "ScoringComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionStimuliSourceComponent -FallbackName=AIPerceptionStimuliSourceComponent

class AReadyOrNotCharacter;
class UTrapSpawnComponent;

void ATrapActor::TrapInit_Implementation() {
}

void ATrapActor::TrapDeInit_Implementation() {
}

void ATrapActor::Server_OnTrapTriggered_Implementation(AReadyOrNotCharacter* TriggeredBy) {
}
bool ATrapActor::Server_OnTrapTriggered_Validate(AReadyOrNotCharacter* TriggeredBy) {
    return true;
}

void ATrapActor::Server_OnTrapDisarmed_Implementation() {
}
bool ATrapActor::Server_OnTrapDisarmed_Validate() {
    return true;
}

void ATrapActor::OnTrapTriggered_Implementation(AReadyOrNotCharacter* TriggeredBy) {
}

void ATrapActor::OnTrapDisarmed_Implementation(AReadyOrNotCharacter* DisarmedBy) {
}

void ATrapActor::OnTrapAttached_Implementation(UTrapSpawnComponent* SpawningComponent) {
}

void ATrapActor::Multicast_OnTrapTriggered_Implementation(AReadyOrNotCharacter* TriggeredBy) {
}

void ATrapActor::Multicast_OnTrapDisarmed_Implementation() {
}

void ATrapActor::EnableOutline(EActorOutlineType OutlineType) {
}

void ATrapActor::DisableOutline() {
}

void ATrapActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATrapActor, TrapStatus);
}

ATrapActor::ATrapActor() {
    this->TrapMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Trap Mesh Component"));
    this->TrapActivateAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Trap Activate Audio Component"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->ScoringComponent = CreateDefaultSubobject<UScoringComponent>(TEXT("Scoring Component"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Component"));
    this->CableMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cable Mesh Component"));
    this->CutCableComponent1 = CreateDefaultSubobject<UCableComponent>(TEXT("Cut Cable Component 1"));
    this->CutCableComponent2 = CreateDefaultSubobject<UCableComponent>(TEXT("Cut Cable Component 2"));
    this->TripWireTriggerComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Trip Wire Trigger Component"));
    this->PerceptionStimuliComp = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PerceptionComp"));
    this->TrapRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Trap Root"));
    this->AttachedActor = NULL;
    this->TrapName = TEXT("Trap");
    this->TrapType = ETrapType::Unknown;
    this->TrapStatus = ETrapState::TS_Disabled;
    this->bCanUseMultitoolWhenActivated = false;
    this->bInitializeTrapOnBeginPlay = true;
    this->CableMaterial = NULL;
}

