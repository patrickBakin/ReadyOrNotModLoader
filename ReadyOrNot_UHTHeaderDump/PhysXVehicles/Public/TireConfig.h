#pragma once
#include "CoreMinimal.h"
#include "TireConfigMaterialFriction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TireConfig.generated.h"

UCLASS(Blueprintable)
class PHYSXVEHICLES_API UTireConfig : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTireConfigMaterialFriction> TireFrictionScales;
    
public:
    UTireConfig();
};

