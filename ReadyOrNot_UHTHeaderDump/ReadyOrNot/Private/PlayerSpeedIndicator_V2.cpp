#include "PlayerSpeedIndicator_V2.h"

UPlayerSpeedIndicator_V2::UPlayerSpeedIndicator_V2() {
    this->Twenty_Box = NULL;
    this->Twenty_Image = NULL;
    this->Fourty_Box = NULL;
    this->Fourty_Image = NULL;
    this->Sixty_Box = NULL;
    this->Sixty_Image = NULL;
    this->Eighty_Box = NULL;
    this->Eighty_Image = NULL;
    this->OneHundred_Box = NULL;
    this->OneHundred_Image = NULL;
    this->SpeedPercentage_Text = NULL;
    this->PlayerCharacter = NULL;
    this->BaselineOpacity = 0.65f;
    this->FadeSpeed = 9.00f;
    this->LastSetRunSpeedPercent = 0.00f;
    this->MinRunSpeedPercent = 0.00f;
    this->MaxRunSpeedPercent = 0.00f;
    this->NormalizedRunSpeedPercent = 0.00f;
}

