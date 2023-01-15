#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CustomizationWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UCustomizationWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UCustomizationWidget();
};

