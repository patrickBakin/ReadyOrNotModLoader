#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForGameStart.generated.h"

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForGameStart : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForGameStart : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameStarted();
    
};

