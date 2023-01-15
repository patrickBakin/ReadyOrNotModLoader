#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameMode.h"
#include "FreeMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API AFreeMode : public AReadyOrNotGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTime;
    
    AFreeMode();
};

