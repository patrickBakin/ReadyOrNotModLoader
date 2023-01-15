#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CoverInstigatorStimulus.h"
#include "EStunType.h"
#include "TakeCoverActivity.generated.h"

class AActor;
class ABaseMagazineWeapon;
class AReadyOrNotCharacter;
class ADoor;
class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UTakeCoverActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnteredCover);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCoverFireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverFireTimeCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverFireCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverInstigatorStimulus InstigatorStimulus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* Door;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastExitMontagePlayed;
    
public:
    UTakeCoverActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void TickMoveToCoverState(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void TickCoverState(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void TickCoverFireState(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
    UFUNCTION(BlueprintCallable)
    void OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyWeaponFire(AReadyOrNotCharacter* Character, ABaseMagazineWeapon* Weapon, FVector fireDirection);
    
    UFUNCTION(BlueprintCallable)
    void ExitCoverState();
    
    UFUNCTION(BlueprintCallable)
    void ExitCoverFireState();
    
    UFUNCTION(BlueprintCallable)
    void EnterMoveToCoverState();
    
    UFUNCTION(BlueprintCallable)
    void EnterCoverState();
    
    UFUNCTION(BlueprintCallable)
    void EnterCoverFireState();
    
    UFUNCTION(BlueprintCallable)
    void EnterCompleteState();
    
    UFUNCTION(BlueprintCallable)
    bool CanStopCoverFire() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanFireFromCover() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanCover() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanCompleteCover() const;
    
};

