#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "PickupEvidenceByTag.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API APickupEvidenceByTag : public AObjective {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EvidenceTag;
    
public:
    APickupEvidenceByTag();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasCollectedEvidenceByTag(const FName& Tag);
    
};

