#pragma once
#include "CoreMinimal.h"
#include "RopePiece.h"
#include "BaseVDComponent.h"
#include "VDRopeComponent.generated.h"

class UVDParticleSpringConstraint;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VICODYNAMICSPLUGIN_API UVDRopeComponent : public UBaseVDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StretchStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BendStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnforceStrictLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TileMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVDParticleSpringConstraint*> StretchConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVDParticleSpringConstraint*> BendConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRopePiece> Pieces;
    
public:
    UVDRopeComponent();
    UFUNCTION(BlueprintCallable)
    void SetNewRestLengthStartingAtParticle(int32 ParticleIndexStart, float NewLength);
    
    UFUNCTION(BlueprintCallable)
    void SetNewRestLength(float NewLength, int32 PieceIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetRope();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTrueLength(int32 PieceIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRopePiece> GetPieces() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateRopeGeometry_BP();
    
    UFUNCTION(BlueprintCallable)
    void BreakAtSegment(int32 SegmentIndex);
    
};

