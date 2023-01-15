#pragma once
#include "CoreMinimal.h"
#include "ActorSense.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorSense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    READYORNOT_API FActorSense();
};

