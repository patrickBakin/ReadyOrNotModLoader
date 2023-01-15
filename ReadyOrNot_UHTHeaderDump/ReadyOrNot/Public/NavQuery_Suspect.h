#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "NavQuery_Suspect.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UNavQuery_Suspect : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UNavQuery_Suspect();
};

