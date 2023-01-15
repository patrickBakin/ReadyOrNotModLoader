#pragma once
#include "CoreMinimal.h"
#include "CoverGenSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "CoverGenOverrideVolume.generated.h"

UCLASS(Blueprintable)
class DYNAMICCOVERSYSTEM_API ACoverGenOverrideVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverGenSettings CoverGenSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCoverPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverGenTime;
    
    ACoverGenOverrideVolume();
    UFUNCTION(BlueprintCallable)
    void GenerateCoverPoints();
    
};

