#include "CoverFireVolume.h"

class AActor;
class ACyberneticController;
class AFirePointActor;
class ASuspectCharacter;

void ACoverFireVolume::OnActorSpawned(AActor* Actor) {
}

bool ACoverFireVolume::HasFreeFirePoint() const {
    return false;
}

AFirePointActor* ACoverFireVolume::GetNextPushUpPoint(AFirePointActor* CurrentFirePoint, FVector Location, FVector EnemyLocation, ACyberneticController* Controller) {
    return NULL;
}

TArray<ASuspectCharacter*> ACoverFireVolume::GetNearestSuspects() {
    return TArray<ASuspectCharacter*>();
}

AFirePointActor* ACoverFireVolume::GetNearestFirePoint(FVector Location, ACyberneticController* Controller) {
    return NULL;
}

AFirePointActor* ACoverFireVolume::GetFurtherestFirePoint(FVector Location, ACyberneticController* Controller) {
    return NULL;
}

ACoverFireVolume::ACoverFireVolume() {
}

