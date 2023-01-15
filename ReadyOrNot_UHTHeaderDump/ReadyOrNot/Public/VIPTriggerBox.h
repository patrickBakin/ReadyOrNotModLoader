#pragma once
#include "CoreMinimal.h"
#include "PVPTriggerBox.h"
#include "VIPTriggerBox.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API AVIPTriggerBox : public APVPTriggerBox {
    GENERATED_BODY()
public:
    AVIPTriggerBox();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVIPInTriggerBox(APlayerCharacter*& OutVIPCharacter) const;
    
};

