#include "ThrownEvidenceActor.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

class AActor;
class UPrimitiveComponent;

void AThrownEvidenceActor::OnBoxHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AThrownEvidenceActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrownEvidenceActor, Rep_Location);
    DOREPLIFETIME(AThrownEvidenceActor, Rep_Rotation);
}

AThrownEvidenceActor::AThrownEvidenceActor() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCoponent0"));
    this->OwningItem = NULL;
}

