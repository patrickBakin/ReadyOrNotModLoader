#pragma once
#include "CoreMinimal.h"
#include "ZeuzImageManagerPullInput.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzImageManagerPullInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImageHash;
    
    FZeuzImageManagerPullInput();
};

