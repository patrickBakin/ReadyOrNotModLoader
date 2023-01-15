#pragma once
#include "CoreMinimal.h"
#include "AIActionData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AIActionPresetData.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UAIActionPresetData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIActionData Action;
    
    UAIActionPresetData();
};

