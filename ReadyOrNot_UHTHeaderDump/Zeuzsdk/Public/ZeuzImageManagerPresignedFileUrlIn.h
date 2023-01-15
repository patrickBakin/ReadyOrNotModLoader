#pragma once
#include "CoreMinimal.h"
#include "ZeuzImageManagerPresignedFileUrlIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzImageManagerPresignedFileUrlIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ManifestHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    FZeuzImageManagerPresignedFileUrlIn();
};

