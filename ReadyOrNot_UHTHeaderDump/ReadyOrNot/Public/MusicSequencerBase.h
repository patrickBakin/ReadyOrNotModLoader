#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMusicState.h"
#include "MusicSequencerBase.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class READYORNOT_API AMusicSequencerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
    AMusicSequencerBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoppedAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedTransitioningToState(EMusicState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAudioReset();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopAudio();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartTransitioningToState(EMusicState NewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResetAudio();
    
};

