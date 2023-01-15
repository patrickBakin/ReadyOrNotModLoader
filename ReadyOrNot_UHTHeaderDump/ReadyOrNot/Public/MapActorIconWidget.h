#pragma once
#include "CoreMinimal.h"
#include "MapActorWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "MapActorIconWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class READYORNOT_API UMapActorIconWidget : public UMapActorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon_Image_BG;
    
public:
    UMapActorIconWidget();
    UFUNCTION(BlueprintCallable)
    void SetIconColor(FLinearColor InIconColor);
    
    UFUNCTION(BlueprintCallable)
    void SetIconBrushStyle(FSlateBrush InIconBrush, FLinearColor InIconColor);
    
};

