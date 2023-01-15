#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ECoverLandmarkAnimDirection.h"
#include "CoverLandmarkProxy.generated.h"

class USceneComponent;
class ACoverLandmark;

UCLASS(Blueprintable)
class READYORNOT_API ACoverLandmarkProxy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACoverLandmark* LandmarkOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverLandmarkAnimDirection EntryDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverLandmarkAnimDirection ExitDirection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    ACoverLandmarkProxy();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProxyUse(bool bIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProxyEnd(bool bSuccess);
    
};

