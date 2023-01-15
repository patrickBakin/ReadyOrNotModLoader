#pragma once
#include "CoreMinimal.h"
#include "AnimatedIcon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "AnimatedIconTable.generated.h"

USTRUCT(BlueprintType)
struct FAnimatedIconTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimatedIcon AnimatedIcon;
    
    READYORNOT_API FAnimatedIconTable();
};

