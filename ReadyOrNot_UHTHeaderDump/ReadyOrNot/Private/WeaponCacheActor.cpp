#include "WeaponCacheActor.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

class ABaseMagazineWeapon;

TSubclassOf<ABaseMagazineWeapon> AWeaponCacheActor::GetRandomAvailableWeapon() const {
    return NULL;
}

AWeaponCacheActor::AWeaponCacheActor() {
    this->DefaultScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
}

