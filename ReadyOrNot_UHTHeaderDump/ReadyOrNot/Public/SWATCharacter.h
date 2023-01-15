#pragma once
#include "CoreMinimal.h"
#include "CyberneticCharacter.h"
#include "SWATCharacter.generated.h"

class AActor;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API ASWATCharacter : public ACyberneticCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastSetBestFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* SquadLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGestureCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGestureCooldownTime;
    
    ASWATCharacter();
    UFUNCTION(BlueprintCallable)
    void PlayOnShotDialogue(bool bIsFriendly);
    
};

