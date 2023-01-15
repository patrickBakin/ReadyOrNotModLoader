#include "PickupMagazineActor.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UPrimitiveComponent;
class ABaseMagazineWeapon;
class APlayerCharacter;

void APickupMagazineActor::Server_Pickup_Implementation(AActor* InPickupInstigator) {
}
bool APickupMagazineActor::Server_Pickup_Validate(AActor* InPickupInstigator) {
    return true;
}

void APickupMagazineActor::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void APickupMagazineActor::Multicast_SetWeapon_Implementation(ABaseMagazineWeapon* Weapon) {
}

ABaseMagazineWeapon* APickupMagazineActor::GetValidWeaponForPickerUpper(APlayerCharacter* PlayerCharacter) {
    return NULL;
}

void APickupMagazineActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APickupMagazineActor, MagazineLabel);
    DOREPLIFETIME(APickupMagazineActor, MagazineData);
    DOREPLIFETIME(APickupMagazineActor, CameFromWeapon);
}

APickupMagazineActor::APickupMagazineActor() {
    this->MinimumHitThreshold = 50.00f;
    this->DroppedMagazineHitEvent = NULL;
    this->CameFromWeapon = NULL;
}

