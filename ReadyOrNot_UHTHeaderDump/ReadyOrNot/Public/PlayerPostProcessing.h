#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PostProcessEffectPlayer.h"
#include "PostProcessEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
#include "EStunType.h"
#include "NVGPostProcessSettings.h"
#include "PlayerPostProcessing.generated.h"

class AActor;
class ABaseItem;
class AReadyOrNotCharacter;
class APlayerCharacter;
class UPostProcessRequirement;
class UPostProcessEffectData;
class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UPlayerPostProcessing : public UPostProcessComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPostProcessEffectData*> DebugPPEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DebugPPEffects_MIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPostProcessEffect> PostProcessEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DevPostProcessMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNVGPostProcessSettings NVG_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RecentDamageCauser;
    
public:
    UPlayerPostProcessing();
protected:
    UFUNCTION(BlueprintCallable)
    void StopTaserEffect();
    
    UFUNCTION(BlueprintCallable)
    void StopSuppressionEffects();
    
    UFUNCTION(BlueprintCallable)
    void StopStingerEffect();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopPostProcessEffect_Name(FName EffectName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopPostProcessEffect_FromDataAsset(UPostProcessEffectData* InPostProcessEffectData);
    
    UFUNCTION(BlueprintCallable)
    void StopPostProcessEffect(FPostProcessEffect& InPostProcessEffect);
    
    UFUNCTION(BlueprintCallable)
    void StopPeppersprayEffect();
    
    UFUNCTION(BlueprintCallable)
    void StopInjuryEffects();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopHeartbeatEffect();
    
    UFUNCTION(BlueprintCallable)
    void StopHealingEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopGasEffect();
    
    UFUNCTION(BlueprintCallable)
    void StopFlashbangEffect();
    
    UFUNCTION(BlueprintCallable)
    void StopDeathEffect();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopBleedingEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartTaserEffect(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void StartSuppressionEffects(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void StartStingerEffect(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void StartPostProcessEffect_Specific(FPostProcessEffectPlayer& InPostProcessSetting, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void StartPostProcessEffect_FromDataAsset(UPostProcessEffectData* InPostProcessEffectData, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void StartPostProcessEffect(FPostProcessEffect& InPostProcessEffect, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void StartPeppersprayEffect(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void StartInjuryEffects(AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartHeartbeatEffect();
    
    UFUNCTION(BlueprintCallable)
    void StartHealingEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartGasEffect(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void StartFlashbangEffect(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void StartDeathEffect(AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartBleedingEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetInjuryRadialBlur(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ProcessPostProcessEffect(FPostProcessEffect& InPostProcessEffect, float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayPostProcessEffect_Name(FName EffectName, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSupression(float Strength);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStunned(AReadyOrNotCharacter* Character, float Duration, EStunType StunType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnItemHolstered(ABaseItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(ABaseItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnFootstep();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFire();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTakenDetails(bool bWasHeadshot, float DamageTaken, float HealthRemaining, bool bBlockedByArmour, bool bBlockedByHelmet);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
    UFUNCTION(BlueprintCallable)
    void OnBulletImpact(float DirectionForward, float DirectionRight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPostProcessEffectPlaying(UPostProcessEffectData* InPostProcessEffectData) const;
    
    UFUNCTION(BlueprintCallable)
    int32 InitializePostProcessFloatParam(const FPostProcessEffect& InPostProcessEffect, const FName& InParameterName, float Value, int32 Instance, int32 CurveKey);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPostProcessFromFloatParam(const FPostProcessEffect& InPostProcessEffect, const FName& InParameterName, int32 Instance);
    
    UFUNCTION(BlueprintCallable)
    bool FulfillsAllRequirements(const TArray<TSubclassOf<UPostProcessRequirement>>& InRequirementClasses, AActor* InDamageCauser, bool bForceFulfillment);
    
    UFUNCTION(BlueprintCallable)
    void FlashOnDeath();
    
    UFUNCTION(BlueprintCallable)
    void FadeToGrey();
    
};

