#pragma once
#include "CoreMinimal.h"
#include "PlayerDetails.generated.h"

USTRUCT(BlueprintType)
struct FPlayerDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    READYORNOT_API FPlayerDetails();
};

