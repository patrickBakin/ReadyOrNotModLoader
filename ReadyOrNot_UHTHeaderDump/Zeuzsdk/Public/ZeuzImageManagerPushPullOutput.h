#pragma once
#include "CoreMinimal.h"
#include "ZeuzImageManagerManifest.h"
#include "ZeuzImageManagerPushPullOutput.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzImageManagerPushPullOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzImageManagerManifest Manifest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ManifestHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TransferHashes;
    
    FZeuzImageManagerPushPullOutput();
};

