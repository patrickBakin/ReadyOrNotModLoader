#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "ConversationManager.generated.h"

class ACyberneticCharacter;
class UConversation;

UCLASS(Blueprintable)
class READYORNOT_API AConversationManager : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UConversation*> RunningConversations;
    
    AConversationManager();
    UFUNCTION(BlueprintCallable)
    UConversation* TryPlayConversation(FName ConversationId, ACyberneticCharacter* ConversationStarter);
    
    UFUNCTION(BlueprintCallable)
    UConversation* PlayPrebuiltConversation(TSubclassOf<UConversation> Conversation, ACyberneticCharacter* ConversationStarter, FName ConversationId);
    
    UFUNCTION(BlueprintCallable)
    void PlayConversationInst(UConversation* Conversation, ACyberneticCharacter* ConversationStarter);
    
};

