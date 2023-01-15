#pragma once
#include "CoreMinimal.h"
#include "ZeuzPayloadQuota.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzPayloadQuota {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CpuCores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MemoryMB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StorageGB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IOBandwidthMBps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InetBandwidthMBps;
    
    FZeuzPayloadQuota();
};

