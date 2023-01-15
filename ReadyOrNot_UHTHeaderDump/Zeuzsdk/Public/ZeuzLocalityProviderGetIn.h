#pragma once
#include "CoreMinimal.h"
#include "ZeuzLocalityProviderGetIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLocalityProviderGetIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ProviderIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GetClientProvisionable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GetNonClientProvisionable;
    
    FZeuzLocalityProviderGetIn();
};

