#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharacterPersonalizationData.h"
#include "UseabilityInterface.h"
#include "CharacterLookOverride.h"
#include "CharacterCustomizationPortal.generated.h"

class AReadyOrNotCharacter;
class UBillboardComponent;
class UStaticMeshComponent;
class UInteractableComponent;
class UArrowComponent;
class ULightComponent;

UCLASS(Blueprintable)
class READYORNOT_API ACharacterCustomizationPortal : public AActor, public IUseabilityInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* CustomizationCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* CharacterSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> CompsToOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponent*> LightsToEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightActorsOfTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasLocked;
    
public:
    ACharacterCustomizationPortal();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterLookOverride(FName Head, FName Body);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveCharacterLookOverride(FName InHead, FName InBody);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLCLocked(FCharacterPersonalizationData Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCustomizationEntries(TArray<FCharacterPersonalizationData>& OutHeads, TArray<FCharacterPersonalizationData>& OutBodys);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCurrentCharacterLookOverride(FName& OutHead, FName& OutBody);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCharacterLookOverride(FName Head, FName Body, FCharacterLookOverride& OutCharacterLookOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllCompatibleHeads(FName InBody, TArray<FName>& OutHeads);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllCompatibleBodies(FName InHead, TArray<FName>& OutBodies);
    
    
    // Fix for true pure virtual functions not being implemented
};

