#include "PremissionStreetView.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

APremissionStreetView::APremissionStreetView() {
    this->LeftBuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftBuilding"));
    this->RightBuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightBuilding"));
    this->LeftTrafficLight = CreateDefaultSubobject<UChildActorComponent>(TEXT("LeftTrafficLight"));
    this->RightTrafficLight = CreateDefaultSubobject<UChildActorComponent>(TEXT("RightTrafficLight"));
    this->Direction = CreateDefaultSubobject<UArrowComponent>(TEXT("Direction"));
    this->InterpConstantSpeed = 100.00f;
    this->TimeUntilReset = 5.00f;
}

