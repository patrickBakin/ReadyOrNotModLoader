#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "Conditional.generated.h"

UINTERFACE(Blueprintable)
class UConditional : public UInterface {
    GENERATED_BODY()
};

class IConditional : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckPassCondition();
    
};

