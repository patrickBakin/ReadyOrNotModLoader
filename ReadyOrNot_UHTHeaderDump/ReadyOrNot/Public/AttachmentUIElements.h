#pragma once
#include "CoreMinimal.h"
#include "AttachmentUIElements.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAttachmentUIElements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ImageOfScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SightPicture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> AttachmentIcon;
    
    READYORNOT_API FAttachmentUIElements();
};

