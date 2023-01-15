#pragma once
#include "CoreMinimal.h"
#include "CustomWidgetNavigationDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigationRule -FallbackName=EUINavigationRule
#include "WidgetNavigationData.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct UMG_API FWidgetNavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUINavigationRule Rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetToFocus;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UWidget> Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomWidgetNavigationDelegate CustomDelegate;
    
    FWidgetNavigationData();
};

