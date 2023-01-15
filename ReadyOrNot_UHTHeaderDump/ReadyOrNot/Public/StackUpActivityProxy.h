#pragma once
#include "CoreMinimal.h"
#include "TeamActivityProxy.h"
#include "StackUpActivityProxy.generated.h"

class ACyberneticCharacter;
class ADoor;
class AStackUpActor;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API UStackUpActivityProxy : public UTeamActivityProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* StackUpDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStackUpActor* StackUpActor;
    
    UStackUpActivityProxy();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticCharacter* FindDoorChecker() const;
    
};

