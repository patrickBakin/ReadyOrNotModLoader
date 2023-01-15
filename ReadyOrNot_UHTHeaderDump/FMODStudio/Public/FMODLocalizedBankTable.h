#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "FMODLocalizedBankTable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FMODSTUDIO_API FFMODLocalizedBankTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Banks;
    
    FFMODLocalizedBankTable();
};

