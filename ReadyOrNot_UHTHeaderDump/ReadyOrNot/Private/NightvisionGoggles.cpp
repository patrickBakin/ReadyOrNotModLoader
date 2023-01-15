#include "NightvisionGoggles.h"
#include "Net/UnrealNetwork.h"

void ANightvisionGoggles::SpawnNightvisionWidget() {
}

void ANightvisionGoggles::Server_SetTogglingNVG_Implementation(bool bNewTogglingNVG) {
}
bool ANightvisionGoggles::Server_SetTogglingNVG_Validate(bool bNewTogglingNVG) {
    return true;
}



void ANightvisionGoggles::DestroyNightvisionWidget() {
}

void ANightvisionGoggles::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ANightvisionGoggles, bNVGOn);
    DOREPLIFETIME(ANightvisionGoggles, bTogglingNVG);
}

ANightvisionGoggles::ANightvisionGoggles() {
    this->SpawnedWidget = NULL;
    this->GlobalMaterialParameters = NULL;
    this->NVGGlobalParameterName = TEXT("NightvisionEnabled");
    this->NightVisionFirstPersonWidget = NULL;
    this->bNVGOn = false;
    this->bTogglingNVG = false;
}

