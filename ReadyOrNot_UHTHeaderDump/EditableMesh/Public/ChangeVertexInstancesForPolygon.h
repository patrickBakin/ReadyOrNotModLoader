#pragma once
#include "CoreMinimal.h"
#include "VertexIndexAndInstanceID.h"
#include "VertexInstancesForPolygonHole.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonID -FallbackName=PolygonID
#include "ChangeVertexInstancesForPolygon.generated.h"

USTRUCT(BlueprintType)
struct FChangeVertexInstancesForPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolygonID PolygonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole;
    
    EDITABLEMESH_API FChangeVertexInstancesForPolygon();
};

