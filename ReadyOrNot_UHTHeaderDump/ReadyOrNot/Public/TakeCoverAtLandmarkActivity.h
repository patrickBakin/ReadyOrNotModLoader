#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EStunType.h"
#include "TakeCoverAtLandmarkActivity.generated.h"

class AActor;
class ABaseMagazineWeapon;
class AReadyOrNotCharacter;
class ACoverLandmarkProxy;
class ACoverLandmark;
class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UTakeCoverAtLandmarkActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACoverLandmark* CoverLandmark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACoverLandmarkProxy* ChosenEntryProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACoverLandmarkProxy* ChosenExitProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialWaitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SWATSeenLandmarkWaitDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EntryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ExitAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LoopEntryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LoopExitAnim;
    
public:
    UTakeCoverAtLandmarkActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void TickMoveToLandmarkState(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void Tick_Wait_State(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void Tick_ExitLandmark_State(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void Tick_EnterLandmark_State(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void Tick_AbruptExit_State(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldWait() const;
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
    UFUNCTION(BlueprintCallable)
    void OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnHeardYell(AReadyOrNotCharacter* Shouter, bool bLOS);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyWeaponFire(AReadyOrNotCharacter* Character, ABaseMagazineWeapon* Weapon, FVector fireDirection);
    
    UFUNCTION(BlueprintCallable)
    void EnterMoveToLandmarkState();
    
    UFUNCTION(BlueprintCallable)
    void Enter_Wait_State();
    
    UFUNCTION(BlueprintCallable)
    void Enter_ExitLandmark_State();
    
    UFUNCTION(BlueprintCallable)
    void Enter_EnterLandmark_State();
    
    UFUNCTION(BlueprintCallable)
    void Enter_AbruptExit_State();
    
    UFUNCTION(BlueprintCallable)
    bool CanExitLandmark() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanEnterLandmark() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanAbruptlyExit() const;
    
};

