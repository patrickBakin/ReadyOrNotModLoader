#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileItemRemByNameIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileItemRemByNameIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzProfileItemRemByNameIn();
};

