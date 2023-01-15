#pragma once
#include "CoreMinimal.h"
#include "ObituaryForBone.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ObituaryData.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UObituaryData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FObituaryForBone> PointDeathMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> DefaultBulletDeathText;
    
    UObituaryData();
};

