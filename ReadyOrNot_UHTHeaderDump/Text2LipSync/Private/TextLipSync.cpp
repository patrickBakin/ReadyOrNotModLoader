#include "TextLipSync.h"

class UAudioComponent;
class USoundWave;
class UDataTable;

void UTextLipSync::TextToPhonemes(const FText& Line, TArray<FLipSync_PhonemeInPhrase>& OutputArray, int32& VowelsCount, int32& PunctuationMarksCount) {
}

void UTextLipSync::StretchPhraseData(float ErrorForPunctuation, float ErrorForWord) {
}

void UTextLipSync::StretchDataInterval(int32 StartIndex, int32 EndIndex, float NewStartTime, float NewEndTime) {
}

bool UTextLipSync::StopSpeaking(bool bStopPlayingSound) {
    return false;
}

bool UTextLipSync::SpeakByKey(const FName& PhraseKey, bool bStartPlayingSound) {
    return false;
}

bool UTextLipSync::SpeakAgain() {
    return false;
}

bool UTextLipSync::Speak(const FLipSync_Phrase& Phrase, bool bStartPlayingSound) {
    return false;
}

bool UTextLipSync::SaveLastPhraseToCache() {
    return false;
}

int32 UTextLipSync::SaveCacheToDisk(const FString& Filename, bool bUseBinaryFormat) {
    return 0;
}

void UTextLipSync::RestorePhraseDataFromPauses() {
}

bool UTextLipSync::RemovePhraseFromCache(const USoundWave* VoiceAsset) {
    return false;
}

void UTextLipSync::OnSpeaker_AudioSingleEnvelopeValue(const USoundWave* PlayingSoundWave, const float EnvelopeValue) {
}

void UTextLipSync::OnSpeaker_AudioPlaybackPercent(const USoundWave* PlayingSoundWave, const float PlaybackPercent) {
}

bool UTextLipSync::LoadPhrasesSetFromDataTable(UDataTable* Table) {
    return false;
}

int32 UTextLipSync::LoadCacheFromDisk(const FString& Filename, bool bUseBinaryFormat) {
    return 0;
}

bool UTextLipSync::IsSpeaking() const {
    return false;
}

bool UTextLipSync::IsInitialized() const {
    return false;
}

void UTextLipSync::InitializePhonemesArray() {
}

void UTextLipSync::InitializEPhonemeConvertRules() {
}

bool UTextLipSync::Initialize(UAudioComponent* SpeakingAudioComp) {
    return false;
}

float UTextLipSync::GetSpeakingTime() const {
    return 0.0f;
}

void UTextLipSync::GetListOfCachedAssets(TArray<FString>& VoiceAssetNames) {
}

float UTextLipSync::GetLastPhraseDuration() const {
    return 0.0f;
}

float UTextLipSync::GetCurveValue(const FName& CurveName) const {
    return 0.0f;
}

void UTextLipSync::GetCurrentPhrase(TMap<float, EPhoneme>& ReturnValue) const {
}

FString UTextLipSync::GetCurrentPhonemesLine() const {
    return TEXT("");
}

FString UTextLipSync::GetActiveMorphTargets() const {
    return TEXT("");
}

void UTextLipSync::BuildPhraseData(const TArray<FLipSync_TimedData>& Subtitles) {
}

UTextLipSync::UTextLipSync() {
    this->PauseFadeTime = 0.10f;
    this->PhonemeFadeTime = 0.20f;
    this->MorphLowerLimit = 0.00f;
    this->MorphUpperLimit = 1.00f;
    this->AudioMinTreshold = 0.02f;
    this->PauseMultiplier = 2.00f;
    this->DefaultOffsetFromDurationEnd = 0.20f;
    this->DelayAtSentenceEnd = 0.35f;
    this->DelayAtComma = 0.20f;
    this->EnvelopeMultiplier = 20.00f;
    this->MinimumPhonemesInterval = 0.00f;
    this->EmotionBlendTime = 0.00f;
    this->ShortEmotionHalfDuration = 0.00f;
    this->bRealtimeTimingCorrection = true;
    this->bUseSubtitlesCacheSystem = false;
    this->bUsePhrasesTableSystem = false;
    this->bUseCompositeMorphTargets = false;
    this->AnimationType = ELipSyncAnimType::T_MorphTargets;
    this->Speaker = NULL;
    this->ControlledMesh = NULL;
    this->CurrentSound = NULL;
    this->PhrasesList = NULL;
    this->SubtitlesCache = NULL;
    this->bIsInitialized = false;
    this->bIsSpeaking = false;
    this->bIsSpeakingPhonemeInAudio = false;
    this->bSubtitleWasChanged = false;
    this->bSubtitleWasLoadedFromCache = false;
    this->PauseTime = 0.00f;
    this->CurrentTime = 0.00f;
    this->EnvelopeVolumeMultiplier = 1.00f;
    this->PhraseDuration = 0.00f;
    this->NextPhonemeIndex = 0;
    this->PrevPhonemeIndex = 0;
    this->NextNotifyIndex = 0;
    this->CurrentIntervalDuration = 0.10f;
    this->bTrial = false;
    this->TrialMonth = 0;
    this->TrialYear = 0;
}

