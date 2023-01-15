#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Headwear.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "NightvisionGoggles.generated.h"

class UUserWidget;
class UDamageType;
class UTexture2D;
class UMaterialParameterCollection;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ANightvisionGoggles : public AHeadwear {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* SpawnedWidget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Green_LUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* White_LUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* GlobalMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NVGGlobalParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> NightVisionFirstPersonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings NightVisionPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bNVGOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bTogglingNVG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> BlockDamageTypesWhileActive;
    
    ANightvisionGoggles();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SpawnNightvisionWidget();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetTogglingNVG(bool bNewTogglingNVG);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNightvisionDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNightvisionActivated();
    
    UFUNCTION(BlueprintCallable)
    void DestroyNightvisionWidget();
    
};

