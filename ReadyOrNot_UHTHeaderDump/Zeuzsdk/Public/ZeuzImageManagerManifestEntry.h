#pragma once
#include "CoreMinimal.h"
#include "ZeuzImageManagerManifestEntryPart.h"
#include "ZeuzImageManagerManifestEntry.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzImageManagerManifestEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Filesize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Hash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzImageManagerManifestEntryPart> Parts;
    
    FZeuzImageManagerManifestEntry();
};

