#pragma once
#include "CoreMinimal.h"
#include "ZeuzPayloadStateInfo.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzPayloadStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PayloadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PlayerList;
    
    FZeuzPayloadStateInfo();
};

