#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForWeaponClearing.generated.h"

class ABaseItem;

UINTERFACE(Blueprintable, MinimalAPI)
class UListenForWeaponClearing : public UInterface {
    GENERATED_BODY()
};

class IListenForWeaponClearing : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponCleared(ABaseItem* WeaponActor);
    
};

