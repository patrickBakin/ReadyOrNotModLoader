#pragma once
#include "CoreMinimal.h"
#include "VertexPair.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonID -FallbackName=PolygonID
#include "PolygonToSplit.generated.h"

USTRUCT(BlueprintType)
struct FPolygonToSplit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolygonID PolygonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVertexPair> VertexPairsToSplitAt;
    
    EDITABLEMESH_API FPolygonToSplit();
};

