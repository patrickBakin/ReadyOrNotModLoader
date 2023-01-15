#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "CanBreachWithShotgun.generated.h"

class ABaseItem;
class AReadyOrNotCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UCanBreachWithShotgun : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API ICanBreachWithShotgun : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShotgunBreached(float DamageAmount, FHitResult Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBreachableWithShotgun(bool bFront);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBreachWithShotgunNow(AReadyOrNotCharacter* ShotgunOwner, ABaseItem* Shotgun, float DamageAmount, FHitResult TraceHit);
    
};

