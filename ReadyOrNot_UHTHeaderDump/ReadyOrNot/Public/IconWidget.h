#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "IconWidget.generated.h"

class UInteractableComponent;
class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MainImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* ParentComponent;
    
public:
    UIconWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAttachedObjectName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetAttachedObjectIcon() const;
    
};

