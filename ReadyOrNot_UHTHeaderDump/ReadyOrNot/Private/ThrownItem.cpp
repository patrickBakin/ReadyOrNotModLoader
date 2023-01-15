#include "ThrownItem.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionStimuliSourceComponent -FallbackName=AIPerceptionStimuliSourceComponent

class AActor;
class UPrimitiveComponent;

void AThrownItem::UpdateServerPath_Implementation(const TArray<FVector_NetQuantize>& Path, int32 Bounce1, int32 Bounce2, int32 Bounce3) {
}
bool AThrownItem::UpdateServerPath_Validate(const TArray<FVector_NetQuantize>& Path, int32 Bounce1, int32 Bounce2, int32 Bounce3) {
    return true;
}

void AThrownItem::OnRep_ThrowPath() {
}

void AThrownItem::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AThrownItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrownItem, CompletePath);
    DOREPLIFETIME(AThrownItem, BouncePt1);
    DOREPLIFETIME(AThrownItem, BouncePt2);
    DOREPLIFETIME(AThrownItem, BouncePt3);
}

AThrownItem::AThrownItem() {
    this->ThrowInstigator = NULL;
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->PerceptionStimuliComp = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PerceptionComp"));
    this->TurnPhysicsOffDelay = 2.00f;
    this->ThrowDistance = 1300.00f;
    this->BouncePt1 = 0;
    this->BouncePt2 = 0;
    this->BouncePt3 = 0;
    this->ThrowSpeed = 1500.00f;
    this->ThrowBounciness = 1.00f;
}

