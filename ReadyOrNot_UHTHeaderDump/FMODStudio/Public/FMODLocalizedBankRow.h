#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "FMODLocalizedBankRow.generated.h"

USTRUCT(BlueprintType)
struct FMODSTUDIO_API FFMODLocalizedBankRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    FFMODLocalizedBankRow();
};

