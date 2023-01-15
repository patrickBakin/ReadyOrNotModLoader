#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
#include "TrapDamage.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UTrapDamage : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyAllDoorChunks: 1;
    
    UTrapDamage();
};

