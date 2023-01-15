#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseDeployableGear.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "DeployableBag.generated.h"

class APlacedBag;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ADeployableBag : public ABaseDeployableGear {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlacedBag> PlacedBagClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlacementDistance;
    
    ADeployableBag();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartBagPlacement(FHitResult TraceHit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBagSpawned(APlacedBag* SpawnedBag);
    
};

