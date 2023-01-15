#include "CommandDecal.h"
#include "ObjectiveMarkerComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

class AReadyOrNotCharacter;
class UParticleSystem;

void ACommandDecal::TrackTarget(FVector TargetLocation, FVector MarkerLocation, FVector2D CommandDecalSize) {
}

void ACommandDecal::SetCommandTeam(ETeamType NewCommandTeam) {
}

void ACommandDecal::SetCommandParticle(UParticleSystem* NewCommandParticle) {
}

void ACommandDecal::SetCommandIconColor(FLinearColor NewCommandIconColor) {
}

void ACommandDecal::SetCommandDecalString(const FString& NewCommandName) {
}

void ACommandDecal::SetCommandDecalColor(FLinearColor NewCommandDecalColor) {
}

ETeamType ACommandDecal::GetCommandTeam() const {
    return ETeamType::TT_NONE;
}

void ACommandDecal::DeactivateCommand(bool bHideDecalWhenNoSquadPositionIsVisible, AReadyOrNotCharacter* SpecificPlayer) {
}

bool ACommandDecal::ActivateCommand(const FString& CommandName, FVector CommandLocation, FVector MarkerLocation, const TMap<AReadyOrNotCharacter*, FVector>& SquadPositionsMap) {
    return false;
}

ACommandDecal::ACommandDecal() {
    this->AlphaPositionParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Alpha Position Particle"));
    this->BetaPositionParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Beta Position Particle"));
    this->CharliePositionParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Charlie Position Particle"));
    this->DeltaPositionParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Delta Position Particle"));
    this->CommandMarkerComponent = CreateDefaultSubobject<UObjectiveMarkerComponent>(TEXT("Command Marker Component"));
    this->CommandTeam = ETeamType::TT_NONE;
    this->GoldTeamSquadPositionParticle = NULL;
    this->RedTeamSquadPositionParticle = NULL;
    this->BlueTeamSquadPositionParticle = NULL;
    this->DecalColorParamName = TEXT("Color");
    this->CommandDecalString = TEXT("None");
    this->MID_CommandDecal = NULL;
}

