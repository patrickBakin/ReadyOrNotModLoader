#pragma once
#include "CoreMinimal.h"
#include "SteamAuthenticationToken.generated.h"

USTRUCT(BlueprintType)
struct FSteamAuthenticationToken {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rgchTokenString;
    
    UPROPERTY(EditAnywhere)
    uint32 unTokenLen;
    
    UPROPERTY(EditAnywhere)
    uint64 SteamId;
    
    READYORNOT_API FSteamAuthenticationToken();
};

