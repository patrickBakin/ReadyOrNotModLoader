#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForUncuffed.generated.h"

class AReadyOrNotCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForUncuffed : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForUncuffed : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterUncuffed(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* Uncuffer);
    
};

