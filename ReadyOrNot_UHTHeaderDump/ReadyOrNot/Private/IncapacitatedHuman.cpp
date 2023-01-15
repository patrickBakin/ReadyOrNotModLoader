#include "IncapacitatedHuman.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "InteractableComponent.h"
#include "ScoringComponent.h"

void AIncapacitatedHuman::SelectAllInGroup() {
}

void AIncapacitatedHuman::MakeMasterInGroup() {
}

bool AIncapacitatedHuman::HasBeenReported() const {
    return false;
}

void AIncapacitatedHuman::EnableOutline(EActorOutlineType OutlineType) {
}

void AIncapacitatedHuman::DisableOutline() {
}

void AIncapacitatedHuman::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIncapacitatedHuman, bIsInGroup);
    DOREPLIFETIME(AIncapacitatedHuman, bIsMasterOfGroup);
    DOREPLIFETIME(AIncapacitatedHuman, IncapacitatedHumansInGroup);
    DOREPLIFETIME(AIncapacitatedHuman, bIsDead);
    DOREPLIFETIME(AIncapacitatedHuman, bHasBeenReported);
}

AIncapacitatedHuman::AIncapacitatedHuman() {
    this->DefaultScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
    this->HumanMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HumanMesh"));
    this->HumanMeshFace = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HumanMeshFace"));
    this->ReportInteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("InteractableComp"));
    this->ScoringComponent = CreateDefaultSubobject<UScoringComponent>(TEXT("Scoring Component"));
    this->IncapacitatedAudioComponent = NULL;
    this->DyingMontage = NULL;
    this->FMODEventLoop = NULL;
    this->ShotParticleEffect = NULL;
    this->bStartDead = false;
    this->bCanEverDieByTime = false;
    this->TimeRemainingUntilDead = 60.00f;
    this->bIsInGroup = false;
    this->bIsMasterOfGroup = false;
    this->MasterHumanInGroup = NULL;
    this->bAttachReportInteractableToMesh = true;
    this->SocketToAttach = TEXT("spine_1");
    this->Team = ETeamType::TT_CIVILIAN;
    this->bIsDead = false;
    this->bHasBeenReported = false;
}

