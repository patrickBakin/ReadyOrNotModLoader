#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SVGConversionParams.h"
#include "SVGToSDFFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MSDFSUPPORT_API USVGToSDFFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USVGToSDFFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool ConvertSVGToMSDFData(const FString& FilePath, const FSVGConversionParams& Params, TArray<uint8>& Output);
    
};

