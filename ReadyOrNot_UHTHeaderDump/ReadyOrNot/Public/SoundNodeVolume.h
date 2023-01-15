#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundNodeAssetReferencer -FallbackName=SoundNodeAssetReferencer
#include "SoundNodeVolume.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API USoundNodeVolume : public USoundNodeAssetReferencer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeAdjust;
    
public:
    USoundNodeVolume();
};

