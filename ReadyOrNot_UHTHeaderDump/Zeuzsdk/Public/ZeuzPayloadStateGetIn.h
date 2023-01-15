#pragma once
#include "CoreMinimal.h"
#include "ZeuzPayloadStateGetIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzPayloadStateGetIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AllocationIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MachineIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PayloadIDs;
    
    FZeuzPayloadStateGetIn();
};

