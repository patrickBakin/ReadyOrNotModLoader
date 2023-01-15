#pragma once
#include "CoreMinimal.h"
#include "CoverGenSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=RecastNavMesh -FallbackName=RecastNavMesh
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "NotifyingRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class DYNAMICCOVERSYSTEM_API ANotifyingRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCoverPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverGenTimeMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverGenSettings CoverGenSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenCoverPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EPhysicalSurface>> IgnoredPhysicalSurfacesForGeoTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EPhysicalSurface>> IgnoredPhysicalSurfacesForEdgeTests;
    
    ANotifyingRecastNavMesh();
    UFUNCTION(BlueprintCallable)
    void GenerateCoverPoints();
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllCoverPoints();
    
};

