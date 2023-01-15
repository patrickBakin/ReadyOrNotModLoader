#pragma once
#include "CoreMinimal.h"
#include "DoorBreachActivity.h"
#include "KickDoorActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UKickDoorActivity : public UDoorBreachActivity {
    GENERATED_BODY()
public:
    UKickDoorActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDoorKicked();
    
};

