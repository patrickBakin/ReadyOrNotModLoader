#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ListenForGrenades.generated.h"

class ABaseGrenade;
class AReadyOrNotCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForGrenades : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForGrenades : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrenadeDetonated(FHitResult Hit, ABaseGrenade* Grenade, AReadyOrNotCharacter* Owner);
    
};

