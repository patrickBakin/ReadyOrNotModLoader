#pragma once
#include "CoreMinimal.h"
#include "InteractionActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "EStunType.h"
#include "ETeamType.h"
#include "TugOfWarButton.generated.h"

class AActor;
class ACharacter;
class APlayerCharacter;
class APlayerState;
class ATugOfWarMover;

UCLASS(Blueprintable)
class READYORNOT_API ATugOfWarButton : public AInteractionActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType OnlyTeamUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATugOfWarMover* Mover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* CurrentUser;
    
    ATugOfWarButton();
    UFUNCTION(BlueprintCallable)
    void OnInfluencerStunned(APlayerCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnInfluencerKilled(AActor* Causer, ACharacter* InstigatorCharacter, ACharacter* KilledCharacter, const FDamageEvent& DamageEvent, APlayerState* LastPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnInfluencerArrested(APlayerCharacter* ArrestedCharacter, APlayerCharacter* InstigatorCharacter);
    
};

