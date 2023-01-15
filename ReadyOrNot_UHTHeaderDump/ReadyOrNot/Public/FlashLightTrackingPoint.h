#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ReceiveAISenseUpdates.h"
#include "FlashLightTrackingPoint.generated.h"

class ACyberneticController;
class UStaticMeshComponent;
class UAIPerceptionStimuliSourceComponent;

UCLASS(Blueprintable)
class READYORNOT_API AFlashLightTrackingPoint : public AActor, public IReceiveAISenseUpdates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPrimary: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* PerceptionStimuliComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticController*> SensedByControllers;
    
public:
    AFlashLightTrackingPoint();
    
    // Fix for true pure virtual functions not being implemented
};

