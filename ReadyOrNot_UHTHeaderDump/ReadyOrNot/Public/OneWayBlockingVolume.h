#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OneWayBlockingVolume.generated.h"

class UBoxComponent;
class UArrowComponent;

UCLASS(Blueprintable)
class READYORNOT_API AOneWayBlockingVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* DirectionArrowComponent;
    
public:
    AOneWayBlockingVolume();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UArrowComponent* GetDirectionArrowComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoxComponent* GetBoxComponent() const;
    
};

