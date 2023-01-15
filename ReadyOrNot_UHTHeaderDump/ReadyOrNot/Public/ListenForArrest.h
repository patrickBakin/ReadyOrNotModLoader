#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForArrest.generated.h"

class AReadyOrNotCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForArrest : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForArrest : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterArrested(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* Arrester);
    
};

