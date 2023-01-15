#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "PersonalizationWidget.generated.h"

class ACharacterCustomizationPortal;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UPersonalizationWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacterCustomizationPortal* SpawnedFromPortal;
    
    UPersonalizationWidget();
};

