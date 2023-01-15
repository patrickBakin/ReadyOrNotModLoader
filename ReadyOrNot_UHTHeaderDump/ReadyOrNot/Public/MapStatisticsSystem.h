#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "AnalyticsStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MapStatisticsSystem.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AMapStatisticsSystem : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, uint8> ActorIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyticsStatus> Statuses;
    
public:
    AMapStatisticsSystem();
    UFUNCTION(BlueprintCallable)
    void StartRecording(const FString& InLevelName, const FString& InGameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRecordingStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGameId() const;
    
    UFUNCTION(BlueprintCallable)
    void EndLevel();
    
};

