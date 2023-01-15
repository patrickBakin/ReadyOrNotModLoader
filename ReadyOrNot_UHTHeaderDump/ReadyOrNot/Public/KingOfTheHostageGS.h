#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameState.h"
#include "KingOfTheHostageGS.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AKingOfTheHostageGS : public AReadyOrNotGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RedTeam_RoundTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BlueTeam_RoundTimeRemaining;
    
    AKingOfTheHostageGS();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

