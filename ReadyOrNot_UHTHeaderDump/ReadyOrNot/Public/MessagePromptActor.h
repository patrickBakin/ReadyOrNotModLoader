#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MessagePromptContent.h"
#include "MessagePromptActor.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AMessagePromptActor : public AActor {
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
    TArray<FMessagePromptContent> MessageActions;
    
    AMessagePromptActor();
    UFUNCTION(BlueprintCallable)
    void ShowMessageThroughPopUp();
    
    UFUNCTION(BlueprintCallable)
    void HideMessagePopUp();
    
    UFUNCTION(BlueprintCallable)
    void GenerateMessageContent();
    
};

