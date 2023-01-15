#pragma once
#include "CoreMinimal.h"
#include "SVGConversionParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "MSDFAssetData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MSDFSUPPORT_API UMSDFAssetData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSVGConversionParams ImportParameters;
    
    UMSDFAssetData();
};

