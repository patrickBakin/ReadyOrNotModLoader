#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CoverRail.h"
#include "CoverDirection.h"
#include "EStandCoverType.h"
#include "ECrouchCoverType.h"
#include "CoverPoint.generated.h"

class USceneComponent;

UCLASS(Blueprintable, NotPlaceable)
class DYNAMICCOVERSYSTEM_API ACoverPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> CoverActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverRail CoverRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverDirection StandCoverDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverDirection CrouchCoverDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCrouchOnlyCover: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCoverType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStandCoverType StandCoverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrouchCoverType CrouchCoverType;
    
public:
    ACoverPoint();
protected:
    UFUNCTION(BlueprintCallable)
    void StopPreviewCoverAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStandCoverType(const EStandCoverType& NewCoverType);
    
    UFUNCTION(BlueprintCallable)
    void SetCrouchCoverType(const ECrouchCoverType& NewCoverType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetCoverTypes();
    
    UFUNCTION(BlueprintCallable)
    void PreviewCoverAnim();
    
};

