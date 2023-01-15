#pragma once
#include "CoreMinimal.h"
#include "DoorBreachActivity.h"
#include "C2DoorActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UC2DoorActivity : public UDoorBreachActivity {
    GENERATED_BODY()
public:
    UC2DoorActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnC2Placed();
    
    UFUNCTION(BlueprintCallable)
    void OnC2Detonate();
    
    UFUNCTION(BlueprintCallable)
    void EnterDetonateC2Stage();
    
    UFUNCTION(BlueprintCallable)
    bool CanDetonateC2() const;
    
};

