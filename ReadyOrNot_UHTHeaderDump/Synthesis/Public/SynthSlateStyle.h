#pragma once
#include "CoreMinimal.h"
#include "ESynthSlateColorStyle.h"
#include "ESynthSlateSizeType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
#include "SynthSlateStyle.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSynthSlateStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthSlateSizeType SizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynthSlateColorStyle ColorStyle;
    
    FSynthSlateStyle();
};

