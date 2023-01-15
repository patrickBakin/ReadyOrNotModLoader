#pragma once
#include "CoreMinimal.h"
#include "ZeuzPortDef.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzPortDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Port;
    
    FZeuzPortDef();
};

