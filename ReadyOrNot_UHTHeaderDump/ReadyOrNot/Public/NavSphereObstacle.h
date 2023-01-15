#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NavSphereObstacle.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class READYORNOT_API ANavSphereObstacle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* NavObstacleSphereComponent;
    
    ANavSphereObstacle();
};

