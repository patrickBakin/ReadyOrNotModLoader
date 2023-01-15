#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PairedInteractionTable.generated.h"

class UInteractionsData;

USTRUCT(BlueprintType)
struct FPairedInteractionTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UInteractionsData*> Interactions;
    
    READYORNOT_API FPairedInteractionTable();
};

