#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "NavArea_ClosedDoor.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UNavArea_ClosedDoor : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_ClosedDoor();
};

