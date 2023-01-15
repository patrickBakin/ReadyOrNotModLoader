#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "PlayerActionPromptWidget.generated.h"

class URichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UPlayerActionPromptWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* Action_RichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_OnShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInUse: 1;
    
public:
    UPlayerActionPromptWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateText(const FText& InText, bool bAnimate, bool bLoopAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInUse() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearText();
    
};

