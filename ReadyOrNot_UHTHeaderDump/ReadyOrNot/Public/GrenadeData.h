#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EItemClass.h"
#include "GrenadeData.generated.h"

class ABaseGrenade;
class UTexture2D;

USTRUCT(BlueprintType)
struct FGrenadeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemClass ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseGrenade> Blueprint;
    
    READYORNOT_API FGrenadeData();
};

