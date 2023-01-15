#pragma once
#include "CoreMinimal.h"
#include "EZeuzSessionType.h"
#include "ZeuzSimpleAuthLoginIn.generated.h"

USTRUCT(BlueprintType)
struct FZeuzSimpleAuthLoginIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Login;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZeuzSessionType LoginType;
    
    ZEUZSDK_API FZeuzSimpleAuthLoginIn();
};

