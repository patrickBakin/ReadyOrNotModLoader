#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TargetData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ExposedToNoise.h"
#include "ETargetingCompTracking.h"
#include "EPathedAwareness.h"
#include "EThreatLevel.h"
#include "TargetingComponent.generated.h"

class AActor;
class AReadyOrNotCharacter;
class ADoor;
class ALastKnownPositionActor;
class AThreatAwarenessActor;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UTargetingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThreatTrackingIgnoredDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThreatTrackingPreferredDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageFocalAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MontageFocalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CustomFocusLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HeadTrackingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExposedToNoise LastHeardAggressiveNoise;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AReadyOrNotCharacter*, float> CharactersSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetingCompTracking TrackingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALastKnownPositionActor* LastKnownPositionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotCharacter*> KnownFriendlies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotCharacter*> KnownNeutrals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTargetData> KnownEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastKnownTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastSeenKnownTargetFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CoverAreaLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastSeenTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousTimeNotSeenTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTrackingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayUntilCoverArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngagementTimeUntilReachedLastBoneZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastBoneRetarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasLOSToTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanSeeTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasLOSToLastTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanSeeLastTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasLOSToLastKnownTargetPosition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentBoneTargetZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PreviousBoneTargetZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetedBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BonesToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureFromEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyExposureFromUs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredTimeTrackingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTrackingHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* TrackedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* LastTrackedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* LastKnownEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> FocalPointsOfInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastMoveVectorFocalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* LastTrackedDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilNextDoorCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastHeardNoiseStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LatestNoiseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AThreatAwarenessActor* LastThreatAwarenessActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchingPathAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceGotLastThreatAwarenessActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilFinishedCheckingThreat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPathedAwareness, FVector> LatestPathedAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPathedAwareness, FVector> LastSearchedPathedAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPathedAwareness, float> PathAwarenessSearchTimeout;
    
    UPROPERTY(EditAnywhere)
    TMap<uint32, EPathedAwareness> PathedAwarenessQueryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AThreatAwarenessActor* NearestThreat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> Threats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> HasBeenNearThreat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThreatIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireThreatSearch;
    
public:
    UTargetingComponent();
    UFUNCTION(BlueprintCallable)
    void ShareTarget(AReadyOrNotCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetLastTrackedTarget(AReadyOrNotCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKnownEnemy(AReadyOrNotCharacter* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackingMontagePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackedInKnownNeutrals(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackedInKnownFriendlies(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackedInKnownEnemies(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackedByKnownFriendly(AReadyOrNotCharacter* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetingLastBoneZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookingAtLocation(const FVector& InTargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookingAtFocalPoint(float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationCloseToKnownEnemies(const FVector& Location, float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnySwatLookingAtLocation(const FVector& InTargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenCharacterFor(AReadyOrNotCharacter* InCharacter, float Seconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLineOfSightToTrackedTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLineOfSightToLastTrackedTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLineOfSightToLastKnownTargetPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVisibleKnownFriendlies();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETargetingCompTracking GetTrackingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTargetData GetTrackedTargetData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotCharacter* GetTrackedTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeTrackingTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeTrackingHead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastSeenEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AThreatAwarenessActor*> GetThreatsFromLocationBeyondRadius(const TArray<AThreatAwarenessActor*> InThreats, FVector Location, float MinDistance) const;
    
    UFUNCTION(BlueprintCallable)
    void GetThreatsForLocation(TArray<AThreatAwarenessActor*>& OutThreats, FVector Location, float MinDistance, bool bRequireLOS);
    
    UFUNCTION(BlueprintCallable)
    void GetThreats(TArray<AThreatAwarenessActor*>& OutThreats);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTargetedBone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRequiredTrackingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRecentlyVisibleKnownEnemies(float TimeSinceLastSeen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AThreatAwarenessActor* GetNearestThreatToLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AThreatAwarenessActor* GetNearestThreat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AThreatAwarenessActor* GetNearestHighestThreat(const TArray<AThreatAwarenessActor*> InThreats, FVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotCharacter* GetLastTrackedTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastSeenKnownEnemyFrom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALastKnownPositionActor* GetLastKnownPositionActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastKnownEnemyPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotCharacter* GetLastKnownEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastHeardNoiseLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastHeardAggressiveNoiseLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKnownNeutrals(TArray<AReadyOrNotCharacter*>& OutNeutrals) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKnownFriendlyCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKnownFriendlies(TArray<AReadyOrNotCharacter*>& OutFriendlies) const;
    
    UFUNCTION(BlueprintCallable)
    void GetKnownEnemies(TArray<FTargetData>& OutEnemies);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AThreatAwarenessActor* GetFurthestHighestThreat(const TArray<AThreatAwarenessActor*> InThreats, FVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCoverAreaLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotCharacter* GetClosestKnownNeutral();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotCharacter* GetClosestKnownFriendly();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotCharacter* GetClosestKnownEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClosestDistanceToKnownEnemies(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsThreatLevel(AThreatAwarenessActor* InThreat, TArray<EThreatLevel> ThreatsLevels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSeeTrackedTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSeeLastTrackedTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharacterBeSeen(AReadyOrNotCharacter* InCharacter, float MinAge) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActorBeSeen(AActor* InActor) const;
    
    UFUNCTION(BlueprintCallable)
    void AddKnownNeutral(AReadyOrNotCharacter* Neutral);
    
    UFUNCTION(BlueprintCallable)
    void AddKnownFriendly(AReadyOrNotCharacter* Friendly);
    
    UFUNCTION(BlueprintCallable)
    void AddKnownEnemy(AReadyOrNotCharacter* Enemy, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void AddCharacterToSeenMap(AReadyOrNotCharacter* InCharacter);
    
};

