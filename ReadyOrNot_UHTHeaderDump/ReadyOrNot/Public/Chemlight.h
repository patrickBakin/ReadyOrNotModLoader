#pragma once
#include "CoreMinimal.h"
#include "BaseItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Chemlight.generated.h"

class UAmmoComponent;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API AChemlight : public ABaseItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAmmoComponent* Ammo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketSpawnName;
    
public:
    AChemlight();
    UFUNCTION(BlueprintCallable)
    void SetFPMeshHidden(bool bFPMeshHidden);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnThrownChemlight();
    
    UFUNCTION(BlueprintCallable)
    void QuickThrow();
    
    UFUNCTION(BlueprintCallable)
    void OnChemlightThrown();
    
    UFUNCTION(BlueprintCallable)
    void NormalThrow();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SpawnThrownChemlight();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingChemlightThrowAnimations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanThrow() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelThrow();
    
    UFUNCTION(BlueprintCallable)
    bool AICanThrowChemlightAtLocation(FVector Location);
    
};

