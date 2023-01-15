#pragma once
#include "CoreMinimal.h"
#include "SlateBrush.h"
#include "SlateWidgetStyle.h"
#include "InlineTextImageStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FInlineTextImageStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    UPROPERTY(EditAnywhere)
    int16 Baseline;
    
    FInlineTextImageStyle();
};

