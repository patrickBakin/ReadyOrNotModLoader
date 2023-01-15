#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "DisarmC2Activity.generated.h"

class APlacedC2Explosive;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDisarmC2Activity : public UBaseActivity {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlacedC2Explosive* PlacedC2;
    
public:
    UDisarmC2Activity();
};

