#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EStunType.h"
#include "ScriptedFireAt.h"
#include "BaseCombatActivity.generated.h"

class AActor;
class ABaseMagazineWeapon;
class UBaseCombatMoveActivity;
class ACyberneticController;
class AReadyOrNotCharacter;
class UChargeCombatMove;
class UCommitSuicideActivity;
class UFleeingCombatMove;
class UFlankingCombatMove;
class UDuelingCombatMove;
class UHardCoverCombatMove;
class UMoveIntoLOSActivity;
class UPlayDeadActivity;
class UPickupItemActivity;
class UPushCombatMove;
class UReloadSafelyActivity;
class USuppressionCombatMove;

UCLASS(Abstract, Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UBaseCombatActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrackNewEnemy, AReadyOrNotCharacter*, NewTrackedEnemy);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrackNewEnemy OnTrackNewEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptedFireAt CurrentScriptedFireAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FleeDesire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSincePerformingAnyCombatMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFleeingCombatMove* FleeingCombatMove;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseCombatMoveActivity* CombatMoveActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHardCoverCombatMove* HardCoverCombatMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDuelingCombatMove* DuelingCombatMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlankingCombatMove* FlankingCombatMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USuppressionCombatMove* SuppressionCombatMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPushCombatMove* PushCombatMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChargeCombatMove* ChargeCombatMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoveIntoLOSActivity* MoveIntoLOSActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverEvaluationCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverLandmarkEvaluationCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* LastTrackedEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPickupItemActivity* PickupItemActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReloadSafelyActivity* ReloadSafelyActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayDeadActivity* PlayDeadActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommitSuicideActivity* CommitSuicideActivity;
    
public:
    UBaseCombatActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void TrackEnemyKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void TrackEnemyFire(AReadyOrNotCharacter* FromCharacter, ABaseMagazineWeapon* Weapon, FVector fireDirection);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopScriptedFire();
    
    UFUNCTION(BlueprintCallable)
    void StopMoveIntoLineOfSight();
    
    UFUNCTION(BlueprintCallable)
    void StartRunningCombatMove(UBaseCombatMoveActivity* CombatMove);
    
    UFUNCTION(BlueprintCallable)
    void ScriptedFireAtLocation(FVector InLocation, float InTime, bool bOverrideTarget, float AccuracyPenaltyMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void ScriptedFireAtActor(AActor* InActor, float InTime, bool bOverrideTarget, float AccuracyPenaltyMultiplier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayDeadStarted(UBaseActivity* Activity, ACyberneticController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void PlayDeadFinished(UBaseActivity* Activity, ACyberneticController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void PerformStrafeLogic(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void PerformNoStrafeLogic(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
    UFUNCTION(BlueprintCallable)
    void OnSuicideFakeOutSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCoverLandmark();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCover();
    
    UFUNCTION(BlueprintCallable)
    void OnNoCoverFound();
    
    UFUNCTION(BlueprintCallable)
    void OnCoverLandmarkExit();
    
    UFUNCTION(BlueprintCallable)
    void OnCoverFound();
    
    UFUNCTION(BlueprintCallable)
    void OnCoverExit();
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveIntoLineOfSight(const FVector& ToLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningCombatMoveActivity(UClass* Class) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusingOnActor(const AActor* InActor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseCombatMoveActivity* GetCombatMoveActivity() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishCombatMove(bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnterStrafeState();
    
    UFUNCTION(BlueprintCallable)
    void EnterNoStrafeState();
    
};

