#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
#include "ReceiveAISenseUpdates.generated.h"

class AActor;
class ACyberneticController;

UINTERFACE(Blueprintable)
class UReceiveAISenseUpdates : public UInterface {
    GENERATED_BODY()
};

class IReceiveAISenseUpdates : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAIPerceptionSense(ACyberneticController* InSenseController, FAIStimulus Stimulus, AActor*& OutOverrideSensedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAIHearingSense(ACyberneticController* InSenseController, FAIStimulus Stimulus, AActor*& OutOverrideSensedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAIDamageSense(ACyberneticController* InSenseController, FAIStimulus Stimulus, AActor*& OutOverrideSensedActor);
    
};

