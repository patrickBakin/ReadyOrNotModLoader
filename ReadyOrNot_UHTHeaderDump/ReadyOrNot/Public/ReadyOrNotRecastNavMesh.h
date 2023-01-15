#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DynamicCoverSystem -ObjectName=NotifyingRecastNavMesh -FallbackName=NotifyingRecastNavMesh
#include "ReadyOrNotRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AReadyOrNotRecastNavMesh : public ANotifyingRecastNavMesh {
    GENERATED_BODY()
public:
    AReadyOrNotRecastNavMesh();
};

