#include "Tool.h"
#include "Net/UnrealNetwork.h"

class AActor;
class APlayerCharacter;

void ATool::StopUsingTool(AActor* Target) {
}

void ATool::StartUsingTool(AActor* Target) {
}

void ATool::Server_ToolComplete_Implementation() {
}
bool ATool::Server_ToolComplete_Validate() {
    return true;
}

void ATool::Server_StopUsingTool_Implementation(AActor* Target) {
}
bool ATool::Server_StopUsingTool_Validate(AActor* Target) {
    return true;
}

void ATool::Server_StartUsingTool_Implementation(AActor* Target) {
}
bool ATool::Server_StartUsingTool_Validate(AActor* Target) {
    return true;
}

bool ATool::IsOperating() const {
    return false;
}

float ATool::GetMaxOperatingTime() const {
    return 0.0f;
}

float ATool::GetCurrentOperatingTime() const {
    return 0.0f;
}

void ATool::Client_StopToolAnimation_Implementation() {
}

void ATool::Client_FinishedToolUse_Implementation(AActor* Target, APlayerCharacter* PC) {
}

void ATool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATool, MaxOperatingTime);
    DOREPLIFETIME(ATool, CurrentOperatingTime);
    DOREPLIFETIME(ATool, bOperating);
    DOREPLIFETIME(ATool, TargetActor);
}

ATool::ATool() {
    this->MaxOperatingTime = 1.00f;
    this->CurrentOperatingTime = 0.00f;
    this->bOperating = false;
    this->TargetActor = NULL;
}

