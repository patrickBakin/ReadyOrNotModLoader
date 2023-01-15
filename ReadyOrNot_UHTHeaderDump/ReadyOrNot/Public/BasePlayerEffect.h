#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameplayEffect.h"
#include "BasePlayerEffect.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class READYORNOT_API UBasePlayerEffect : public UReadyOrNotGameplayEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PlayerCharacter;
    
public:
    UBasePlayerEffect();
};

