#include "TrapActivatee.h"

class AActor;
class ATrapActivator;




void ATrapActivatee::FireTrap(AActor* ActivatingActor, ATrapActivator* Activator) {
}

void ATrapActivatee::DisarmTrap(AActor* Disarmer) {
}

void ATrapActivatee::DisarmedActivator(AActor* Disarmer, ATrapActivator* Activator) {
}

ATrapActivatee::ATrapActivatee() {
    this->bDisarmed = false;
}

