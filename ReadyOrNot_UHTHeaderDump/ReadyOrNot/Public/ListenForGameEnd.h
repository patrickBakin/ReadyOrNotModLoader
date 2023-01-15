#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForGameEnd.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UListenForGameEnd : public UInterface {
    GENERATED_BODY()
};

class IListenForGameEnd : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameEnded();
    
};

