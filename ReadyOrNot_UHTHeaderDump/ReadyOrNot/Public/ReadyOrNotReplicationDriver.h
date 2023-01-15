#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ReplicationDriver -FallbackName=ReplicationDriver
#include "ReadyOrNotReplicationDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API UReadyOrNotReplicationDriver : public UReplicationDriver {
    GENERATED_BODY()
public:
    UReadyOrNotReplicationDriver();
};

