#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "InGameLogMessage_PVP.h"
#include "InGameLogMessage.h"
#include "InGameLogSubsystem.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UInGameLogSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLogMessageEnqueued);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLogMessageDequeued);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLogMessageEnqueued OnLogMessageEnqueued;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLogMessageDequeued OnLogMessageDequeued;
    
    UInGameLogSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNextLogMessage_PVP(FInGameLogMessage_PVP& OutLogMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNextLogMessage(FInGameLogMessage& OutLogMessage);
    
    UFUNCTION(BlueprintCallable)
    void EnqueuePVPMessages(const TArray<FInGameLogMessage_PVP>& InLogMessages);
    
    UFUNCTION(BlueprintCallable)
    void EnqueuePVPMessage(FInGameLogMessage_PVP InLogMessage);
    
    UFUNCTION(BlueprintCallable)
    void EnqueueLogMessages(const TArray<FInGameLogMessage>& InLogMessages);
    
    UFUNCTION(BlueprintCallable)
    void EnqueueLogMessage(FInGameLogMessage InLogMessage);
    
};

