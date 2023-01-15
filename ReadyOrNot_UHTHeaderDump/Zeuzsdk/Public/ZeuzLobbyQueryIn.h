#pragma once
#include "CoreMinimal.h"
#include "ZeuzVariant.h"
#include "ZeuzLobbyQueryIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLobbyQueryIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListOfs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Compatibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzVariant Params;
    
    FZeuzLobbyQueryIn();
};

