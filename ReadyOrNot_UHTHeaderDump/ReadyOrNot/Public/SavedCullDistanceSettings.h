#pragma once
#include "CoreMinimal.h"
#include "SavedCullDistanceSettings.generated.h"

USTRUCT(BlueprintType)
struct FSavedCullDistanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> CullDistanceSettingsMap;
    
    READYORNOT_API FSavedCullDistanceSettings();
};

