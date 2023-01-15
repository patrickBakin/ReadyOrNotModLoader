#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "ModData.generated.h"

UCLASS(Blueprintable)
class UModData : public UObject {
    GENERATED_BODY()
public:
    UModData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubscribed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstalled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalRatings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubscriptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetResourceID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRatingDisplayText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPositiveRatings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPositiveRatingPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPopularityRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNegativeRatings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetModURL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetModName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetModAuthor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetLastUpdated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGalleryImageCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDownloadSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDownloads() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
};

