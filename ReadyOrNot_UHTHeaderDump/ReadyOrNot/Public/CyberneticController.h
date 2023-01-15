#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActorSense.h"
#include "ExposedToNoise.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIRequestID -FallbackName=AIRequestID
#include "EStunType.h"
#include "ETeamType.h"
#include "EAIAwarenessState.h"
#include "ERonNavigationQueryResult.h"
#include "CyberneticController.generated.h"

class AActor;
class UBaseActivity;
class UBaseCombatActivity;
class AReadyOrNotCharacter;
class ACyberneticCharacter;
class ADoor;
class UInvestigateStimulusActivity;
class UMoraleComponent;
class APlayerCharacter;
class UReadyOrNotAISenseConfig_Sight;
class UNavigationQueryFilter;
class UTargetingComponent;
class UAIPerceptionComponent;
class UAISenseConfig_Touch;
class UAISenseConfig_Hearing;
class UAISenseConfig_Damage;

UCLASS(Blueprintable)
class READYORNOT_API ACyberneticController : public AAIController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAIMoveCompleted, AAIController*, Controller, int32, RequestID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActivityComplete, UBaseActivity*, CompletedActivity, UBaseActivity*, NextActivity, bool, bSuccessfullyCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncPathFoundDelegate, int32, PathId, ERonNavigationQueryResult, Result);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* AIPerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotAISenseConfig_Sight* SightConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISenseConfig_Touch* TouchConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISenseConfig_Damage* DamageConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISenseConfig_Hearing* HearingConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMoraleComponent* MoraleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTargetingComponent* TargetingComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> LastHeardActorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* SensingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastSensedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* HeardActorInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* LastSensedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastSensedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanOpenDoorThroughNavLink: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilRecentlySeenCharactersClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotCharacter*> RecentlySeenSwat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotCharacter*> RecentlySeenSuspects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotCharacter*> RecentlySeenCivilians;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncPathFoundDelegate OnAsyncPathFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AReadyOrNotCharacter*, float> DamagedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AReadyOrNotCharacter*, FVector> DamagedByLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInvestigateStimulusActivity* InvestigateStimulusActivity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIAwarenessState AwarenessState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIStimulus LatestStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIStimulus LatestSightStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIStimulus LatestHearingStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIStimulus LatestDamageStimulus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TrackedDistractions;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIMoveCompleted OnMoveComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorSense> ActorSightSenseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorSense> ActorSoundSenseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorSense> ActorDamageSenseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopDecisionMaking: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseActivity* CurrentActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseActivity*> ActivityQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CallForHelpCoolDownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHearingForHelpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashLightSeenCoolDownDuration;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UBaseActivity>, float> ActivityCooldownMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableSensePerception: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FExposedToNoise> ExposedToStimulusTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastExposedToAggressiveStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastExposedToAnyStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastExposedToSightStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastExposedToSoundStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEverHeardAggressiveStimulus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnalertTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspiciousTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseCombatActivity* CombatActivity;
    
    ACyberneticController();
protected:
    UFUNCTION(BlueprintCallable)
    void SenseStuff(const TArray<AActor*>& TestActors);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 RequestMoveAsync(FVector Location, bool bProjectToNavigation);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllActivitiesExcept(TSubclassOf<UBaseActivity> ActivityType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActivitiesOfType(TSubclassOf<UBaseActivity> ActivityType, bool bClearCurrent);
    
    UFUNCTION(BlueprintCallable)
    bool PerformWorldBuildingActivities(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(const TArray<AActor*>& TestActors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownNeutralTakeDamage_Blueprint(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownNeutralTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownNeutralStunned_Blueprint(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownNeutralStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownNeutralKilled_Blueprint(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownNeutralKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownNeutralIncapacitated_Blueprint(AReadyOrNotCharacter* IncapacitatedCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownNeutralIncapacitated(AReadyOrNotCharacter* IncapacitatedCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownFriendlyTakeDamage_Blueprint(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownFriendlyTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownFriendlyStunned_Blueprint(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownFriendlyStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownFriendlyKilled_Blueprint(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownFriendlyKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownFriendlyIncapacitated_Blueprint(AReadyOrNotCharacter* IncapacitatedCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownFriendlyIncapacitated(AReadyOrNotCharacter* IncapacitatedCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownEnemyTakeDamage_Blueprint(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownEnemyTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownEnemyStunned_Blueprint(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownEnemyStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownEnemyKilled_Blueprint(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownEnemyKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKnownEnemyIncapacitated_Blueprint(AReadyOrNotCharacter* IncapacitatedCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKnownEnemyIncapacitated(AReadyOrNotCharacter* IncapacitatedCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDoorKicked(ADoor* Door, AReadyOrNotCharacter* InstigatorCharacter, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnDoorExploded(ADoor* Door, AReadyOrNotCharacter* InstigatorCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnAIFinishSpawning();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTagInvestigativeNoise(const FName& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTagAggressiveNoise(const FName& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSWAT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuspect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerAKnownEnemy(APlayerCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingForRequests(TArray<FAIRequestID> Requests) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingForRequest(int32 RequestID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFindingPath(int32 PathId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFindingAnyPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCivilian() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterNeutral(AReadyOrNotCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterFriendly(AReadyOrNotCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterEnemy(AReadyOrNotCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivelyMovingOnPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlySeenSwat(FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlySeenSuspect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlySeenCivilian() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenExposedToAggressiveNoise_Tag(FName& OutTag, float SinceSeconds, float MaxDistance, bool bIncludeFriendly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenExposedToAggressiveNoise(float SinceSeconds, float MaxDistance, bool bIncludeFriendly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActivityType(TSubclassOf<UBaseActivity> ActivityType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotCharacter* GetTrackedTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamType GetTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UNavigationQueryFilter> GetNavQueryFilter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAIStimulus GetLatestStimulus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotCharacter* GetHeardActorInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseCombatActivity* GetCombatActivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIAwarenessState GetAwarenessState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActivityQueueCount() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetActivityQueueAsString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseActivity* GetActivity(TSubclassOf<UBaseActivity> ActivityType) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishActivity(UBaseActivity* Activity, bool bSuccess, bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesPathGoThroughDoor(ADoor*& Door) const;
    
    UFUNCTION(BlueprintCallable)
    void AddExposedToStimulusTag(const FName& Tag, FVector StimulusLocation, bool bFriendly, AReadyOrNotCharacter* StimulusInstigator);
    
    UFUNCTION(BlueprintCallable)
    bool AddActivity(UBaseActivity* Activity, bool bOverrideCurrentActivity);
    
    UFUNCTION(BlueprintCallable)
    void AbortMove();
    
    UFUNCTION(BlueprintCallable)
    void AbortCoverLandmark();
    
    UFUNCTION(BlueprintCallable)
    void AbortCover();
    
};

