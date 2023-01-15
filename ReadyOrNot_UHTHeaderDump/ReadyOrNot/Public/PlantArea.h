#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CanUseMultitoolOn.h"
#include "CanPlaceC2On.h"
#include "PlantArea.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class READYORNOT_API APlantArea : public AActor, public ICanPlaceC2On, public ICanUseMultitoolOn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OverlapArea;
    
    APlantArea();
    
    // Fix for true pure virtual functions not being implemented
};

