#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ECoverFireType_FirePoint.h"
#include "FirePointActor.generated.h"

class USceneComponent;
class ACyberneticController;
class ACoverFireVolume;

UCLASS(Blueprintable)
class READYORNOT_API AFirePointActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CustomFireArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverFireType_FirePoint CoverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCrouchCover: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticController* InUseByController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultScene;
    
public:
    AFirePointActor();
protected:
    UFUNCTION(BlueprintCallable)
    void PlayPreviewAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInUse(ACyberneticController* MyController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRandomFireMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACoverFireVolume* GetParentVolume() const;
    
};

