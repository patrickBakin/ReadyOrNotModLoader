#pragma once
#include "CoreMinimal.h"
#include "ObituaryForBone.generated.h"

USTRUCT(BlueprintType)
struct FObituaryForBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> DeathMessages;
    
    READYORNOT_API FObituaryForBone();
};

