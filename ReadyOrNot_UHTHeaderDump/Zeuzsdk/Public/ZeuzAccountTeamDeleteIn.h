#pragma once
#include "CoreMinimal.h"
#include "ZeuzAccountChange.h"
#include "ZeuzAccountTeamDeleteIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountTeamDeleteIn : public FZeuzAccountChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Team;
    
    FZeuzAccountTeamDeleteIn();
};

