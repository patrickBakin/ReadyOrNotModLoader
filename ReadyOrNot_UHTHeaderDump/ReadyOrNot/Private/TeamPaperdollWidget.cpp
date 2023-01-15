#include "TeamPaperdollWidget.h"

void UTeamPaperdollWidget::InitializeWidget_Implementation(ETeamType InTeam) {
}

UTeamPaperdollWidget::UTeamPaperdollWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Paperdoll_Image = NULL;
}

