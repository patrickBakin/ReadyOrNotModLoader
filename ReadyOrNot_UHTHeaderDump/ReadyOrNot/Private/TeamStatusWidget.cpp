#include "TeamStatusWidget.h"

void UTeamStatusWidget::InitializeTeam_Implementation() {
}

UTeamStatusWidget::UTeamStatusWidget() {
    this->TeamEmblem_Image_LeftAligned = NULL;
    this->Teammates_Container_LeftAligned = NULL;
    this->TeamEmblem_Image_RightAligned = NULL;
    this->Teammates_Container_RightAligned = NULL;
    this->Alignment = HAlign_Left;
    this->Team = ETeamType::TT_NONE;
    this->PaperdollWidgetClass = NULL;
    this->EmptyTeam_Text = NULL;
}

