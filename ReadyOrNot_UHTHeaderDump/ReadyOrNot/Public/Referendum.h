#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Referendum.generated.h"

class AReadyOrNotPlayerState;
class AReadyOrNotPlayerController;

UCLASS(Blueprintable)
class READYORNOT_API AReferendum : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReferendumName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReferendumDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReferendumTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReferendumHoldingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 YesVotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NoVotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReferendumTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReferendumHoldingTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bReferendumRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReferendumWaitingToTakeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerState* ReferendumCaller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotPlayerController*> YesVoters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotPlayerController*> NoVoters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotPlayerController*> EligibleVoters;
    
    AReferendum();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReferendumPassed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnnounceYesVote(AReadyOrNotPlayerState* Voter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnnounceVoteStarted(AReadyOrNotPlayerState* CallingVoter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnnounceVotePassed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnnounceVoteFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnnounceNoVote(AReadyOrNotPlayerState* Voter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AnnounceYesVote(AReadyOrNotPlayerState* Voter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AnnounceVoteStarted(AReadyOrNotPlayerState* CallingVoter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AnnounceVotePassed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AnnounceVoteFailed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AnnounceNoVote(AReadyOrNotPlayerState* Voter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetHudDescription();
    
    UFUNCTION(BlueprintCallable)
    void CastedYesVote(AReadyOrNotPlayerController* Voter);
    
    UFUNCTION(BlueprintCallable)
    void CastedNoVote(AReadyOrNotPlayerController* Voter);
    
};

