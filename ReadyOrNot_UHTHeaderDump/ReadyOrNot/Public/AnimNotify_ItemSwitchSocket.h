#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EItemSocket.h"
#include "AnimNotify_ItemSwitchSocket.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UAnimNotify_ItemSwitchSocket : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemSocket DesiredItemSocket;
    
public:
    UAnimNotify_ItemSwitchSocket();
};

