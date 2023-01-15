#pragma once
#include "CoreMinimal.h"
#include "ZeuzAccountDeveloperCreatePwHashIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountDeveloperCreatePwHashIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DevID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Hash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PWHash;
    
    FZeuzAccountDeveloperCreatePwHashIn();
};

