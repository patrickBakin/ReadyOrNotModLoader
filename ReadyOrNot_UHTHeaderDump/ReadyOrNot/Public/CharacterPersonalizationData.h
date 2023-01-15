#pragma once
#include "CoreMinimal.h"
#include "EDLC.h"
#include "CharacterPersonalizationData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCharacterPersonalizationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLC LockedToDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FriendlyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    READYORNOT_API FCharacterPersonalizationData();
};

