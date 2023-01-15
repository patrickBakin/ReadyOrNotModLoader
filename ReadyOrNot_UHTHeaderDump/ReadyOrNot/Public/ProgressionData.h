#pragma once
#include "CoreMinimal.h"
#include "LevelUpData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ProgressionData.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UProgressionData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelUpData LevelUpData;
    
public:
    UProgressionData();
};

