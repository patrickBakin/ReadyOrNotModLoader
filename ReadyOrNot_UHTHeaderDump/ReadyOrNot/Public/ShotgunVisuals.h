#pragma once
#include "CoreMinimal.h"
#include "ShotgunVisuals.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FShotgunVisuals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> ShellVisuals;
    
    READYORNOT_API FShotgunVisuals();
};

