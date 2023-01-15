#pragma once
#include "CoreMinimal.h"
#include "ETOCPriority.h"
#include "TOCData.generated.h"

USTRUCT(BlueprintType)
struct FTOCData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TOCLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETOCPriority QueuePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNetworked: 1;
    
    READYORNOT_API FTOCData();
};

