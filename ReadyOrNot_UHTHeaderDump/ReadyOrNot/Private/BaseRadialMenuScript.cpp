#include "BaseRadialMenuScript.h"

class URadialWidgetBase;

void UBaseRadialMenuScript::Initialize(URadialWidgetBase* InRadialMenuOwner) {
}

void UBaseRadialMenuScript::ExecuteScript_Implementation() {
}

UBaseRadialMenuScript::UBaseRadialMenuScript() {
    this->RadialMenuOwner = NULL;
    this->Actor = NULL;
    this->World = NULL;
}

