#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODEventInstance -FallbackName=FMODEventInstance
#include "MusicManager.generated.h"

class UFMODEvent;
class AMusicManager;

UCLASS(Blueprintable)
class READYORNOT_API AMusicManager : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODEventInstance MusicEventInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TH_UpdateMusicParameters;
    
public:
    AMusicManager();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMusicParameters();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopTheMusic(bool bGoHome);
    
    UFUNCTION(BlueprintCallable)
    void StopMusicParametersUpdate();
    
    UFUNCTION(BlueprintCallable)
    void StartMusicParametersUpdate();
    
    UFUNCTION(BlueprintCallable)
    void SetMusicParameterValue(const FString& paramName, float ParamValue);
    
    UFUNCTION(BlueprintCallable)
    void ResumeMusicParametersUpdate();
    
    UFUNCTION(BlueprintCallable)
    void PauseMusicParametersUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetMusicParameters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AMusicManager* Get();
    
};

