#pragma once
#include "CoreMinimal.h"
#include "HostageDriverProperties.generated.h"

USTRUCT(BlueprintType)
struct FHostageDriverProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToKillHostage;
    
    READYORNOT_API FHostageDriverProperties();
};

