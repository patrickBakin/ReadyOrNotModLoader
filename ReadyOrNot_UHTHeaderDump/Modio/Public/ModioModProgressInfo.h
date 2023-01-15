#pragma once
#include "CoreMinimal.h"
#include "ModioUnsigned64.h"
#include "ModioModID.h"
#include "ModioModProgressInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModProgressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioUnsigned64 TotalDownloadSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioUnsigned64 CurrentlyDownloadedBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioUnsigned64 TotalExtractedSizeOnDisk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioUnsigned64 CurrentlyExtractedBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModID ID;
    
    FModioModProgressInfo();
};

