#include "CyberneticController.h"
#include "Templates/SubclassOf.h"
#include "MoraleComponent.h"
#include "ReadyOrNotAISenseConfig_Sight.h"
#include "TargetingComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionComponent -FallbackName=AIPerceptionComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseConfig_Touch -FallbackName=AISenseConfig_Touch
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseConfig_Hearing -FallbackName=AISenseConfig_Hearing
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseConfig_Damage -FallbackName=AISenseConfig_Damage

class AActor;
class UBaseActivity;
class UBaseCombatActivity;
class AReadyOrNotCharacter;
class ACyberneticCharacter;
class ADoor;
class APlayerCharacter;
class UNavigationQueryFilter;

void ACyberneticController::SenseStuff(const TArray<AActor*>& TestActors) {
}

int32 ACyberneticController::RequestMoveAsync(FVector Location, bool bProjectToNavigation) {
    return 0;
}

void ACyberneticController::RemoveAllActivitiesExcept(TSubclassOf<UBaseActivity> ActivityType) {
}

void ACyberneticController::RemoveActivitiesOfType(TSubclassOf<UBaseActivity> ActivityType, bool bClearCurrent) {
}

bool ACyberneticController::PerformWorldBuildingActivities(float DeltaTime) {
    return false;
}

void ACyberneticController::OnPerceptionUpdated(const TArray<AActor*>& TestActors) {
}


void ACyberneticController::OnKnownNeutralTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining) {
}


void ACyberneticController::OnKnownNeutralStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser) {
}


void ACyberneticController::OnKnownNeutralKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}


void ACyberneticController::OnKnownNeutralIncapacitated(AReadyOrNotCharacter* IncapacitatedCharacter) {
}


void ACyberneticController::OnKnownFriendlyTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining) {
}


void ACyberneticController::OnKnownFriendlyStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser) {
}


void ACyberneticController::OnKnownFriendlyKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}


void ACyberneticController::OnKnownFriendlyIncapacitated(AReadyOrNotCharacter* IncapacitatedCharacter) {
}


void ACyberneticController::OnKnownEnemyTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining) {
}


void ACyberneticController::OnKnownEnemyStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser) {
}


void ACyberneticController::OnKnownEnemyKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}


void ACyberneticController::OnKnownEnemyIncapacitated(AReadyOrNotCharacter* IncapacitatedCharacter) {
}

void ACyberneticController::OnDoorKicked(ADoor* Door, AReadyOrNotCharacter* InstigatorCharacter, bool bSuccess) {
}

void ACyberneticController::OnDoorExploded(ADoor* Door, AReadyOrNotCharacter* InstigatorCharacter) {
}

void ACyberneticController::OnAIFinishSpawning() {
}

bool ACyberneticController::IsTagInvestigativeNoise(const FName& Tag) const {
    return false;
}

bool ACyberneticController::IsTagAggressiveNoise(const FName& Tag) const {
    return false;
}

bool ACyberneticController::IsSWAT() const {
    return false;
}

bool ACyberneticController::IsSuspect() const {
    return false;
}

bool ACyberneticController::IsPlayerAKnownEnemy(APlayerCharacter* PlayerCharacter) const {
    return false;
}

bool ACyberneticController::IsMovingForRequests(TArray<FAIRequestID> Requests) const {
    return false;
}

bool ACyberneticController::IsMovingForRequest(int32 RequestID) const {
    return false;
}

bool ACyberneticController::IsMoving() const {
    return false;
}

bool ACyberneticController::IsLastAlive() const {
    return false;
}

bool ACyberneticController::IsFindingPath(int32 PathId) const {
    return false;
}

bool ACyberneticController::IsFindingAnyPath() const {
    return false;
}

bool ACyberneticController::IsCivilian() const {
    return false;
}

bool ACyberneticController::IsCharacterNeutral_Implementation(AReadyOrNotCharacter* InCharacter) const {
    return false;
}

bool ACyberneticController::IsCharacterFriendly_Implementation(AReadyOrNotCharacter* InCharacter) const {
    return false;
}

bool ACyberneticController::IsCharacterEnemy_Implementation(AReadyOrNotCharacter* InCharacter) const {
    return false;
}

bool ACyberneticController::IsActivelyMovingOnPath() const {
    return false;
}

bool ACyberneticController::HasRecentlySeenSwat(FVector& OutLocation) const {
    return false;
}

bool ACyberneticController::HasRecentlySeenSuspect() const {
    return false;
}

bool ACyberneticController::HasRecentlySeenCivilian() const {
    return false;
}

bool ACyberneticController::HasBeenExposedToAggressiveNoise_Tag(FName& OutTag, float SinceSeconds, float MaxDistance, bool bIncludeFriendly) const {
    return false;
}

bool ACyberneticController::HasBeenExposedToAggressiveNoise(float SinceSeconds, float MaxDistance, bool bIncludeFriendly) const {
    return false;
}

bool ACyberneticController::HasActivityType(TSubclassOf<UBaseActivity> ActivityType) {
    return false;
}

AReadyOrNotCharacter* ACyberneticController::GetTrackedTarget() {
    return NULL;
}

float ACyberneticController::GetTimeSinceLastMove() const {
    return 0.0f;
}

ETeamType ACyberneticController::GetTeam() const {
    return ETeamType::TT_NONE;
}

TSubclassOf<UNavigationQueryFilter> ACyberneticController::GetNavQueryFilter() const {
    return NULL;
}

FAIStimulus ACyberneticController::GetLatestStimulus() const {
    return FAIStimulus{};
}

AReadyOrNotCharacter* ACyberneticController::GetHeardActorInstigator() const {
    return NULL;
}

UBaseCombatActivity* ACyberneticController::GetCombatActivity() const {
    return NULL;
}

ACyberneticCharacter* ACyberneticController::GetCharacter() const {
    return NULL;
}

EAIAwarenessState ACyberneticController::GetAwarenessState() const {
    return EAIAwarenessState::Unalerted;
}

int32 ACyberneticController::GetActivityQueueCount() const {
    return 0;
}

FString ACyberneticController::GetActivityQueueAsString() {
    return TEXT("");
}

UBaseActivity* ACyberneticController::GetActivity(TSubclassOf<UBaseActivity> ActivityType) const {
    return NULL;
}

void ACyberneticController::FinishActivity(UBaseActivity* Activity, bool bSuccess, bool bForce) {
}

bool ACyberneticController::DoesPathGoThroughDoor(ADoor*& Door) const {
    return false;
}

void ACyberneticController::AddExposedToStimulusTag(const FName& Tag, FVector StimulusLocation, bool bFriendly, AReadyOrNotCharacter* StimulusInstigator) {
}

bool ACyberneticController::AddActivity(UBaseActivity* Activity, bool bOverrideCurrentActivity) {
    return false;
}

void ACyberneticController::AbortMove() {
}

void ACyberneticController::AbortCoverLandmark() {
}

void ACyberneticController::AbortCover() {
}

ACyberneticController::ACyberneticController() {
    this->AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception Component"));
    this->SightConfig = CreateDefaultSubobject<UReadyOrNotAISenseConfig_Sight>(TEXT("Sight Config"));
    this->TouchConfig = CreateDefaultSubobject<UAISenseConfig_Touch>(TEXT("Touch Config"));
    this->DamageConfig = CreateDefaultSubobject<UAISenseConfig_Damage>(TEXT("Damage Config"));
    this->HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("Hearing Config"));
    this->MoraleComponent = CreateDefaultSubobject<UMoraleComponent>(TEXT("Morale Component"));
    this->TargetingComponent = CreateDefaultSubobject<UTargetingComponent>(TEXT("Targeting Component"));
    this->SensingCharacter = NULL;
    this->LastSensedActor = NULL;
    this->HeardActorInstigator = NULL;
    this->LastSensedCharacter = NULL;
    this->bCanOpenDoorThroughNavLink = true;
    this->TimeSinceLastMove = 0.00f;
    this->TimeUntilRecentlySeenCharactersClear = 1.00f;
    this->InvestigateStimulusActivity = NULL;
    this->AwarenessState = EAIAwarenessState::Unalerted;
    this->bStopDecisionMaking = false;
    this->CurrentActivity = NULL;
    this->CallForHelpCoolDownDuration = 10.00f;
    this->MaxHearingForHelpDistance = 1000.00f;
    this->FlashLightSeenCoolDownDuration = 7.50f;
    this->bDisableSensePerception = false;
    this->TimeSinceLastExposedToAggressiveStimulus = 0.00f;
    this->TimeSinceLastExposedToAnyStimulus = 0.00f;
    this->TimeSinceLastExposedToSightStimulus = 0.00f;
    this->TimeSinceLastExposedToSoundStimulus = 0.00f;
    this->bEverHeardAggressiveStimulus = false;
    this->UnalertTime = 0.00f;
    this->AlertTime = 0.00f;
    this->SuspiciousTime = 0.00f;
    this->CombatActivity = NULL;
}

