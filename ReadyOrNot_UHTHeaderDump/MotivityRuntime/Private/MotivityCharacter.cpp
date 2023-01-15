#include "MotivityCharacter.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

void AMotivityCharacter::ToggleMotivityStrafing() {
}

void AMotivityCharacter::ToggleMotivityMovementMode() {
}

void AMotivityCharacter::ToggleMotivityInputMode() {
}

void AMotivityCharacter::SwitchMotivityMoveStyle() {
}

void AMotivityCharacter::SwitchMotivityGait() {
}

void AMotivityCharacter::SetTrajectoryGoals(TArray<FVector> GoalLocations, TArray<float> GoalRotations) {
}

void AMotivityCharacter::SetTrajectoryGoal(FVector GoalLocation, float GoalRotation) {
}

void AMotivityCharacter::SetMovementStyleByName(FName Name) {
}

void AMotivityCharacter::SetMovementStyleByIndex(int32 Index) {
}

bool AMotivityCharacter::SetMovementGaitByName(const FString& Name) {
    return false;
}

void AMotivityCharacter::SetMovementGaitByIndex(int32 Index) {
}

void AMotivityCharacter::SetDesireSpeed(float NewSpeed) {
}

void AMotivityCharacter::OnRep_IsStrafing() {
}

float AMotivityCharacter::CalculateTrajectoryErrorWarping(const float DeltaTime, const float PlaybackSpeed) const {
    return 0.0f;
}

void AMotivityCharacter::ApplyTrajectoryErrorWarping(const float DeltaTime, const float PlaybackSpeed) {
}

void AMotivityCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMotivityCharacter, Goal);
    DOREPLIFETIME(AMotivityCharacter, CurrentMovementMode);
    DOREPLIFETIME(AMotivityCharacter, bIsStrafing);
    DOREPLIFETIME(AMotivityCharacter, bIsMoving);
    DOREPLIFETIME(AMotivityCharacter, bIsNearlyAtDestination);
    DOREPLIFETIME(AMotivityCharacter, LastInputVector_Replicated);
    DOREPLIFETIME(AMotivityCharacter, StickInput_Replicated);
    DOREPLIFETIME(AMotivityCharacter, CurrentMoveStyle);
    DOREPLIFETIME(AMotivityCharacter, CurMoveStyleIndex);
    DOREPLIFETIME(AMotivityCharacter, CurrentGaitIndex);
    DOREPLIFETIME(AMotivityCharacter, CurrentMotivityTag);
    DOREPLIFETIME(AMotivityCharacter, DestinationRotation_Replicated);
    DOREPLIFETIME(AMotivityCharacter, bHasOverridenGait);
    DOREPLIFETIME(AMotivityCharacter, bHasReachedLastPoint);
}

AMotivityCharacter::AMotivityCharacter() {
    this->CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->MaxSpeed = 0.00f;
    this->SampleRate = 20.00f;
    this->posBias = 15.00f;
    this->dirBias = 10.00f;
    this->posBiasMultiplier = 1.00f;
    this->dirBiasMultiplier = 1.00f;
    this->CurrentInputMode = EMotivityInputMode::MO_STICK_INPUT;
    this->CurrentMovementMode = EMotivityMovementMode::MO_CAPSULE;
    this->bIsStrafing = false;
    this->bIsMoving = false;
    this->bIsNearlyAtDestination = false;
    this->bUseDecoupling = false;
    this->maxDecouple = 10.00f;
    this->maxAngleDecouple = 90.00f;
    this->CurrentMoveDatabase = NULL;
    this->DefaultMoveStyleIndex = 0;
    this->CurMoveStyleIndex = 0;
    this->CurrentGaitIndex = 0;
    this->bhasInputThisFrame = false;
    this->CurrentMotivityTag = TEXT("NoTagAssigned");
    this->TrajectoryGoalReachTolerance = 50.00f;
    this->DestinationRotation_Replicated = 0.00f;
    this->bHasOverridenGait = false;
    this->bHasReachedLastPoint = false;
    this->bEnableTrajErrorWarping = false;
    this->WarpRate = 60.00f;
    this->MinTrajectoryLength = 0.75f;
}

