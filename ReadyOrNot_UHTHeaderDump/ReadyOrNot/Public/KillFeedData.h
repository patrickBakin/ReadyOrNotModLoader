#pragma once
#include "CoreMinimal.h"
#include "EKillfeedType.h"
#include "KillFeedData.generated.h"

USTRUCT(BlueprintType)
struct FKillFeedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKillfeedType Type;
    
    READYORNOT_API FKillFeedData();
};

