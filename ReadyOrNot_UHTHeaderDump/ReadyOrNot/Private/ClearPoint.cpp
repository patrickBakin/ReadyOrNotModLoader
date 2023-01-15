#include "ClearPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

AClearPoint::AClearPoint() {
    this->SpriteComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
}

