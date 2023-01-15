#pragma once
#include "CoreMinimal.h"
#include "Referendum.h"
#include "MapReferendum.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AMapReferendum : public AReferendum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapURL;
    
    AMapReferendum();
};

