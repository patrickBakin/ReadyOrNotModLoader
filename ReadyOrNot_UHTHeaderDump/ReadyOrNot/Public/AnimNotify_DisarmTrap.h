#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_DisarmTrap.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UAnimNotify_DisarmTrap : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisarmFinished: 1;
    
public:
    UAnimNotify_DisarmTrap();
};

