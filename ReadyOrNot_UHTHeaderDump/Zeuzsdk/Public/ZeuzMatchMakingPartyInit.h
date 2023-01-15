#pragma once
#include "CoreMinimal.h"
#include "ZeuzMatchMakingInit.h"
#include "ZeuzMatchmakingUser.h"
#include "ZeuzMatchMakingPartyInit.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzMatchMakingPartyInit : public FZeuzMatchMakingInit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzMatchmakingUser> Party;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AllocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerConnect;
    
    FZeuzMatchMakingPartyInit();
};

