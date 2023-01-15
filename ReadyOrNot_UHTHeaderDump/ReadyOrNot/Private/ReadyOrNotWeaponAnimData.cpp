#include "ReadyOrNotWeaponAnimData.h"

UReadyOrNotWeaponAnimData::UReadyOrNotWeaponAnimData() {
    this->IdlePose_FP = NULL;
    this->Idle_FP = NULL;
    this->Run_FP = NULL;
    this->Walk_FP = NULL;
    this->Run_Limp_FP = NULL;
    this->Walk_Limp_FP = NULL;
    this->Look_BS_FP = NULL;
    this->Lowered_Up_Pose_FP = NULL;
    this->Lowered_Down_Pose_FP = NULL;
    this->ADS_Run_FP = NULL;
    this->ADS_Walk_FP = NULL;
    this->ADS_Run_Limp_FP = NULL;
    this->ADS_Walk_Limp_FP = NULL;
    this->IdlePose_AFG_FP = NULL;
    this->IdlePose_VFG_FP = NULL;
    this->IdlePose_HSTOP_FP = NULL;
    this->IdlePose_Low_TP = NULL;
    this->IdlePose_Up_TP = NULL;
    this->IdlePose_Shld_TP = NULL;
    this->IdlePose_Sights_TP = NULL;
    this->IdlePose_Ret_TP = NULL;
    this->IdlePose_Ovr_TP = NULL;
    this->Crouch_IdlePose_Low_TP = NULL;
    this->Crouch_IdlePose_Up_TP = NULL;
    this->Crouch_IdlePose_Shld_TP = NULL;
    this->Crouch_IdlePose_Sights_TP = NULL;
    this->Crouch_IdlePose_Ret_TP = NULL;
    this->Crouch_IdlePose_Ovr_TP = NULL;
    this->bRadioUsesNotifies = false;
    this->Grip_VFG_Body_FP_Fire = NULL;
    this->Grip_VFG_Body_FP_Fire_Last = NULL;
    this->Grip_VFG_Body_FP_Fire_Aim = NULL;
    this->Grip_VFG_Body_FP_Fire_Aim_Last = NULL;
    this->Grip_AFG_Body_FP_Fire = NULL;
    this->Grip_AFG_Body_FP_Fire_Last = NULL;
    this->Grip_AFG_Body_FP_Fire_Aim = NULL;
    this->Grip_AFG_Body_FP_Fire_Aim_Last = NULL;
    this->Reload_FP_Ads = NULL;
    this->ReloadEmpty_FP_Ads = NULL;
    this->Tactical_Reload_FP_Ads = NULL;
    this->Tactical_ReloadEmpty_FP_Ads = NULL;
    this->bEmptyReload = false;
    this->bHasRetentionAdditives = false;
    this->bHasLoweredAdditives = false;
    this->bHasSightAdditives = false;
    this->bOverrideFireAnimForGrip = false;
    this->IdlePose_AFG_TP = NULL;
    this->IdlePose_VFG_TP = NULL;
    this->IdlePose_HSTOP_TP = NULL;
}

