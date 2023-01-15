#pragma once
#include "CoreMinimal.h"
#include "ELoginState.generated.h"

UENUM(BlueprintType)
enum class ELoginState : uint8 {
    LS_None,
    LS_LoggingIn,
    LS_LoggedIn,
    LS_LoggedOut,
    LS_LoginFail,
    LS_MAX UMETA(Hidden),
};

