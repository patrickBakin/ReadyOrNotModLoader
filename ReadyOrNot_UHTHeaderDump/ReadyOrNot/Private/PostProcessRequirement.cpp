#include "PostProcessRequirement.h"
#include "Net/UnrealNetwork.h"

class AActor;
class APlayerCharacter;

void UPostProcessRequirement::Initialize(APlayerCharacter* InPlayerCharacter, AActor* InDamageCauser) {
}

APlayerCharacter* UPostProcessRequirement::GetPlayerCharacter() const {
    return NULL;
}

AActor* UPostProcessRequirement::GetDamageCauser() const {
    return NULL;
}

bool UPostProcessRequirement::EnablePostProcessEffect_Implementation() {
    return false;
}

void UPostProcessRequirement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPostProcessRequirement, PlayerCharacter);
    DOREPLIFETIME(UPostProcessRequirement, DamageCauser);
}

UPostProcessRequirement::UPostProcessRequirement() {
    this->PlayerCharacter = NULL;
    this->DamageCauser = NULL;
}

