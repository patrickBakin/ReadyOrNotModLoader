#pragma once
#include "CoreMinimal.h"
#include "MusicSequencerBase.h"
#include "EMusicState.h"
#include "MusicSequencerUnreal.generated.h"

class UAudioComponent;
class USoundWave;
class USoundCue;

UCLASS(Blueprintable)
class READYORNOT_API AMusicSequencerUnreal : public AMusicSequencerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMusicState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMusicState NextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMusicState NextScriptedState;
    
    AMusicSequencerUnreal();
    UFUNCTION(BlueprintCallable)
    void PlayScriptedMusic(USoundCue* Music, EMusicState NewScriptedState, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void OnAudioPlaybackPercent(const USoundWave* PlayingSoundWave, const float PlaybackPercent);
    
    UFUNCTION(BlueprintCallable)
    void OnAudioFinished();
    
};

