#pragma once
#include "CoreMinimal.h"
#include "RoNMovementStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "RoNMoveStyleTable.generated.h"

USTRUCT(BlueprintType)
struct FRoNMoveStyleTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoNMovementStyle> MoveStyles;
    
    READYORNOT_API FRoNMoveStyleTable();
};

