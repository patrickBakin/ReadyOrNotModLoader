#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "EClientRequestType.h"
#include "EPartyReservationResult.h"
#include "PartyReservation.h"
#include "PartyBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class ONLINESUBSYSTEMUTILS_API APartyBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DestSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyReservation PendingReservation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClientRequestType RequestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingReservationSent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelReservation;
    
public:
    APartyBeaconClient();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateReservationRequest(const FString& SessionID, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReservationRequest(const FString& SessionID, const FPartyReservation& Reservation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveMemberFromReservationRequest(const FString& SessionID, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& PartyLeader);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddOrUpdateReservationRequest(const FString& SessionID, const FPartyReservation& Reservation);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendReservationFull();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
};

