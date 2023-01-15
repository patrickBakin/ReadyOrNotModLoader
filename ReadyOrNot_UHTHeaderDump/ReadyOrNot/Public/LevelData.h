#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "LevelDataLookupTable.h"
#include "LevelData.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ULevelData : public UDataAsset {
    GENERATED_BODY()
public:
    ULevelData();
    UFUNCTION(BlueprintCallable)
    static bool IsPvPSupported(FLevelDataLookupTable LevelData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCOOPSupported(FLevelDataLookupTable LevelData);
    
};

