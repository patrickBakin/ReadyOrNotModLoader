#pragma once
#include "CoreMinimal.h"
#include "ExitRoute.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ExitData.generated.h"

USTRUCT(BlueprintType)
struct FExitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExitRoute> PossibleRoutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    READYORNOT_API FExitData();
};

