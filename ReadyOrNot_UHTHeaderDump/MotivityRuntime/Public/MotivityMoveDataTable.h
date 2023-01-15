#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "MovementStyle.h"
#include "MotivityMoveDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMotivityMoveDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementStyle MoveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveIndex;
    
    MOTIVITYRUNTIME_API FMotivityMoveDataTable();
};

