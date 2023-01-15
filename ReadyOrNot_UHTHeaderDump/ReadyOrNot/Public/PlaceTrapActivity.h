#pragma once
#include "CoreMinimal.h"
#include "WorldBuildingActivity.h"
#include "PlaceTrapActivity.generated.h"

class ADoor;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UPlaceTrapActivity : public UWorldBuildingActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* Door;
    
public:
    UPlaceTrapActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTrapPlacementInterrupted();
    
};

