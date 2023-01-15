#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseConfig_Sight -FallbackName=AISenseConfig_Sight
#include "ReadyOrNotAISenseConfig_Sight.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UReadyOrNotAISenseConfig_Sight : public UAISenseConfig_Sight {
    GENERATED_BODY()
public:
    UReadyOrNotAISenseConfig_Sight();
};

