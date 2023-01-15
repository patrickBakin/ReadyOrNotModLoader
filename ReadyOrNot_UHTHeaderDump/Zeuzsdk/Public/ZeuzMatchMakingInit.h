#pragma once
#include "CoreMinimal.h"
#include "ZeuzVariant.h"
#include "ZeuzMatchmakingUser.h"
#include "ZeuzMatchMakingInit.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzMatchMakingInit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzMatchmakingUser User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Compatibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzVariant Params;
    
    FZeuzMatchMakingInit();
};

