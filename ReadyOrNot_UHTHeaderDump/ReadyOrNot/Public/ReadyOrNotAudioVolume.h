#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODEventInstance -FallbackName=FMODEventInstance
#include "ReadyOrNotAudioVolume.generated.h"

class UFMODEvent;
class UFMODAudioComponent;

UCLASS(Blueprintable)
class READYORNOT_API AReadyOrNotAudioVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFMODEvent*> ReverbEvents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalEffectsPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFMODEventInstance> EventInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFMODAudioComponent*> AttachedAudioComponents;
    
public:
    AReadyOrNotAudioVolume();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnotherVolumeActivatedAndPlayingEventInst(FFMODEventInstance EventInst) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnotherVolumeActivatedAndPlayingEvent(UFMODEvent* Event, FFMODEventInstance& EventInstance) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRanOnce() const;
    
};

