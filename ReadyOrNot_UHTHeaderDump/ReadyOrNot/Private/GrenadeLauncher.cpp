#include "GrenadeLauncher.h"
#include "Net/UnrealNetwork.h"

void AGrenadeLauncher::UpdateServerPath_Implementation(const TArray<FVector_NetQuantize>& Path, int32 Bounce1, int32 Bounce2, int32 Bounce3) {
}
bool AGrenadeLauncher::UpdateServerPath_Validate(const TArray<FVector_NetQuantize>& Path, int32 Bounce1, int32 Bounce2, int32 Bounce3) {
    return true;
}

void AGrenadeLauncher::OnRep_GrenadePath() {
}

void AGrenadeLauncher::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGrenadeLauncher, CompletePath);
    DOREPLIFETIME(AGrenadeLauncher, BouncePt1);
    DOREPLIFETIME(AGrenadeLauncher, BouncePt2);
    DOREPLIFETIME(AGrenadeLauncher, BouncePt3);
}

AGrenadeLauncher::AGrenadeLauncher() {
    this->LastSimulatedGrenade = NULL;
    this->LaunchDistance = 2000.00f;
    this->GrenadeBounciness = 1.00f;
    this->BounceParticleEffect = NULL;
    this->BounceFMODEvent = NULL;
    this->BouncePt1 = 0;
    this->BouncePt2 = 0;
    this->BouncePt3 = 0;
}

