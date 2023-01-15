#pragma once
#include "CoreMinimal.h"
#include "RonKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "RonInputKeyTable.generated.h"

USTRUCT(BlueprintType)
struct FRonInputKeyTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRonKey Key;
    
    READYORNOT_API FRonInputKeyTable();
};

