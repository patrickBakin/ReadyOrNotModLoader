#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionResponse -FallbackName=ECollisionResponse
#include "VDParticleInfo.h"
#include "VDCollisionSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "VDSimulatedObject.generated.h"

class UVDSimulatedParticle;
class UVDParticleSpringConstraint;
class UVDMeshVolumeConstraint;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class VICODYNAMICSPLUGIN_API UVDSimulatedObject : public UObject {
    GENERATED_BODY()
public:
    UVDSimulatedObject();
    UFUNCTION(BlueprintCallable)
    void SetSkipRelativeVelocityCheckDuringCollision(bool Skip);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectType(TEnumAsByte<ECollisionChannel> ObjectType);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumConstraintSatisfactionDistance(float MinDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionResponseToObjectType(TEnumAsByte<ECollisionChannel> ObjectType, TEnumAsByte<ECollisionResponse> Response);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionChannel(TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintCallable)
    void SetAffectiveWindVector(FVector NewWindVector);
    
    UFUNCTION(BlueprintCallable)
    TArray<UVDParticleSpringConstraint*> GetSpringConstraints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipRelativeVelocityCheckDuringCollision() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UVDSimulatedParticle*> GetParticles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumConstraintSatisfactionDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVDCollisionSettings GetCollisionSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAffectiveWindVector() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyVolumeConstraint(UVDMeshVolumeConstraint* Constraint);
    
    UFUNCTION(BlueprintCallable)
    void DestroyParticle(UVDSimulatedParticle* Particle);
    
    UFUNCTION(BlueprintCallable)
    void DestroyConstraint(UVDParticleSpringConstraint* Constraint);
    
    UFUNCTION(BlueprintCallable)
    UVDMeshVolumeConstraint* CreateVolumeConstraint(const TArray<int32> IndexList, float Alpha, float RestVolume);
    
    UFUNCTION(BlueprintCallable)
    UVDParticleSpringConstraint* CreateSpringConstraint(UVDSimulatedParticle* Particle1, UVDSimulatedParticle* Particle2, float RestDistance, float Stiffness);
    
    UFUNCTION(BlueprintCallable)
    UVDSimulatedParticle* CreateParticle(const FVDParticleInfo& ParticleInfo);
    
};

