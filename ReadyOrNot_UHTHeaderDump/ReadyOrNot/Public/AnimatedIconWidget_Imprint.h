#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimatedIconWidget_Imprint.generated.h"

class UImage;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class READYORNOT_API UAnimatedIconWidget_Imprint : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon_Image;
    
public:
    UAnimatedIconWidget_Imprint();
    UFUNCTION(BlueprintCallable)
    void SetIconImage(UTexture2D* NewIconImage);
    
    UFUNCTION(BlueprintCallable)
    void Init(FVector InWorldLocation, UTexture2D* InIconImage);
    
};

