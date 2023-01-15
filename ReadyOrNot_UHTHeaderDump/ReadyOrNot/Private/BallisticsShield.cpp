#include "BallisticsShield.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UPrimitiveComponent;
class ABaseItem;

void ABallisticsShield::Server_SetLowered_Implementation(bool bShouldLower) {
}
bool ABallisticsShield::Server_SetLowered_Validate(bool bShouldLower) {
    return true;
}

void ABallisticsShield::OnTPShieldHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


void ABallisticsShield::DamageShieldGlass() {
}

void ABallisticsShield::Client_SetPistol_Implementation(ABaseItem* newPistol) {
}

void ABallisticsShield::Client_PlayShieldHitSound_Implementation() {
}

void ABallisticsShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABallisticsShield, PistolEquippedWithShield);
    DOREPLIFETIME(ABallisticsShield, bLowered);
}

ABallisticsShield::ABallisticsShield() {
    this->GlassMaterialInstance = NULL;
    this->PistolEquippedWithShield = NULL;
    this->ShieldHitEvent = NULL;
    this->ReloadAnim_1P = NULL;
    this->ReloadAnimEmpty_1P = NULL;
    this->ReloadAnim_3P = NULL;
    this->Damage = 0;
    this->bLowered = false;
    this->ShieldHitCameraShake = NULL;
}

