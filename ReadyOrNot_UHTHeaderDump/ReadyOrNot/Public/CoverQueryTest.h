#pragma once
#include "CoreMinimal.h"
#include "ECoverQueryTestPurpose.h"
#include "CoverQueryTest.generated.h"

USTRUCT(BlueprintType)
struct FCoverQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverQueryTestPurpose TestPurpose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoringFactor;
    
    READYORNOT_API FCoverQueryTest();
};

