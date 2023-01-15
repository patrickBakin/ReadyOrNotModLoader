#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WoundMeshActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class READYORNOT_API AWoundMeshActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WoundStaticMesh;
    
public:
    AWoundMeshActor();
    UFUNCTION(BlueprintCallable)
    void OnParentDestroyed(AActor* Parent);
    
};

