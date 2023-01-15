#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileUsersListIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileUsersListIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzProfileUsersListIn();
};

