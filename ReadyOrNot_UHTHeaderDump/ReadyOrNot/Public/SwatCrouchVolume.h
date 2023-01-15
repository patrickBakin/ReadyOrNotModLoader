#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "SwatCrouchVolume.generated.h"

class ASWATCharacter;

UCLASS(Blueprintable)
class READYORNOT_API ASwatCrouchVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASWATCharacter*, bool> CachedSwat;
    
public:
    ASwatCrouchVolume();
};

