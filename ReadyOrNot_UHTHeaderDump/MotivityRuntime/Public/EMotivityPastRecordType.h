#pragma once
#include "CoreMinimal.h"
#include "EMotivityPastRecordType.generated.h"

UENUM(BlueprintType)
enum class EMotivityPastRecordType : uint8 {
    ActualHistory,
    CurrentPose,
};

