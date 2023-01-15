#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseDeployableGear.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "BallisticsShield.generated.h"

class AActor;
class UPrimitiveComponent;
class UFMODEvent;
class UMatineeCameraShake;
class ABaseItem;
class ABaseMagazineWeapon;
class UAnimMontage;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ABallisticsShield : public ABaseDeployableGear {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* GlassMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachmentRep, meta=(AllowPrivateAccess=true))
    ABaseMagazineWeapon* PistolEquippedWithShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ShieldHitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReloadAnim_1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReloadAnimEmpty_1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReloadAnim_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bLowered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> ShieldHitCameraShake;
    
    ABallisticsShield();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLowered(bool bShouldLower);
    
    UFUNCTION(BlueprintCallable)
    void OnTPShieldHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GlassUpdate();
    
    UFUNCTION(BlueprintCallable)
    void DamageShieldGlass();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetPistol(ABaseItem* newPistol);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_PlayShieldHitSound();
    
};

