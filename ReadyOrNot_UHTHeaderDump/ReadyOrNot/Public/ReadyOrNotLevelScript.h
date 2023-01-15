#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelScriptActor -FallbackName=LevelScriptActor
#include "EGenerationType.h"
#include "ELightType.h"
#include "LevelDataLookupTable.h"
#include "ReadyOrNotLevelScript.generated.h"

class AActor;
class AFMODAmbientSound;
class ACyberneticCharacter;
class AConversationManager;
class UItemData;
class UMusicData;
class AReadyOrNotAudioVolume;
class USoundData;
class ULevelSequencePlayer;
class ULevelSequence;
class AAmbientSound;
class ABlockingVolume;
class UMaterial;

UCLASS(Blueprintable)
class READYORNOT_API AReadyOrNotLevelScript : public ALevelScriptActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOutOfBoundsTimeLimitEnded);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGenerationType WorldGenerationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* TAASharpenFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedFromNotifyActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashlightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashlightIntensityBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashlightBouncedIntensityBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABlockingVolume*> BlockingVolumesInLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AConversationManager* ConversationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELightType, FName> LightingScenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ELightType LightingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawCoverDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelDataLookupTable LevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicData* MusicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemData* ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundData* SoundData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOutOfBoundsTimeLimitEnded Delegate_OnOutOfBoundsTimeLimitEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfBounds_MaxTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfBoundsTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAmbientSound*> AudioSourcesInLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFMODAmbientSound*> FMODAudioSourcesInLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotAudioVolume*> AudioVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> AIRequestingCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDarkness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumLightIntensityForSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DarknessSightRangeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeWorldLightsAsSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOfficerAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceMVP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LastPlayedSequence;
    
    AReadyOrNotLevelScript();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopOutOfBoundsCountdown();
    
    UFUNCTION(BlueprintCallable)
    void Stop3DAudioVisualizer();
    
    UFUNCTION(BlueprintCallable)
    void StartOutOfBoundsCountdown();
    
    UFUNCTION(BlueprintCallable)
    void Start3DAudioVisualizer();
    
    UFUNCTION(BlueprintCallable)
    void SetFlashlightIntensityBoost(float Boost);
    
    UFUNCTION(BlueprintCallable)
    void SetFlashlightBouncedIntensityBoost(float Boost);
    
    UFUNCTION(BlueprintCallable)
    void PlayMVPSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnTeamSequenceFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPiracyCheckUpdate_Private(bool bIsPirated, const FString& ProgramDetected);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPiracyCheckUpdate(bool bIsPirated, const FString& ProgramDetected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOutOfBoundsTimeLimitEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnMVPSequenceFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisualizingAudioSources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutOfBoundsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCountingDownForOutOfBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AConversationManager* GetConversationManager();
    
    UFUNCTION(BlueprintCallable)
    void EnableOutOfBounds();
    
    UFUNCTION(BlueprintCallable)
    void DisableOutOfBounds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllAudioVolumesTicked() const;
    
};

