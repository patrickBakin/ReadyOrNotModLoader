#pragma once
#include "CoreMinimal.h"
#include "DoorBreachActivity.h"
#include "ShotgunDoorActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UShotgunDoorActivity : public UDoorBreachActivity {
    GENERATED_BODY()
public:
    UShotgunDoorActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDoorShotgunned();
    
    UFUNCTION(BlueprintCallable)
    void OnDoorKicked();
    
    UFUNCTION(BlueprintCallable)
    void OnDoorBreached();
    
    UFUNCTION(BlueprintCallable)
    bool IsShotgunBreachFinished() const;
    
};

