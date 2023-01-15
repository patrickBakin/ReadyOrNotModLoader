#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LipSync_MorphPreset.h"
#include "LipSync_PhonemeInPhrase.h"
#include "LipSync_TimedData.h"
#include "LipSync_TimedPhrase.h"
#include "LipSync_Phrase.h"
#include "ELipSyncAnimType.h"
#include "EPhoneme.h"
#include "SpeakingEventBoolDelegate.h"
#include "SpeakingEventDelegate.h"
#include "SpeakingNotifyDelegate.h"
#include "TextLipSync.generated.h"

class USoundBase;
class USkeletalMeshComponent;
class USubtitlesCache;
class UPhrasesList;
class UAudioComponent;
class USoundWave;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEXT2LIPSYNC_API UTextLipSync : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPhoneme, FName> MorphTargetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLipSync_MorphPreset> CompositePhonemeTargetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLipSync_MorphPreset> EmotionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhonemeFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MorphLowerLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MorphUpperLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioMinTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultOffsetFromDurationEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAtSentenceEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAtComma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvelopeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumPhonemesInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmotionBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortEmotionHalfDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRealtimeTimingCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSubtitlesCacheSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePhrasesTableSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCompositeMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELipSyncAnimType AnimationType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakingNotify OnNotifyExecuted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakingEvent OnPlayingFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakingEventBool OnSpeakingPause;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakingEvent OnTimelineChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ControlledMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CurrentSound;
    
    UPROPERTY(EditAnywhere)
    FName MorphTargets[17];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> MorphTargetRuntimeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> MorphTargetsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhrasesList* PhrasesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubtitlesCache* SubtitlesCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpeaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpeakingPhonemeInAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitleWasChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitleWasLoadedFromCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvelopeVolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhraseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextPhonemeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevPhonemeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextNotifyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLipSync_TimedPhrase> PhraseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PauseIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLipSync_TimedPhrase> PhraseNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentIntervalDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrialMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrialYear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, uint8> Emotion2Flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FName> Flag2Emotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, float> ActiveEmotions;
    
public:
    UTextLipSync();
protected:
    UFUNCTION(BlueprintCallable)
    void TextToPhonemes(const FText& Line, TArray<FLipSync_PhonemeInPhrase>& OutputArray, int32& VowelsCount, int32& PunctuationMarksCount);
    
    UFUNCTION(BlueprintCallable)
    void StretchPhraseData(float ErrorForPunctuation, float ErrorForWord);
    
    UFUNCTION(BlueprintCallable)
    void StretchDataInterval(int32 StartIndex, int32 EndIndex, float NewStartTime, float NewEndTime);
    
public:
    UFUNCTION(BlueprintCallable)
    bool StopSpeaking(bool bStopPlayingSound);
    
    UFUNCTION(BlueprintCallable)
    bool SpeakByKey(const FName& PhraseKey, bool bStartPlayingSound);
    
    UFUNCTION(BlueprintCallable)
    bool SpeakAgain();
    
    UFUNCTION(BlueprintCallable)
    bool Speak(const FLipSync_Phrase& Phrase, bool bStartPlayingSound);
    
    UFUNCTION(BlueprintCallable)
    bool SaveLastPhraseToCache();
    
    UFUNCTION(BlueprintCallable)
    int32 SaveCacheToDisk(const FString& Filename, bool bUseBinaryFormat);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RestorePhraseDataFromPauses();
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemovePhraseFromCache(const USoundWave* VoiceAsset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpeaker_AudioSingleEnvelopeValue(const USoundWave* PlayingSoundWave, const float EnvelopeValue);
    
    UFUNCTION(BlueprintCallable)
    void OnSpeaker_AudioPlaybackPercent(const USoundWave* PlayingSoundWave, const float PlaybackPercent);
    
public:
    UFUNCTION(BlueprintCallable)
    bool LoadPhrasesSetFromDataTable(UDataTable* Table);
    
    UFUNCTION(BlueprintCallable)
    int32 LoadCacheFromDisk(const FString& Filename, bool bUseBinaryFormat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializePhonemesArray();
    
    UFUNCTION(BlueprintCallable)
    void InitializEPhonemeConvertRules();
    
public:
    UFUNCTION(BlueprintCallable)
    bool Initialize(UAudioComponent* SpeakingAudioComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeakingTime() const;
    
    UFUNCTION(BlueprintCallable)
    void GetListOfCachedAssets(TArray<FString>& VoiceAssetNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastPhraseDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurveValue(const FName& CurveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentPhrase(TMap<float, EPhoneme>& ReturnValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentPhonemesLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveMorphTargets() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BuildPhraseData(const TArray<FLipSync_TimedData>& Subtitles);
    
};

