#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SoundData.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API USoundData : public UDataAsset {
    GENERATED_BODY()
public:
    USoundData();
};

