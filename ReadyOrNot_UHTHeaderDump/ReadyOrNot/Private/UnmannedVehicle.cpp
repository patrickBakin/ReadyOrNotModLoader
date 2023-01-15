#include "UnmannedVehicle.h"
#include "Net/UnrealNetwork.h"

class USceneComponent;
class AActor;
class AController;
class AReadyOrNotGameState;
class APlayerCharacter;
class AReadyOrNotPlayerController;
class USceneCaptureComponent2D;

float AUnmannedVehicle::TakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
    return 0.0f;
}

void AUnmannedVehicle::Server_StopPiloting_Implementation(AReadyOrNotPlayerController* CallingController) {
}
bool AUnmannedVehicle::Server_StopPiloting_Validate(AReadyOrNotPlayerController* CallingController) {
    return true;
}

void AUnmannedVehicle::Server_StartPiloting_Implementation(AReadyOrNotPlayerController* NewController) {
}
bool AUnmannedVehicle::Server_StartPiloting_Validate(AReadyOrNotPlayerController* NewController) {
    return true;
}


bool AUnmannedVehicle::IsAlive() {
    return false;
}

void AUnmannedVehicle::HideActorsForTabletView_Implementation(USceneCaptureComponent2D* Component) {
}

ETeamType AUnmannedVehicle::GetTabletViewTeamColor_Implementation() {
    return ETeamType::TT_NONE;
}

USceneComponent* AUnmannedVehicle::GetTabletViewComponent_Implementation() {
    return NULL;
}

FText AUnmannedVehicle::GetTabletNameText_Implementation() {
    return FText::GetEmpty();
}

APlayerCharacter* AUnmannedVehicle::GetPilot() {
    return NULL;
}

float AUnmannedVehicle::GetHealth() {
    return 0.0f;
}

void AUnmannedVehicle::Die(AController* EventInstigator, AActor* DamageCauser) {
}

bool AUnmannedVehicle::CanTabletViewMe_Implementation(APlayerCharacter* TabletOwner, AReadyOrNotGameState* GameState) {
    return false;
}

bool AUnmannedVehicle::CanControlWithTablet_Implementation(APlayerCharacter* TabletOwner) {
    return false;
}

void AUnmannedVehicle::AssumeTabletControl_Implementation(APlayerCharacter* TabletOwner) {
}

void AUnmannedVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUnmannedVehicle, Pilot);
}

AUnmannedVehicle::AUnmannedVehicle() {
    this->Pilot = NULL;
    this->Health = 0.00f;
    this->bDead = false;
    this->MaxHealth = 100.00f;
    this->PreviousHUD = NULL;
    this->VehicleHUD = NULL;
}

