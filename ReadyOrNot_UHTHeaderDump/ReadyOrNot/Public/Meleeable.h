#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "Meleeable.generated.h"

class UFMODEvent;
class AReadyOrNotCharacter;
class UParticleSystem;

UINTERFACE(Blueprintable, MinimalAPI)
class UMeleeable : public UInterface {
    GENERATED_BODY()
};

class IMeleeable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPlayMeleeEffectsLocally() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMelee(AReadyOrNotCharacter* Attacker, FHitResult Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UFMODEvent* GetMeleeImpactSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UParticleSystem* GetMeleeImpactParticle() const;
    
};

