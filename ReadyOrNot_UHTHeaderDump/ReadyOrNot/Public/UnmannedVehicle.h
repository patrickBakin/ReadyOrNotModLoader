#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "ControllableByTablet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "ETeamType.h"
#include "UnmannedVehicle.generated.h"

class USceneComponent;
class AActor;
class AController;
class AReadyOrNotGameState;
class AHUD;
class APlayerCharacter;
class AReadyOrNotPlayerController;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class READYORNOT_API AUnmannedVehicle : public APawn, public IControllableByTablet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Pilot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDead;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VehicleTabletName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHUD> PreviousHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHUD> VehicleHUD;
    
    AUnmannedVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    float TakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopPiloting(AReadyOrNotPlayerController* CallingController);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartPiloting(AReadyOrNotPlayerController* NewController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeath(AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideActorsForTabletView(USceneCaptureComponent2D* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETeamType GetTabletViewTeamColor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetTabletViewComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetTabletNameText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetPilot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Die(AController* EventInstigator, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanTabletViewMe(APlayerCharacter* TabletOwner, AReadyOrNotGameState* GameState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanControlWithTablet(APlayerCharacter* TabletOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AssumeTabletControl(APlayerCharacter* TabletOwner);
    
    
    // Fix for true pure virtual functions not being implemented
};

