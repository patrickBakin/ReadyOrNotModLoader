#include "TargetingComponent.h"

class AActor;
class AReadyOrNotCharacter;
class ALastKnownPositionActor;
class AThreatAwarenessActor;

void UTargetingComponent::ShareTarget(AReadyOrNotCharacter* Target) {
}

void UTargetingComponent::SetLastTrackedTarget(AReadyOrNotCharacter* Target) {
}

void UTargetingComponent::RemoveKnownEnemy(AReadyOrNotCharacter* Enemy) {
}

bool UTargetingComponent::IsTrackingMontagePosition() const {
    return false;
}

bool UTargetingComponent::IsTrackedInKnownNeutrals(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool UTargetingComponent::IsTrackedInKnownFriendlies(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool UTargetingComponent::IsTrackedInKnownEnemies(AReadyOrNotCharacter* PlayerCharacter) const {
    return false;
}

bool UTargetingComponent::IsTrackedByKnownFriendly(AReadyOrNotCharacter* Target) {
    return false;
}

bool UTargetingComponent::IsTargetingLastBoneZone() const {
    return false;
}

bool UTargetingComponent::IsLookingAtLocation(const FVector& InTargetLocation) const {
    return false;
}

bool UTargetingComponent::IsLookingAtFocalPoint(float Tolerance) {
    return false;
}

bool UTargetingComponent::IsLocationCloseToKnownEnemies(const FVector& Location, float Tolerance) const {
    return false;
}

bool UTargetingComponent::IsAnySwatLookingAtLocation(const FVector& InTargetLocation) const {
    return false;
}

bool UTargetingComponent::HasSeenCharacterFor(AReadyOrNotCharacter* InCharacter, float Seconds) const {
    return false;
}

bool UTargetingComponent::HasLineOfSightToTrackedTarget() const {
    return false;
}

bool UTargetingComponent::HasLineOfSightToLastTrackedTarget() const {
    return false;
}

bool UTargetingComponent::HasLineOfSightToLastKnownTargetPosition() const {
    return false;
}

int32 UTargetingComponent::GetVisibleKnownFriendlies() {
    return 0;
}

ETargetingCompTracking UTargetingComponent::GetTrackingType() const {
    return ETargetingCompTracking::TCT_None;
}

FTargetData UTargetingComponent::GetTrackedTargetData() const {
    return FTargetData{};
}

AReadyOrNotCharacter* UTargetingComponent::GetTrackedTarget() const {
    return NULL;
}

float UTargetingComponent::GetTimeTrackingTarget() const {
    return 0.0f;
}

float UTargetingComponent::GetTimeTrackingHead() const {
    return 0.0f;
}

float UTargetingComponent::GetTimeSinceLastSeenEnemy() const {
    return 0.0f;
}

TArray<AThreatAwarenessActor*> UTargetingComponent::GetThreatsFromLocationBeyondRadius(const TArray<AThreatAwarenessActor*> InThreats, FVector Location, float MinDistance) const {
    return TArray<AThreatAwarenessActor*>();
}

void UTargetingComponent::GetThreatsForLocation(TArray<AThreatAwarenessActor*>& OutThreats, FVector Location, float MinDistance, bool bRequireLOS) {
}

void UTargetingComponent::GetThreats(TArray<AThreatAwarenessActor*>& OutThreats) {
}

FName UTargetingComponent::GetTargetedBone() const {
    return NAME_None;
}

float UTargetingComponent::GetRequiredTrackingTime() const {
    return 0.0f;
}

int32 UTargetingComponent::GetRecentlyVisibleKnownEnemies(float TimeSinceLastSeen) {
    return 0;
}

AThreatAwarenessActor* UTargetingComponent::GetNearestThreatToLocation(const FVector& Location) const {
    return NULL;
}

AThreatAwarenessActor* UTargetingComponent::GetNearestThreat() const {
    return NULL;
}

AThreatAwarenessActor* UTargetingComponent::GetNearestHighestThreat(const TArray<AThreatAwarenessActor*> InThreats, FVector Location) const {
    return NULL;
}

AReadyOrNotCharacter* UTargetingComponent::GetLastTrackedTarget() const {
    return NULL;
}

FVector UTargetingComponent::GetLastSeenKnownEnemyFrom() const {
    return FVector{};
}

ALastKnownPositionActor* UTargetingComponent::GetLastKnownPositionActor() const {
    return NULL;
}

FVector UTargetingComponent::GetLastKnownEnemyPosition() const {
    return FVector{};
}

AReadyOrNotCharacter* UTargetingComponent::GetLastKnownEnemy() const {
    return NULL;
}

FVector UTargetingComponent::GetLastHeardNoiseLocation() const {
    return FVector{};
}

FVector UTargetingComponent::GetLastHeardAggressiveNoiseLocation() const {
    return FVector{};
}

void UTargetingComponent::GetKnownNeutrals(TArray<AReadyOrNotCharacter*>& OutNeutrals) const {
}

int32 UTargetingComponent::GetKnownFriendlyCount() const {
    return 0;
}

void UTargetingComponent::GetKnownFriendlies(TArray<AReadyOrNotCharacter*>& OutFriendlies) const {
}

void UTargetingComponent::GetKnownEnemies(TArray<FTargetData>& OutEnemies) {
}

AThreatAwarenessActor* UTargetingComponent::GetFurthestHighestThreat(const TArray<AThreatAwarenessActor*> InThreats, FVector Location) const {
    return NULL;
}

FVector UTargetingComponent::GetCoverAreaLocation() const {
    return FVector{};
}

AReadyOrNotCharacter* UTargetingComponent::GetClosestKnownNeutral() {
    return NULL;
}

AReadyOrNotCharacter* UTargetingComponent::GetClosestKnownFriendly() {
    return NULL;
}

AReadyOrNotCharacter* UTargetingComponent::GetClosestKnownEnemy() {
    return NULL;
}

float UTargetingComponent::GetClosestDistanceToKnownEnemies(FVector Location) {
    return 0.0f;
}

bool UTargetingComponent::ContainsThreatLevel(AThreatAwarenessActor* InThreat, TArray<EThreatLevel> ThreatsLevels) {
    return false;
}

bool UTargetingComponent::CanSeeTrackedTarget() const {
    return false;
}

bool UTargetingComponent::CanSeeLastTrackedTarget() const {
    return false;
}

bool UTargetingComponent::CanCharacterBeSeen(AReadyOrNotCharacter* InCharacter, float MinAge) const {
    return false;
}

bool UTargetingComponent::CanActorBeSeen(AActor* InActor) const {
    return false;
}

void UTargetingComponent::AddKnownNeutral(AReadyOrNotCharacter* Neutral) {
}

void UTargetingComponent::AddKnownFriendly(AReadyOrNotCharacter* Friendly) {
}

void UTargetingComponent::AddKnownEnemy(AReadyOrNotCharacter* Enemy, bool bForce) {
}

void UTargetingComponent::AddCharacterToSeenMap(AReadyOrNotCharacter* InCharacter) {
}

UTargetingComponent::UTargetingComponent() {
    this->MontageFocalAnim = NULL;
    this->Threat = 0.00f;
    this->Tension = 0.00f;
    this->TrackingType = ETargetingCompTracking::TCT_None;
    this->LastKnownPositionActor = NULL;
    this->TimeSinceLastSeenTarget = 340282346638528859811704183484516925440.00f;
    this->PreviousTimeNotSeenTarget = 340282346638528859811704183484516925440.00f;
    this->TimeTrackingTarget = 0.00f;
    this->DelayUntilCoverArea = 0.00f;
    this->EngagementTimeUntilReachedLastBoneZone = 4.00f;
    this->TimeSinceLastBoneRetarget = 0.00f;
    this->bHasLOSToTarget = false;
    this->bCanSeeTarget = false;
    this->bHasLOSToLastTarget = false;
    this->bCanSeeLastTarget = false;
    this->bHasLOSToLastKnownTargetPosition = false;
    this->CurrentBoneTargetZoneIndex = 0;
    this->PreviousBoneTargetZoneIndex = 0;
    this->ExposureFromEnemy = 0.00f;
    this->EnemyExposureFromUs = 0.00f;
    this->RequiredTimeTrackingTarget = 1.00f;
    this->TimeTrackingHead = 0.00f;
    this->TrackedTarget = NULL;
    this->LastTrackedTarget = NULL;
    this->LastKnownEnemy = NULL;
    this->LastTrackedDoor = NULL;
    this->TimeUntilNextDoorCheck = 0.00f;
    this->TimeSinceLastHeardNoiseStimulus = 0.00f;
    this->LastThreatAwarenessActor = NULL;
    this->bSearchingPathAwareness = false;
    this->TimeSinceGotLastThreatAwarenessActor = 0.00f;
    this->TimeUntilFinishedCheckingThreat = 0.00f;
    this->NearestThreat = NULL;
    this->ThreatIdx = 0;
    this->bRequireThreatSearch = true;
}

