#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseActivityProxy.generated.h"

class UBaseActivity;

UCLASS(Blueprintable, Transient)
class READYORNOT_API UBaseActivityProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseActivity*> Activities;
    
    UBaseActivityProxy();
};

