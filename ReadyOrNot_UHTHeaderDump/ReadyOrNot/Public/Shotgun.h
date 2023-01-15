#pragma once
#include "CoreMinimal.h"
#include "ShotgunVisuals.h"
#include "BaseMagazineWeapon.h"
#include "Shotgun.generated.h"

class UShellRackShellComponent;
class UStaticMesh;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API AShotgun : public ABaseMagazineWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSawnOff: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxShells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShellsReplicated, meta=(AllowPrivateAccess=true))
    TArray<int32> Shells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> OriginalShellCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxShellsInWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShellsPerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShellWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CurrentShellMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTapReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShotgunVisuals ShotgunVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockingFireAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShellsInRack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShellRackShellComponent*> ShellMeshComponents;
    
    AShotgun();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RefreshEntireShellRack();
    
    UFUNCTION(BlueprintCallable)
    void PlayReloadLoop();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShellsReplicated();
    
    UFUNCTION(BlueprintCallable)
    void LoadNextShellInRack();
    
    UFUNCTION(BlueprintCallable)
    void FinishedLoadingShellFromRack();
    
    UFUNCTION(BlueprintCallable)
    void CheckReloadSettings();
    
};

