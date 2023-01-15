#pragma once
#include "CoreMinimal.h"
#include "DoorBreachActivity.h"
#include "CustomDoorBreachActivity.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UCustomDoorBreachActivity : public UDoorBreachActivity {
    GENERATED_BODY()
public:
    UCustomDoorBreachActivity();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickBreachDoor(float DeltaTime);
    
};

