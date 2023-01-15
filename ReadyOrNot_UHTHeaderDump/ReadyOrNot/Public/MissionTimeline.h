#pragma once
#include "CoreMinimal.h"
#include "TimelineEvent.h"
#include "MissionTimeline.generated.h"

USTRUCT(BlueprintType)
struct FMissionTimeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimelineEvent> EventsList;
    
    READYORNOT_API FMissionTimeline();
};

