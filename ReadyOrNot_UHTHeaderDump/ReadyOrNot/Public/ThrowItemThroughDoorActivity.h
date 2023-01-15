#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DoorBreachActivity.h"
#include "ThrowItemThroughDoorActivity.generated.h"

class ABaseItem;

UCLASS(Abstract, Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UThrowItemThroughDoorActivity : public UDoorBreachActivity {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnThrowReady);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPerformingThrow);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseItem> ThrowItemClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnThrowReady OnThrowReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerformingThrow OnThrowingItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseItem* ThrownItem;
    
public:
    UThrowItemThroughDoorActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDoorBreached();
    
    UFUNCTION(BlueprintCallable)
    bool IsItemThrown() const;
    
};

