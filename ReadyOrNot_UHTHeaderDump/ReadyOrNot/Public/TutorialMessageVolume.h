#pragma once
#include "CoreMinimal.h"
#include "TutorialActionPromptSlot.h"
#include "ReadyOrNotTriggerVolume.h"
#include "TutorialMessageVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class READYORNOT_API ATutorialMessageVolume : public AReadyOrNotTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MessageMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBigPopUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDisplayedMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MessageContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialActionPromptSlot> MessageActions;
    
    ATutorialMessageVolume();
    UFUNCTION(BlueprintCallable)
    void TutorialBoxEndOverlap(AActor* ThisActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void TutorialBoxBeginOverlap(AActor* ThisActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void GenerateMessageContent();
    
};

