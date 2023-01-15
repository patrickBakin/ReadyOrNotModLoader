#include "InteractionActor.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

class AActor;

void AInteractionActor::Server_TryUse_Implementation(AActor* User) {
}
bool AInteractionActor::Server_TryUse_Validate(AActor* User) {
    return true;
}

void AInteractionActor::Server_EndUse_Implementation(AActor* User) {
}
bool AInteractionActor::Server_EndUse_Validate(AActor* User) {
    return true;
}



bool AInteractionActor::CanBeUsedNow_Implementation(AActor* PotentialUser) {
    return false;
}

void AInteractionActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInteractionActor, bCanUseNow);
    DOREPLIFETIME(AInteractionActor, bAvailableForUse);
    DOREPLIFETIME(AInteractionActor, bCompleteIcon);
    DOREPLIFETIME(AInteractionActor, bHoldButtonPrompt);
    DOREPLIFETIME(AInteractionActor, bOverrideButtonPrompt);
    DOREPLIFETIME(AInteractionActor, OverrideButtonPromptText);
}

AInteractionActor::AInteractionActor() {
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->UseIconRadius = CreateDefaultSubobject<USphereComponent>(TEXT("IconRadius"));
    this->Mesh_Static = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh_Static"));
    this->Mesh_Skeletal = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh_Skeletal"));
    this->bCanUseNow = true;
    this->bAvailableForUse = true;
    this->bCompleteIcon = true;
    this->bButtonPushAnimation = false;
    this->bHoldButtonPrompt = false;
    this->bOverrideButtonPrompt = false;
}

