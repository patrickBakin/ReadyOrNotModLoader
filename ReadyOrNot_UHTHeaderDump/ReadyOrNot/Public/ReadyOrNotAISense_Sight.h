#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISense -FallbackName=AISense
#include "ReadyOrNotAISense_Sight.generated.h"

UCLASS(Blueprintable, Config=Game)
class READYORNOT_API UReadyOrNotAISense_Sight : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTracesPerTick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinQueriesPerTimeSliceCheck;
    
    UPROPERTY(Config, EditAnywhere)
    double MaxTimeSlicePerTick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighImportanceQueryDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxQueryImportance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightLimitQueryImportance;
    
public:
    UReadyOrNotAISense_Sight();
};

