#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TriggerBox -FallbackName=TriggerBox
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "ETeamType.h"
#include "PVPTriggerBox.generated.h"

class AActor;
class UObjectiveMarkerComponent;
class APlayerCharacter;
class UTextRenderComponent;

UCLASS(Blueprintable)
class READYORNOT_API APVPTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveMarkerComponent* ObjectiveMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharactersInTriggerBoxUpdated, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> CharactersInTriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PreviousTimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bEntered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeNeededToStay_Editor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeNeededToStay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeNeededToStay_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETeamType> OnlyAcceptTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OnlyAcceptActorsWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bLogDebugInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TH_TimerEventExpiry;
    
public:
    APVPTriggerBox();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleObjectiveMarker();
    
    UFUNCTION(BlueprintCallable)
    void StartTimerEvent();
    
    UFUNCTION(BlueprintCallable)
    void ShowObjectiveMarker();
    
    UFUNCTION(BlueprintCallable)
    void ResumeTimerEvent();
    
    UFUNCTION(BlueprintCallable)
    void PauseTimerEvent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTimerExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CharactersInTriggerBoxUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerOnAcceptedTeam(APlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInTriggerBox(AActor* InActor) const;
    
    UFUNCTION(BlueprintCallable)
    void HideObjectiveMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesActorHaveAnyAcceptedTags(AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelTimerEvent();
    
};

