#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "NavQuery_FlankingSuspect.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UNavQuery_FlankingSuspect : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavQuery_FlankingSuspect();
};

