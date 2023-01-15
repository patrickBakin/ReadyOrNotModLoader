#pragma once
#include "CoreMinimal.h"
#include "EBaseAnimType_TP.generated.h"

UENUM(BlueprintType)
namespace EBaseAnimType_TP {
    enum Type {
        IdlePose_Low_TP,
        IdlePose_Up_TP,
        IdlePose_Shld_TP,
        IdlePose_Sights_TP,
        IdlePose_Ret_TP,
        IdlePose_Ovr_TP,
        Crouch_IdlePose_Low_TP,
        Crouch_IdlePose_Up_TP,
        Crouch_IdlePose_Shld_TP,
        Crouch_IdlePose_Sights_TP,
        Crouch_IdlePose_Ret_TP,
        Crouch_IdlePose_Ovr_TP,
        IdlePose_AFG_TP,
        IdlePose_VFG_TP,
        IdlePose_HSTOP_TP,
        ENone,
        EBaseAnimType_MAX UMETA(Hidden),
    };
}

