#include "Headwear.h"
#include "Net/UnrealNetwork.h"

void AHeadwear::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHeadwear, Durability);
}

AHeadwear::AHeadwear() {
    this->Durability = 0.00f;
    this->DamageReduction = 1.00f;
    this->RicochetChance = 0.00f;
    this->RicochetEvent = NULL;
    this->bProtectsAgainstInstantKnockout = false;
    this->bUseMaskVoiceFilter = false;
    this->MaskOverlay = NULL;
    this->bEnablePostProcess = false;
    this->bOverrideBreathingSound = false;
    this->GapBetweenBreaths = 2.50f;
    this->bSpawnedOverlay = false;
    this->SpawnedMaskOverlay = NULL;
}

