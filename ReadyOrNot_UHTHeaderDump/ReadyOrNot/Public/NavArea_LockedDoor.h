#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "NavArea_LockedDoor.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UNavArea_LockedDoor : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_LockedDoor();
};

