#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ReverbEffect -FallbackName=ReverbEffect
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "FMODSnapshotReverb.generated.h"

UCLASS(Blueprintable)
class FMODSTUDIO_API UFMODSnapshotReverb : public UReverbEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid AssetGuid;
    
    UFMODSnapshotReverb();
};

