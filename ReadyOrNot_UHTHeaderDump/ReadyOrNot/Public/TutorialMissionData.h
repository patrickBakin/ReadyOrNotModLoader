#pragma once
#include "CoreMinimal.h"
#include "SavedLoadout.h"
#include "ETutorialMissionType.h"
#include "TutorialMissionData.generated.h"

USTRUCT(BlueprintType)
struct FTutorialMissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialMissionType MissionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnSWATTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedLoadout Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpawnTag;
    
    READYORNOT_API FTutorialMissionData();
};

