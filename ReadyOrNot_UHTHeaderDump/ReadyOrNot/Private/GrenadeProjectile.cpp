#include "GrenadeProjectile.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialForceComponent -FallbackName=RadialForceComponent


void AGrenadeProjectile::OnDetonate() {
}

void AGrenadeProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGrenadeProjectile, ProjectileLocation);
}

AGrenadeProjectile::AGrenadeProjectile() {
    this->DetonationRadialForce = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForceComponent"));
    this->DetonationTime = 0.00f;
    this->DetonationBetweenTime = 0.00f;
    this->ElapsedTime = 0.00f;
    this->DetonationCount = 0;
    this->DetonationMax = 0;
    this->bIncreaseRadiusOverTime = false;
    this->DetonationSound = NULL;
    this->bPlayDetonationSoundOnce = false;
}

