#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VDSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "VDSimulation.generated.h"

class UPrimitiveComponent;
class UBaseVDComponent;
class UVDWindDirectionalSourceComponent;
class UVDSimulatedParticle;
class UVDSimulatedObject;

UCLASS(Blueprintable)
class VICODYNAMICSPLUGIN_API UVDSimulation : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVDWindDirectionalSourceComponent*> WindSources;
    
public:
    UVDSimulation();
    UFUNCTION(BlueprintCallable)
    void SetSubstepCount(int32 SubstepCount);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfCollisionEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysXSceneCollisionEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPerFrameCollisionCacheEnable(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPerformExtraCollisionResolutionLoop(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRate(int32 FrameRate);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintIterationCount(int32 ConstraintIterationCount);
    
    UFUNCTION(BlueprintCallable)
    void SetConstrainSimulationTo2DPlane(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetConstrainPlaneOrigin(FVector Origin);
    
    UFUNCTION(BlueprintCallable)
    void SetConstrainPlaneNormal(FVector Normal);
    
    UFUNCTION(BlueprintCallable)
    void RemoveExplicitColliderMapping(UBaseVDComponent* VDComponent, UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllExplicitColliderMappings(UBaseVDComponent* VDComponent);
    
    UFUNCTION(BlueprintCallable)
    bool k2QuerySphereOverlaps(FVector Location, float Radius, TArray<UVDSimulatedParticle*>& Overlaps, const TArray<UVDSimulatedObject*>& SimObjectsToIgnore, int32 MaxOverlaps);
    
    UFUNCTION(BlueprintCallable)
    bool k2QueryBoxOverlaps(FVector Location, FVector HalfExtents, TArray<UVDSimulatedParticle*>& Overlaps, const TArray<UVDSimulatedObject*>& SimObjectsToIgnore, int32 MaxOverlaps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVDSettings GetSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRunningOnWorkerThread() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsExplicitRigidBodyCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDirectionalWindParameters(UBaseVDComponent* VDComponent, FVector& OutDirection, float& OutSpeed, float& OutGust) const;
    
    UFUNCTION(BlueprintCallable)
    void AddExplicitColliderMapping(UBaseVDComponent* VDComponent, UPrimitiveComponent* Collider, bool IgnoreConvexShapes);
    
};

