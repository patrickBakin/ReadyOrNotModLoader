#pragma once
#include "CoreMinimal.h"
#include "MusicTrackFMOD.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FMusicTrackFMOD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* PreplanningEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* LevelEvent;
    
    READYORNOT_API FMusicTrackFMOD();
};

