#include "TeamViewWidget.h"


UTeamViewWidget::UTeamViewWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InvalidationBox = NULL;
    this->PlayerViewImage = NULL;
    this->PlayerNameText = NULL;
    this->PlayerHealthStatusText = NULL;
    this->PlayerTeamIndicatorImage = NULL;
    this->SwitchViewText = NULL;
    this->CloseViewText = NULL;
    this->CurrentViewIndexText = NULL;
}

