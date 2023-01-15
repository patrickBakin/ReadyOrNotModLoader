#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForReport.generated.h"

class UObject;
class AReadyOrNotCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForReport : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForReport : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTargetReported(AReadyOrNotCharacter* Reporter, UObject* ReportedCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTargetBecameReportable(UObject* Target);
    
};

