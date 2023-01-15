#pragma once
#include "CoreMinimal.h"
#include "BaseItem.h"
#include "Pepperspray.generated.h"

class UFMODEvent;
class UAmmoComponent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API APepperspray : public ABaseItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SprayParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAmmoComponent* AmmoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleRunningOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSprayLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSprayLoopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODSprayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODSprayEmptyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODImpactEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODSprayLowAmmoEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprayDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bSpraying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationFrontTorso;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationBackFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationFrontFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PepperSprayAbuseDebounce;
    
public:
    APepperspray();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopSpraySoundEffect();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopSprayParticleEffect();
    
    UFUNCTION(BlueprintCallable)
    void StopSpraying();
    
    UFUNCTION(BlueprintCallable)
    void StartSpraying();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopSpraying();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_StartSpraying();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlaySpraySoundEffect(bool bRunningOutEffect);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlaySprayParticleEffect(bool bRunningOutEffect);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Spraying();
    
    UFUNCTION(BlueprintCallable)
    void OnLowPeppersprayAmmo(float CurrentResource);
    
    UFUNCTION(BlueprintCallable)
    void OnDepletedPeppersprayAmmo();
    
};

