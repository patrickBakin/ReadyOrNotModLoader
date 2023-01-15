#pragma once
#include "CoreMinimal.h"
#include "CriminalRecord.generated.h"

USTRUCT(BlueprintType)
struct FCriminalRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Crime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CriminalCode;
    
    READYORNOT_API FCriminalRecord();
};

