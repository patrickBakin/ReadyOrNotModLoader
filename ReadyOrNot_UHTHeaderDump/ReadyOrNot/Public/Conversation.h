#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConversationData.h"
#include "Conversation.generated.h"

class ACyberneticCharacter;

UCLASS(Blueprintable)
class READYORNOT_API UConversation : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndConversation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConversationContinuing, int32, Idx);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConversationData> ConversationData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConversationContinuing OnConversationContinuing;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndConversation OnEndConversation;
    
    UConversation();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryGetSpeakers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequirementsMet();
    
    UFUNCTION(BlueprintCallable)
    void ReplyToConversation();
    
    UFUNCTION(BlueprintCallable)
    void GoToSpecificConversationIdAndContinueConversation(int32 Idx);
    
    UFUNCTION(BlueprintCallable)
    void GiveWorldBuildingActivityByTag(FName SpeakerId, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    ACyberneticCharacter* GetSpeakerForId(FName ID);
    
    UFUNCTION(BlueprintCallable)
    ACyberneticCharacter* GetSpeakerForConversationIdx(int32 Idx);
    
    UFUNCTION(BlueprintCallable)
    FConversationData GetConversationData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ContinueConversation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BuildConversation(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginConversation(ACyberneticCharacter* ConversationStarter, FName ID);
    
};

