#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SquadReadyStatus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API USquadReadyStatus : public UUserWidget {
    GENERATED_BODY()
public:
    USquadReadyStatus();
};

