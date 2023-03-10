#pragma once
#include "CoreMinimal.h"
#include "SubdivisionLimitSection.h"
#include "SubdividedWireEdge.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SubdivisionLimitData.generated.h"

USTRUCT(BlueprintType)
struct FSubdivisionLimitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> VertexPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubdivisionLimitSection> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubdividedWireEdge> SubdividedWireEdges;
    
    EDITABLEMESH_API FSubdivisionLimitData();
};

