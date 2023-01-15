#pragma once
#include "CoreMinimal.h"
#include "EBombState.h"
#include "Hm_BombInformation.generated.h"

USTRUCT(BlueprintType)
struct FHm_BombInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BombName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBombState BombState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeRemaining;
    
    READYORNOT_API FHm_BombInformation();
};

