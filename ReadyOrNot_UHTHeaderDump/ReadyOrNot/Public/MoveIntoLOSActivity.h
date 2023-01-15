#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "MoveIntoLOSActivity.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UMoveIntoLOSActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LOSActor;
    
    UMoveIntoLOSActivity();
};

