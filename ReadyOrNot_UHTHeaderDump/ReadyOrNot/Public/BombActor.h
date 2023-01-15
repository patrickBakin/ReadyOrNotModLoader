#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CanUseMultitoolOn.h"
#include "UseabilityInterface.h"
#include "EBombState.h"
#include "BombActor.generated.h"

class UFMODEvent;
class ABombActor;
class UStaticMeshComponent;
class UInteractableComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class READYORNOT_API ABombActor : public AActor, public IUseabilityInterface, public ICanUseMultitoolOn {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBombDefusedSignature, ABombActor*, DefusedBomb);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBombDefusedSignature OnBombDefused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ExplosionParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultitoolUseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EBombState BombState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeUntilExplodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BombTickEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BombExplodeEvent;
    
    ABombActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayBombExplodeSFX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBombState GetBombState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Explode();
    
    
    // Fix for true pure virtual functions not being implemented
};

