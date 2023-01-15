#pragma once
#include "CoreMinimal.h"
#include "CoverDataMain.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ReadyOrNotCoverData.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotCoverData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverDataMain CoverData;
    
    UReadyOrNotCoverData();
};

