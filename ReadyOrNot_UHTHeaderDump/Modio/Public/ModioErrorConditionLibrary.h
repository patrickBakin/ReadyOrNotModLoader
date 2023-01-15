#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioErrorCode.h"
#include "EModioErrorCondition.h"
#include "ModioErrorConditionLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioErrorConditionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioErrorConditionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool ErrorCodeMatches(FModioErrorCode ErrorCode, EModioErrorCondition Condition);
    
};

