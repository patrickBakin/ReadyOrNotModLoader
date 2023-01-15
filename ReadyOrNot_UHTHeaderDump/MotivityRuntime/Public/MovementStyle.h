#pragma once
#include "CoreMinimal.h"
#include "GaitType.h"
#include "MovementStyle.generated.h"

USTRUCT(BlueprintType)
struct MOTIVITYRUNTIME_API FMovementStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStrafeMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGaitType> GaitEntries;
    
    FMovementStyle();
};

