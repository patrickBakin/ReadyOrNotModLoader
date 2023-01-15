#include "PlayerPaperdollWidget.h"

UPlayerPaperdollWidget::UPlayerPaperdollWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->StanceSwitcher = NULL;
    this->Stand_CarrySwitcher = NULL;
    this->Crouch_CarrySwitcher = NULL;
    this->Stand_Overlay = NULL;
    this->Crouch_Overlay = NULL;
    this->StandCarry_Overlay = NULL;
    this->StandNoCarry_Overlay = NULL;
    this->CrouchCarry_Overlay = NULL;
    this->CrouchNoCarry_Overlay = NULL;
    this->Outline_Image = NULL;
    this->Head_Image = NULL;
    this->Body_Image = NULL;
    this->RightArm_Image = NULL;
    this->LeftArm_Image = NULL;
    this->RightLeg_Image = NULL;
    this->LeftLeg_Image = NULL;
    this->Headwear_Image = NULL;
    this->BodyArmor_Image = NULL;
    this->Carry_Outline_Image = NULL;
    this->Carry_Head_Image = NULL;
    this->Carry_Body_Image = NULL;
    this->Carry_RightArm_Image = NULL;
    this->Carry_LeftArm_Image = NULL;
    this->Carry_BodyArmor_Image = NULL;
    this->Outline_Crouch_Image = NULL;
    this->Head_Crouch_Image = NULL;
    this->Body_Crouch_Image = NULL;
    this->RightArm_Crouch_Image = NULL;
    this->LeftArm_Crouch_Image = NULL;
    this->RightLeg_Crouch_Image = NULL;
    this->LeftLeg_Crouch_Image = NULL;
    this->Headwear_Crouch_Image = NULL;
    this->BodyArmor_Crouch_Image = NULL;
    this->Carry_Outline_Crouch_Image = NULL;
    this->Carry_Head_Crouch_Image = NULL;
    this->Carry_Body_Crouch_Image = NULL;
    this->Carry_RightArm_Crouch_Image = NULL;
    this->Carry_LeftArm_Crouch_Image = NULL;
    this->Carry_RightLeg_Crouch_Image = NULL;
    this->Carry_LeftLeg_Crouch_Image = NULL;
    this->Carry_BodyArmor_Crouch_Image = NULL;
}

