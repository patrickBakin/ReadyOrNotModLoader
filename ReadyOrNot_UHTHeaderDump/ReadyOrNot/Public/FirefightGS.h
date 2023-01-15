#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameState.h"
#include "FirefightGS.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AFirefightGS : public AReadyOrNotGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FreeTextLocalized;
    
    AFirefightGS();
};

