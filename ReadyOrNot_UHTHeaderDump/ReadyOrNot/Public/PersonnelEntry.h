#pragma once
#include "CoreMinimal.h"
#include "EPersonnel.h"
#include "PersonnelEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPersonnelEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPersonnel PersonnelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AvailableMapPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PtsCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PersonnelTexture;
    
    READYORNOT_API FPersonnelEntry();
};

