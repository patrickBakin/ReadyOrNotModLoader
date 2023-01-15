#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FlankingAvoidanceVolume.generated.h"

class UBoxComponent;
class UNavModifierComponent;

UCLASS(Blueprintable)
class READYORNOT_API AFlankingAvoidanceVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifierComponent;
    
    AFlankingAvoidanceVolume();
};

