#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AIData.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UAIData : public UDataAsset {
    GENERATED_BODY()
public:
    UAIData();
};

