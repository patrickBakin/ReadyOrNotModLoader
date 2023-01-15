#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECOOPMode.h"
#include "ReadyOrNotTriggerVolume.h"
#include "UseabilityInterface.h"
#include "MissionPortal.generated.h"

class AReadyOrNotGameMode;
class UStaticMeshComponent;
class UInteractableComponent;
class UReadyOrNotProfile;
class ULightComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class READYORNOT_API AMissionPortal : public AReadyOrNotTriggerVolume, public IUseabilityInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AReadyOrNotGameMode>> SelectableGameModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotProfile* Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* WhiteboardText;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LobbyAutoStartCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MinPlayersForAutostart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionURL, meta=(AllowPrivateAccess=true))
    FString MissionURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionURL, meta=(AllowPrivateAccess=true))
    FString ModeURL;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> CompsToOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponent*> LightsToEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> CompsToOutlineMissionSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponent*> LightsToEnableMissionSelected;
    
public:
    AMissionPortal();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedMode(FName InMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedMission(const FString& InMissionURL);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionURL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMissionStarting(bool& bStarting, float& Countdown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLevelUnlocked(const FString& InUrl, bool& OutbUnlocked, float& OutScoreRequired, FString& OutLockedURl);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameModeSelectable(ECOOPMode InMode);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSelectedModeName(FString& OutName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSelectedMode(FString& OutMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSelectedMission(FString& OutMissionURL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPlayersReady(int32& Ready, int32& Total);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAutostartCountdown(float& Countdown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesLevelExistInBuild(const FString& InUrl);
    
    
    // Fix for true pure virtual functions not being implemented
};

