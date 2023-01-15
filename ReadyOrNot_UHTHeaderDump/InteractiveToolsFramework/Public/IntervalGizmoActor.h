#pragma once
#include "CoreMinimal.h"
#include "GizmoActor.h"
#include "IntervalGizmoActor.generated.h"

class UGizmoLineHandleComponent;

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API AIntervalGizmoActor : public AGizmoActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* UpIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* DownIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGizmoLineHandleComponent* ForwardIntervalComponent;
    
    AIntervalGizmoActor();
};

