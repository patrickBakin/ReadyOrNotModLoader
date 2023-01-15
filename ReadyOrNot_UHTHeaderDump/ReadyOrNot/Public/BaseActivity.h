#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReceiveAISenseUpdates.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EItemCategory.h"
#include "BaseActivity.generated.h"

class AAIController;
class UActivityFiniteStateMachine;
class ABaseItem;
class UBaseActivity;
class ACyberneticController;
class AReadyOrNotCharacter;
class ACyberneticCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew, Transient)
class READYORNOT_API UBaseActivity : public UObject, public IReceiveAISenseUpdates {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartActivity, UBaseActivity*, Activity, ACyberneticController*, Controller);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSoftFinishActivity, UBaseActivity*, Activity, ACyberneticController*, Controller);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPerformActivity, UBaseActivity*, Activity, ACyberneticController*, Controller, float, DeltaTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFinishActivity, UBaseActivity*, Activity, ACyberneticController*, Controller);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartActivity OnStartActivity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerformActivity OnPerformActivity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishActivity OnFinishActivity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishActivity OnFinishActivity_NoOwner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSoftFinishActivity OnSoftFinishActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxActivityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivityCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivityStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRandomStartDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsProgressActivity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFinishActivityWhenOverriden: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAbortMoveWhenActivityFinished: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAbortMoveWhenActivityOverriden: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAbortActivityIfCannotReachLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAbortIfTrackingEnemy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoMoveActivity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetStateMachineWhenActivityResumed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowPartialMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowRePathOnInvalidation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAbortIfNotMovingForAWhile: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedActivityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceGivenNewMoveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProgressState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticController* OwningController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UActivityFiniteStateMachine* ActivityStateMachine;
    
public:
    UBaseActivity();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartActivity_Blueprint(AAIController* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldForceStrafe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldForceNoStrafe() const;
    
    UFUNCTION(BlueprintCallable)
    void SetLocation(const FVector& NewLocation, bool bRequestMove, FVector CustomExtent);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityName(const FString& NewActivityName);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityMove(const bool bCanMove);
    
    UFUNCTION(BlueprintCallable)
    void ResetData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PerformActivity_Blueprint(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OverrideFocalPoint_Blueprint(FVector& FocalPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnIncapacitated(AReadyOrNotCharacter* IncapacitatedCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProgressActivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoMoveActivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivitySoftComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivityPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivityInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivityComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStartedActivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReachedLocation_AsPercentage(FVector StartLocation, float Percentage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReachedLocation(float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticController* GetOwningController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActiveStateUptime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveStateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveStateID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishedActivity_Blueprint(bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EquipWeapon();
    
    UFUNCTION(BlueprintCallable)
    void EquipItemOfClass(TSubclassOf<ABaseItem> InItemClass);
    
    UFUNCTION(BlueprintCallable)
    void EquipItem(EItemCategory InItemCategory);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOverrideActivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBePushed() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

