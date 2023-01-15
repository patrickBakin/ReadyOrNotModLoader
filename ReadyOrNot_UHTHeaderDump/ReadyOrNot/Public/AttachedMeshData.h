#pragma once
#include "CoreMinimal.h"
#include "AttachedMeshData.generated.h"

class UStaticMeshComponent;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FAttachedMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    READYORNOT_API FAttachedMeshData();
};

