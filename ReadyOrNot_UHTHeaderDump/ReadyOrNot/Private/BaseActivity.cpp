#include "BaseActivity.h"
#include "Templates/SubclassOf.h"
#include "ActivityFiniteStateMachine.h"

class ABaseItem;
class ACyberneticController;
class AReadyOrNotCharacter;
class ACyberneticCharacter;


bool UBaseActivity::ShouldForceStrafe() const {
    return false;
}

bool UBaseActivity::ShouldForceNoStrafe() const {
    return false;
}

void UBaseActivity::SetLocation(const FVector& NewLocation, bool bRequestMove, FVector CustomExtent) {
}

void UBaseActivity::SetActivityName(const FString& NewActivityName) {
}

void UBaseActivity::SetActivityMove(const bool bCanMove) {
}

void UBaseActivity::ResetData() {
}



void UBaseActivity::OnKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter) {
}

void UBaseActivity::OnIncapacitated(AReadyOrNotCharacter* IncapacitatedCharacter) {
}

bool UBaseActivity::IsProgressActivity() const {
    return false;
}

bool UBaseActivity::IsNoMoveActivity() const {
    return false;
}

bool UBaseActivity::IsActivitySoftComplete() const {
    return false;
}

bool UBaseActivity::IsActivityPaused() const {
    return false;
}

bool UBaseActivity::IsActivityInitialized() const {
    return false;
}

bool UBaseActivity::IsActivityComplete() const {
    return false;
}

bool UBaseActivity::HasStartedActivity() const {
    return false;
}

bool UBaseActivity::HasReachedLocation_AsPercentage(FVector StartLocation, float Percentage) const {
    return false;
}

bool UBaseActivity::HasReachedLocation(float Tolerance) const {
    return false;
}

ACyberneticController* UBaseActivity::GetOwningController() const {
    return NULL;
}

FVector UBaseActivity::GetLocation() const {
    return FVector{};
}

float UBaseActivity::GetDistanceToLocation() const {
    return 0.0f;
}

ACyberneticCharacter* UBaseActivity::GetCharacter() const {
    return NULL;
}

float UBaseActivity::GetActiveStateUptime() const {
    return 0.0f;
}

FString UBaseActivity::GetActiveStateName() const {
    return TEXT("");
}

int32 UBaseActivity::GetActiveStateID() const {
    return 0;
}


void UBaseActivity::EquipWeapon() {
}

void UBaseActivity::EquipItemOfClass(TSubclassOf<ABaseItem> InItemClass) {
}

void UBaseActivity::EquipItem(EItemCategory InItemCategory) {
}

bool UBaseActivity::CanOverrideActivity() const {
    return false;
}

bool UBaseActivity::CanBePushed() const {
    return false;
}

UBaseActivity::UBaseActivity() {
    this->ActivityName = TEXT("Default__BaseActivity");
    this->Priority = 0;
    this->TickInterval = 0.00f;
    this->MaxActivityTime = 0.00f;
    this->ActivityCooldown = 0.00f;
    this->ActivityStartDelay = 0.00f;
    this->MaxRandomStartDelay = 0.00f;
    this->bIsProgressActivity = false;
    this->bFinishActivityWhenOverriden = false;
    this->bAbortMoveWhenActivityFinished = true;
    this->bAbortMoveWhenActivityOverriden = true;
    this->bAbortActivityIfCannotReachLocation = true;
    this->bAbortIfTrackingEnemy = false;
    this->bNoMoveActivity = false;
    this->bResetStateMachineWhenActivityResumed = true;
    this->bAllowPartialMove = false;
    this->bAllowRePathOnInvalidation = true;
    this->bAbortIfNotMovingForAWhile = true;
    this->ElapsedActivityTime = 0.00f;
    this->TimeSinceGivenNewMoveLocation = 0.00f;
    this->ProgressState = TEXT("In Progress");
    this->OwningController = NULL;
    this->ActivityStateMachine = CreateDefaultSubobject<UActivityFiniteStateMachine>(TEXT("Default__BaseActivity_StateMachine"));
}

