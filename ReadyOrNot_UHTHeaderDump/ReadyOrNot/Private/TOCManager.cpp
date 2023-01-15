#include "TOCManager.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent

class ATOCManager;

void ATOCManager::StartTOCResponse(const FString& Line, bool bIsNetworked, ETOCPriority Priority) {
}

void ATOCManager::Multicast_PlayTOCSound2D_Implementation(const FString& Filename) {
}

void ATOCManager::IterateTOCQueue() {
}

bool ATOCManager::IsTOCSpeakingLine(const FString& Line) const {
    return false;
}

bool ATOCManager::IsTOCSpeaking() const {
    return false;
}

ATOCManager* ATOCManager::Get() {
    return NULL;
}

void ATOCManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATOCManager, QueuedTOCData);
}

ATOCManager::ATOCManager() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Audio Component"));
}

