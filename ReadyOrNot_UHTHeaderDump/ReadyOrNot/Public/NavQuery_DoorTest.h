#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "NavQuery_DoorTest.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UNavQuery_DoorTest : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavQuery_DoorTest();
};

