#include "TugOfWarZone.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

class AActor;
class UPrimitiveComponent;
class ACharacter;
class APlayerCharacter;
class APlayerState;

void ATugOfWarZone::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATugOfWarZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATugOfWarZone::OnInfluencerKilled(AActor* Causer, ACharacter* InstigatorCharacter, ACharacter* KilledCharacter, const FDamageEvent& DamageEvent, APlayerState* LastPlayerState) {
}

void ATugOfWarZone::OnInfluencerArrested(APlayerCharacter* ArrestedCharacter, APlayerCharacter* InstigatorCharacter) {
}

void ATugOfWarZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATugOfWarZone, bZoneDisabled);
}

ATugOfWarZone::ATugOfWarZone() {
    this->bZoneDisabled = false;
    this->Mover = NULL;
    this->Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
}

