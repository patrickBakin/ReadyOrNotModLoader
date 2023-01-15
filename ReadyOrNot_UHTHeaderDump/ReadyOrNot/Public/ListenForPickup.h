#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForPickup.generated.h"

class ABaseItem;

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForPickup : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForPickup : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEvidencePickedUpByPlayer(ABaseItem* EvidenceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEvidenceDropped(ABaseItem* EvidenceActor);
    
};

