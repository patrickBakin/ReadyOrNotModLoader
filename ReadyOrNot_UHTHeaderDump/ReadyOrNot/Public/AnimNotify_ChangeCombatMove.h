#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_ChangeCombatMove.generated.h"

class UBaseCombatMoveActivity;

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UAnimNotify_ChangeCombatMove : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UBaseCombatMoveActivity>> PossibleCombatMoves;
    
public:
    UAnimNotify_ChangeCombatMove();
};

