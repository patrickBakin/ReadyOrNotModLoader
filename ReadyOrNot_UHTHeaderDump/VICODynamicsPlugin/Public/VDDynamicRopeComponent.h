#pragma once
#include "CoreMinimal.h"
#include "VDRopeComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "VDDynamicRopeComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VICODYNAMICSPLUGIN_API UVDDynamicRopeComponent : public UVDRopeComponent {
    GENERATED_BODY()
public:
    UVDDynamicRopeComponent();
    UFUNCTION(BlueprintCallable)
    void RebuildRopeAttached(float DistancePerSegment, USceneComponent* StartAttachedTo, FName StartSocket, bool StartSimulateTension, USceneComponent* EndAttachedTo, FName EndSocket, bool EndSimulateTension);
    
    UFUNCTION(BlueprintCallable)
    void RebuildRopeAtPoints(float DistancePerSegment, const FVector& StartLocation, const FVector& EndLocation, bool bRelativeLocations);
    
    UFUNCTION(BlueprintCallable)
    void RebuildRope();
    
};

