#pragma once
#include "CoreMinimal.h"
#include "SequencedVOLookup.h"
#include "GameplayConfig.h"
#include "ReadyOrNotVoiceConfig.generated.h"

class UReadyOrNotVoiceConfig;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API UReadyOrNotVoiceConfig : public UGameplayConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSequencedVOLookup> SequencedLookup;
    
public:
    UReadyOrNotVoiceConfig();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UReadyOrNotVoiceConfig* Get();
    
};

