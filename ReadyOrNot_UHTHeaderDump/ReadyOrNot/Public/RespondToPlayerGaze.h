#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "RespondToPlayerGaze.generated.h"

class APlayerCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API URespondToPlayerGaze : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IRespondToPlayerGaze : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerGazeStarted(APlayerCharacter* Gazer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerGazeEnded(APlayerCharacter* Gazer);
    
};

