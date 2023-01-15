#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "Reportable.generated.h"

class AReadyOrNotCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UReportable : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IReportable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReportToTOC(AReadyOrNotCharacter* Reporter, bool bPlayAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetSpeechTypeForReport();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanReportNow();
    
};

