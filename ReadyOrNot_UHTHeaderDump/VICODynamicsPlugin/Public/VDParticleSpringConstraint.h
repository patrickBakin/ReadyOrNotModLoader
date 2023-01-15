#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VDParticleSpringConstraint.generated.h"

class UVDSimulatedParticle;

UCLASS(Blueprintable)
class VICODYNAMICSPLUGIN_API UVDParticleSpringConstraint : public UObject {
    GENERATED_BODY()
public:
    UVDParticleSpringConstraint();
    UFUNCTION(BlueprintCallable)
    void SetStiffness(const float& NewStiffness);
    
    UFUNCTION(BlueprintCallable)
    void SetRestDistance(const float& NewRestDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConstraining(const UVDSimulatedParticle* Particle1, const UVDSimulatedParticle* Particle2) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStifffness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRestDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVDSimulatedParticle* GetParticle2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVDSimulatedParticle* GetParticle1() const;
    
};

