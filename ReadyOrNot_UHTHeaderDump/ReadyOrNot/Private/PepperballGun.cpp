#include "PepperballGun.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

class ACyberneticCharacter;

void APepperballGun::IncrementStunShotCounter(ACyberneticCharacter* StunnedPerson) {
}

void APepperballGun::IncrementHeadshotCounter(ACyberneticCharacter* HeadshottedPerson) {
}

APepperballGun::APepperballGun() {
    this->ShootTrailComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Shot Trail Particle Component"));
    this->ParticleShootTrail = NULL;
    this->HeadshotsUntilAbuse = 5;
    this->CurrentHeadshotCounter = 0;
    this->StunShotsUntilAbuse = 10;
    this->CurrentStunShotCounter = 0;
    this->MaxBallsInHopper = 50;
    this->BallsInHopper = 50;
}

