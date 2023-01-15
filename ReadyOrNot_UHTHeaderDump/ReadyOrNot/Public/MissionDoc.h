#pragma once
#include "CoreMinimal.h"
#include "MissionDoc.generated.h"

USTRUCT(BlueprintType)
struct FMissionDoc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DocumentTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DocumentText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DocumentButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DocumentButtonDescriptionText;
    
    READYORNOT_API FMissionDoc();
};

