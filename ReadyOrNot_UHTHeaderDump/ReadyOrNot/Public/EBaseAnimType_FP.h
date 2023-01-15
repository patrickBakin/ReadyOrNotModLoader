#pragma once
#include "CoreMinimal.h"
#include "EBaseAnimType_FP.generated.h"

UENUM(BlueprintType)
namespace EBaseAnimType_FP {
    enum Type {
        IdlePose_FP,
        Idle_FP,
        Run_FP,
        Walk_FP,
        Run_Limp_FP,
        Walk_Limp_FP,
        Lowered_Up_Pose_FP,
        Lowered_Down_Pose_FP,
        ADS_Run_FP,
        ADS_Walk_FP,
        ADS_Run_Limp_FP,
        ADS_Walk_Limp_FP,
        IdlePose_AFG_FP,
        IdlePose_VFG_FP,
        IdlePose_HSTOP_FP,
        ENone,
        EBaseAnimType_MAX UMETA(Hidden),
    };
}

