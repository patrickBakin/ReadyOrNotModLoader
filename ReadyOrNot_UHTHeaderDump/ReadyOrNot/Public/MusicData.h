#pragma once
#include "CoreMinimal.h"
#include "MusicTrack.h"
#include "MusicTrackFMOD.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MusicData.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UMusicData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicTrack PreplanningTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicTrack AmbientTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicTrack ActionTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicTrackFMOD FMODTracks;
    
    UMusicData();
};

