#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ReadyOrNotDebugSubsystem.generated.h"

class APlayerCharacter;
class UMaterialInterface;

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotDebugSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawMeleeRange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInfiniteHealth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInfiniteAmmo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawGrenadePath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRTXOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRTX_GlobalIlluminationOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRTX_ReflectionsOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRTX_AmbientOcclusionOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRTX_ShadowsOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRTX_TranslucencyOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVSyncOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlayOn_Fibonacci;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlayOn_LineUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlayOn_PistolLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlayOn_RifleLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlayOn_RuleOfThirds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyGlobalDamageMultiplier_Weapons: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyGlobalDamageMultiplier_Grenades: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalDamageMultiplier_Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalDamageMultiplier_Grenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLogWeaponDamageValuesToConsole: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowObjectiveMarkers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowAllEvidenceActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowHesitationBar: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLogPlayerAnimationStatus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawInteractableComponents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableInteractableComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawDebugTraces: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawDoorKillStunDistances: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMuteFMOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPauseFMOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceOpenAllDoors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceCloseAllDoors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLaserEyes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableMusic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawCoverPoints: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawCoverOctree: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSWATDynamicCover: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuspectDynamicCover: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawSWATCoverLogic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawSuspectCoverLogic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInfiniteSWATItems: 1;
    
    UReadyOrNotDebugSubsystem();
    UFUNCTION(BlueprintCallable)
    void WeakenAllEnemiesToLowHealth();
    
    UFUNCTION(BlueprintCallable)
    void ToggleVSync();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSWATDynamicCover();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSuspectDynamicCover();
    
    UFUNCTION(BlueprintCallable)
    void ToggleRuleOfThirdsOverlayGuide(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void ToggleRTXSettings();
    
    UFUNCTION(BlueprintCallable)
    void ToggleRifleLineOverlayGuide(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void TogglePistolLineOverlayGuide(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void TogglePauseFMOD();
    
    UFUNCTION(BlueprintCallable)
    void ToggleObjectiveMarkers();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMuteFMOD();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMusic(bool bMusicOn);
    
    UFUNCTION(BlueprintCallable)
    void ToggleLogWeaponDamage();
    
    UFUNCTION(BlueprintCallable)
    void ToggleLogPlayerAnimationStatus();
    
    UFUNCTION(BlueprintCallable)
    void ToggleLineUpOverlayGuide(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void ToggleLaserEyes();
    
    UFUNCTION(BlueprintCallable)
    void ToggleInteractableComponents();
    
    UFUNCTION(BlueprintCallable)
    void ToggleInfiniteSWATItems();
    
    UFUNCTION(BlueprintCallable)
    void ToggleInfiniteHealth();
    
    UFUNCTION(BlueprintCallable)
    void ToggleInfiniteAmmo();
    
    UFUNCTION(BlueprintCallable)
    void ToggleHesitationBar();
    
    UFUNCTION(BlueprintCallable)
    void ToggleGrenadeDrawDebug();
    
    UFUNCTION(BlueprintCallable)
    void ToggleGlobalDamageMultiplier_Weapons();
    
    UFUNCTION(BlueprintCallable)
    void ToggleGlobalDamageMultiplier_Grenades();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFibonacciOverlayGuide(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrawSWATCoverLogic();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrawSuspectCoverLogic();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrawMeleeRange();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrawInteractableComponents();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrawDoorKillStunDistances();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrawDebugTraces();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCoverPoints();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCoverOctree();
    
    UFUNCTION(BlueprintCallable)
    void ToggleAllEvidenceActorMarkers();
    
    UFUNCTION(BlueprintCallable)
    void SetMeleeRange(APlayerCharacter* PlayerCharacter, float NewMeleeRange);
    
    UFUNCTION(BlueprintCallable)
    void SetMeleeDamage(APlayerCharacter* PlayerCharacter, float NewMeleeDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalDamageMultiplier_Weapons(float NewDamageMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalDamageMultiplier_Grenades(float NewDamageMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void RTX_ToggleTranslucency();
    
    UFUNCTION(BlueprintCallable)
    void RTX_ToggleShadows();
    
    UFUNCTION(BlueprintCallable)
    void RTX_ToggleReflections();
    
    UFUNCTION(BlueprintCallable)
    void RTX_ToggleGlobalIllumination();
    
    UFUNCTION(BlueprintCallable)
    void RTX_ToggleAmbientOcclusion();
    
    UFUNCTION(BlueprintCallable)
    void OpenAllDoors();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseGlobalDamageMultiplier_Weapons(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseGlobalDamageMultiplier_Grenades(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseGlobalDamageMultiplier_Weapons(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseGlobalDamageMultiplier_Grenades(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void CloseAllDoors();
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdatePostProcessMaterial(UMaterialInterface* InMaterial, bool& bMaterialOn);
    
};

