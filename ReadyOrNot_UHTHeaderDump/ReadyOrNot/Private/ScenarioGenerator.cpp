#include "ScenarioGenerator.h"

void AScenarioGenerator::SaveScenario() {
}

void AScenarioGenerator::LoadScenario() {
}

FString AScenarioGenerator::LoadRandomScenario() {
    return TEXT("");
}

void AScenarioGenerator::GetLoadedScenarioList(TArray<FString>& OutScenarios) {
}

void AScenarioGenerator::DeleteScenario() {
}

AScenarioGenerator::AScenarioGenerator() {
    this->ScenarioName = TEXT("Scenario_01");
    this->bSpawnWhenEntered = false;
    this->CurrentScenarioCoverActivator = NULL;
    this->ScenarioImportance = EScenarioImportance::SI_AlwaysSpawn;
}

