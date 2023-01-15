#pragma once
#include "CoreMinimal.h"
#include "SequencedVOLookup.generated.h"

USTRUCT(BlueprintType)
struct FSequencedVOLookup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LookupOrder;
    
    READYORNOT_API FSequencedVOLookup();
};

