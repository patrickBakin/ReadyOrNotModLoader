#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForRoundEnded.generated.h"

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForRoundEnded : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForRoundEnded : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRoundEnded();
    
};

