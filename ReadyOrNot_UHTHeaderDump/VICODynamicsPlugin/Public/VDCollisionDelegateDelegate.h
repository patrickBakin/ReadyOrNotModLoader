#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "VDCollisionDelegateDelegate.generated.h"

class UPrimitiveComponent;
class UBaseVDComponent;
class UVDSimulatedParticle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FVDCollisionDelegate, UBaseVDComponent*, VDComponent, UPrimitiveComponent*, OtherComponent, FVector, HitLocation, FVector, HitNormal, UVDSimulatedParticle*, Particle);

