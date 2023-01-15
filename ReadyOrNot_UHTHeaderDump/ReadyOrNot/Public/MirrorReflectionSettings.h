#pragma once
#include "CoreMinimal.h"
#include "MirrorReflectionSettings.generated.h"

USTRUCT(BlueprintType)
struct FMirrorReflectionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MirrorResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowAntiAliasing: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDecals: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDynamicShadows: 1;
    
    READYORNOT_API FMirrorReflectionSettings();
};

