#include "NavSphereObstacle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ANavSphereObstacle::ANavSphereObstacle() {
    this->NavObstacleSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Nav Obstacle Sphere Component"));
}

