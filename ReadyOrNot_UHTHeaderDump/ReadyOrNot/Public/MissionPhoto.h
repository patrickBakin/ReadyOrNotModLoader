#pragma once
#include "CoreMinimal.h"
#include "MissionPhoto.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMissionPhoto {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PhotoTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Photo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PhotoCaption;
    
    READYORNOT_API FMissionPhoto();
};

