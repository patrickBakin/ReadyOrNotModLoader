#pragma once
#include "CoreMinimal.h"
#include "TableColumnHeaderStyle.h"
#include "SplitterStyle.h"
#include "SlateColor.h"
#include "SlateBrush.h"
#include "SlateWidgetStyle.h"
#include "HeaderRowStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FHeaderRowStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTableColumnHeaderStyle ColumnStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTableColumnHeaderStyle LastColumnStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplitterStyle ColumnSplitterStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ForegroundColor;
    
    FHeaderRowStyle();
};

