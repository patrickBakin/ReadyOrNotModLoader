#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AdvancedSessions -ObjectName=BPUniqueNetId -FallbackName=BPUniqueNetId
#include "BPSteamGroupOfficer.generated.h"

USTRUCT(BlueprintType)
struct FBPSteamGroupOfficer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPUniqueNetId OfficerUniqueNetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwner;
    
    ADVANCEDSTEAMSESSIONS_API FBPSteamGroupOfficer();
};

