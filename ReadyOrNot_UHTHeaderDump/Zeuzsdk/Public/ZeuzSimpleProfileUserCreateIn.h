#pragma once
#include "CoreMinimal.h"
#include "ZeuzSimpleProfileUserCreateIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzSimpleProfileUserCreateIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Login;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    FZeuzSimpleProfileUserCreateIn();
};

