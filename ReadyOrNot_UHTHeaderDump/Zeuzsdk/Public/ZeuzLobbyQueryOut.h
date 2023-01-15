#pragma once
#include "CoreMinimal.h"
#include "ZeuzLobbyStateOut.h"
#include "ZeuzLobbyQueryOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLobbyQueryOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzLobbyStateOut> Results;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultOfs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultTotal;
    
    FZeuzLobbyQueryOut();
};

