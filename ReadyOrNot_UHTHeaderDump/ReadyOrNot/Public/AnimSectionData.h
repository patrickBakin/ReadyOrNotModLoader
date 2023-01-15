#pragma once
#include "CoreMinimal.h"
#include "AnimSectionData.generated.h"

USTRUCT(BlueprintType)
struct FAnimSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectionEnd;
    
    READYORNOT_API FAnimSectionData();
};

