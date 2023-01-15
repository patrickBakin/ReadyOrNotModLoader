#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForYell.generated.h"

class AReadyOrNotCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForYell : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForYell : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterYelled(AReadyOrNotCharacter* Yeller);
    
};

