#pragma once
#include "CoreMinimal.h"
#include "AIActionData_NameOnly.generated.h"

USTRUCT(BlueprintType)
struct FAIActionData_NameOnly {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    READYORNOT_API FAIActionData_NameOnly();
};

