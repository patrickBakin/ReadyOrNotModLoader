#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ReadyOrNotFaceAnimInstance.generated.h"

class USkeletalMeshComponent;
class UPoseAsset;

UCLASS(Blueprintable, NonTransient)
class UReadyOrNotFaceAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BodyDriverMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseAsset* DefaultFaceROMData;
    
    UReadyOrNotFaceAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPoseAsset* GetFaceROM() const;
    
};

