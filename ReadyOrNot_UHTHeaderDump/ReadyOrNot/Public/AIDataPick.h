#pragma once
#include "CoreMinimal.h"
#include "AIDataPick.generated.h"

USTRUCT(BlueprintType)
struct FAIDataPick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AILookupTag;
    
    READYORNOT_API FAIDataPick();
};

