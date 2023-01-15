#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ModCardWidget.generated.h"

class UModManagerWidget;
class UModData;
class UTexture2DDynamic;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UModCardWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UModData* ModData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModManagerWidget* ManagerWidget;
    
public:
    UModCardWidget();
    UFUNCTION(BlueprintCallable)
    void SetupMod(UModData* InModData, UModManagerWidget* Parent);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSubscription(bool bSubscribe);
    
    UFUNCTION(BlueprintCallable)
    void RequestRatingReset();
    
    UFUNCTION(BlueprintCallable)
    void RequestPositiveRating();
    
    UFUNCTION(BlueprintCallable)
    void RequestNegativeRating();
    
    UFUNCTION(BlueprintCallable)
    void RequestImage();
    
    UFUNCTION(BlueprintCallable)
    void RequestGallery();
    
    UFUNCTION(BlueprintCallable)
    void RequestFullSizeGalleryImage(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThumbnailLoaded(UTexture2DDynamic* Image);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRatingSubmitted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModStateUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingFinished(bool bSubscribed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGalleryImageLoaded(UTexture2DDynamic* Image, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFullSizeGalleryImageLoaded(UTexture2DDynamic* Image, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UModData* GetModData() const;
    
};

