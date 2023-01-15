#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForGamePreStart.generated.h"

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForGamePreStart : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForGamePreStart : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGamePreStarted();
    
};

