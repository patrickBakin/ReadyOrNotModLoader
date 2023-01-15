#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LipSync_TimedPhrase.h"
#include "LipSync_Interval.h"
#include "LipSync_Pause.h"
#include "SubtitlesCache.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class TEXT2LIPSYNC_API USubtitlesCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLipSync_Pause> Data;
    
public:
    USubtitlesCache();
    UFUNCTION(BlueprintCallable)
    int32 SaveToDisk(const FString& Filename) const;
    
    UFUNCTION(BlueprintCallable)
    int32 SaveToBinaryFile(const FString& FullFileName) const;
    
    UFUNCTION(BlueprintCallable)
    bool RenameAsset(const FString& CurrentName, const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAsset(const USoundBase* SoundAsset);
    
    UFUNCTION(BlueprintCallable)
    int32 LoadFromDisk(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    int32 LoadFromBinaryFile(const FString& FullFileName);
    
    UFUNCTION(BlueprintCallable)
    bool GetPausesForVoiceAsset(const USoundBase* SoundAsset, TArray<FLipSync_Interval>& Pauses) const;
    
    UFUNCTION(BlueprintCallable)
    void GetCachedKeys(TArray<FString>& CachedKeys) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddAsset(const USoundBase* SoundAsset, const TArray<FLipSync_TimedPhrase>& PhraseData, const TArray<int32> PauseIndexes, const float PhraseDuration);
    
};

