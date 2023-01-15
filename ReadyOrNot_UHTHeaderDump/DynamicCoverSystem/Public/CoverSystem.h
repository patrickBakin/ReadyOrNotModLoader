#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CoverSystem.generated.h"

UCLASS(Blueprintable, Transient)
class DYNAMICCOVERSYSTEM_API UCoverSystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UCoverSystem();
    UFUNCTION(BlueprintCallable)
    bool ReleaseCover(const FVector& InCoverPoint);
    
    UFUNCTION(BlueprintCallable)
    bool OccupyCover(const FVector& InCoverPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoverPointOccupied(const FVector& InCoverLocation) const;
    
};

