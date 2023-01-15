#pragma once
#include "CoreMinimal.h"
#include "ZeuzImageManagerPublishOutput.h"
#include "ZeuzImagemanagerPublishState.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzImagemanagerPublishState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImageHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzImageManagerPublishOutput Result;
    
    FZeuzImagemanagerPublishState();
};

