#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TabletDisplay.generated.h"

class ATablet;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UTabletDisplay : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATablet* OwningTablet;
    
    UTabletDisplay();
};

