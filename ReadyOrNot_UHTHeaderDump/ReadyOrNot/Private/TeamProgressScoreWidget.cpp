#include "TeamProgressScoreWidget.h"

UTeamProgressScoreWidget::UTeamProgressScoreWidget() {
    this->Team = ETeamType::TT_NONE;
    this->ProgressBar_LeftAligned = NULL;
    this->Score_Text_LeftAligned = NULL;
    this->ProgressBar_RightAligned = NULL;
    this->Score_Text_RightAligned = NULL;
}

