#include "PlayerHealthStatusWidget.h"

UPlayerHealthStatusWidget::UPlayerHealthStatusWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Health = NULL;
    this->Armor = NULL;
    this->Helmet = NULL;
    this->PlayerCharacter = NULL;
}

