#pragma once
#include "CoreMinimal.h"
#include "RopePiece.generated.h"

USTRUCT(BlueprintType)
struct FRopePiece {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartParticleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndParticleIndex;
    
    VICODYNAMICSPLUGIN_API FRopePiece();
};

