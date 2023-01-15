#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_ApplyArteryDamage.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UAnimNotify_ApplyArteryDamage : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArteryBoneName;
    
public:
    UAnimNotify_ApplyArteryDamage();
};

