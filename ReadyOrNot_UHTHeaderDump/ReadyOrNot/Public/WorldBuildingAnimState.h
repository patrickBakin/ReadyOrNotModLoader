#pragma once
#include "CoreMinimal.h"
#include "WorldBuildingAnimState.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FWorldBuildingAnimState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LoopAnim;
    
    READYORNOT_API FWorldBuildingAnimState();
};

