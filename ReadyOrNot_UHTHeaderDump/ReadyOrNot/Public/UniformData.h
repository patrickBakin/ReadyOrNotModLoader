#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EItemClass.h"
#include "UniformData.generated.h"

class ABaseItem;
class UTexture2D;

USTRUCT(BlueprintType)
struct FUniformData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemClass ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseItem> Blueprint;
    
    READYORNOT_API FUniformData();
};

