#pragma once
#include "CoreMinimal.h"
#include "BaseVDComponent.h"
#include "VDMeshClothComponent.generated.h"

class UVDParticleSpringConstraint;
class UVDMeshVolumeConstraint;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VICODYNAMICSPLUGIN_API UVDMeshClothComponent : public UBaseVDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* HullMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StretchStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BendStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreserveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideRestVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseVertexColorDataForSetup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBendConstraintDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVDParticleSpringConstraint*> StretchConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVDParticleSpringConstraint*> BendConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVDMeshVolumeConstraint* VolumeConstraint;
    
public:
    UVDMeshClothComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVDMeshVolumeConstraint* GetVolumeConstraint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UVDParticleSpringConstraint*> GetStretchConstraintsArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UVDParticleSpringConstraint*> GetBendConstraintsArray() const;
    
};

