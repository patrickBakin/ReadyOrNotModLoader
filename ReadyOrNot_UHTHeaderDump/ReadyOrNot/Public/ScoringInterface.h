#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ScoringInterface.generated.h"

class UScoringComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UScoringInterface : public UInterface {
    GENERATED_BODY()
};

class IScoringInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UScoringComponent* GetScoringComponent() const;
    
};

