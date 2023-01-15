#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PlacedZipcuffs.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class READYORNOT_API APlacedZipcuffs : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ZipcuffMesh;
    
    APlacedZipcuffs();
};

