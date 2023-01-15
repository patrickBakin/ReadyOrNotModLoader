#pragma once
#include "CoreMinimal.h"
#include "ZeuzItemCommon.h"
#include "ZeuzTeam.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzTeam : public FZeuzItemCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Account;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Devs;
    
    FZeuzTeam();
};

