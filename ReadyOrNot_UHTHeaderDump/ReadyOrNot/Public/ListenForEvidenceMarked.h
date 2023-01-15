#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForEvidenceMarked.generated.h"

class ABaseItem;

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForEvidenceMarked : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForEvidenceMarked : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEvidenceMarked(ABaseItem* MarkedEvidence, bool bMark);
    
};

