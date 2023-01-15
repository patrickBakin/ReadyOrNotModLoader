#pragma once
#include "CoreMinimal.h"
#include "BaseItem.h"
#include "Detonator.generated.h"

class APlacedC2Explosive;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ADetonator : public ABaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlacedC2Explosive*> PlacedCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlacedChargesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDetonationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DetonatorLightDynamicMaterial;
    
    ADetonator();
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DetonateC2();
    
};

