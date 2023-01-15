#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIActionDecisionContext.h"
#include "AIActionGate.generated.h"

UCLASS(Abstract, Blueprintable, Const, EditInlineNew)
class READYORNOT_API UAIActionGate : public UObject {
    GENERATED_BODY()
public:
    UAIActionGate();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanOpen(const FAIActionDecisionContext& Context) const;
    
};

