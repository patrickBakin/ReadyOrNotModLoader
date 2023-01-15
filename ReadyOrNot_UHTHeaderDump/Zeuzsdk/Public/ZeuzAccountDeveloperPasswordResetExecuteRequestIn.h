#pragma once
#include "CoreMinimal.h"
#include "ZeuzAccountDeveloperPasswordResetExecuteRequestIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountDeveloperPasswordResetExecuteRequestIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EMail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Hash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PasswordHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PasswordConfirmHash;
    
    FZeuzAccountDeveloperPasswordResetExecuteRequestIn();
};

