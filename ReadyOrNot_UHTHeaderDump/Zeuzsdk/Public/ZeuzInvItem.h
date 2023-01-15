#pragma once
#include "CoreMinimal.h"
#include "ZeuzItemCommon.h"
#include "ZeuzInvItem.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzInvItem : public FZeuzItemCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzInvItem();
};

