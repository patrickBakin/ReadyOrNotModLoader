#include "DeployItemAtLocationActivity.h"

void UDeployItemAtLocationActivity::TickMoveToStage(float DeltaTime, float Uptime) {
}

void UDeployItemAtLocationActivity::TickDeployStage(float DeltaTime, float Uptime) {
}

void UDeployItemAtLocationActivity::ExitMoveToStage() {
}

void UDeployItemAtLocationActivity::ExitDeployStage() {
}

void UDeployItemAtLocationActivity::EnterMoveToStage() {
}

void UDeployItemAtLocationActivity::EnterDeployStage() {
}

bool UDeployItemAtLocationActivity::CanDeploy() const {
    return false;
}




UDeployItemAtLocationActivity::UDeployItemAtLocationActivity() {
    this->DeployItemClass = NULL;
}

