#pragma once
#include "CoreMinimal.h"
#include "DoorInteractionActivity.h"
#include "EMirrorContactType.h"
#include "MirrorUnderDoorActivity.generated.h"

class ACyberneticCharacter;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UMirrorUnderDoorActivity : public UDoorInteractionActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMirrorContactType MirrorContactType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> SpottedCharacters;
    
public:
    UMirrorUnderDoorActivity();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MirrorForCustom();
    
};

