#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ThreatAwarenessSubsystem.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UThreatAwarenessSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UThreatAwarenessSubsystem();
};

