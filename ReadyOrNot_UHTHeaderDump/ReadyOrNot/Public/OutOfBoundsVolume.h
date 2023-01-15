#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OutOfBoundsVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class READYORNOT_API AOutOfBoundsVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Bounds;
    
    AOutOfBoundsVolume();
};

