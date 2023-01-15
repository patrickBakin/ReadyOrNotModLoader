#pragma once
#include "CoreMinimal.h"
#include "ZeuzImageManagerManifestEntry.h"
#include "ZeuzImageManagerManifest.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzImageManagerManifest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzImageManagerManifestEntry> Entries;
    
    FZeuzImageManagerManifest();
};

