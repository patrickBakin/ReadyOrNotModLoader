#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileUsersListOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileUsersListOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIDs;
    
    FZeuzProfileUsersListOut();
};

