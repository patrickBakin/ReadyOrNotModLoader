#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "NavQuery_Swat.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UNavQuery_Swat : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavQuery_Swat();
};

