#pragma once
#include "CoreMinimal.h"
#include "ZeuzMatchMakingStats.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzMatchMakingStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsersCount;
    
    FZeuzMatchMakingStats();
};

