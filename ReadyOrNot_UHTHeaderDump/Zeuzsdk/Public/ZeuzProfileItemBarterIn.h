#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileItemMove.h"
#include "ZeuzProfileItemBarterIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileItemBarterIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserIDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserIDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzProfileItemMove> OfferA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzProfileItemMove> OfferB;
    
    FZeuzProfileItemBarterIn();
};

