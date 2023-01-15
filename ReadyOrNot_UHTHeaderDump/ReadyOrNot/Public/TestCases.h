#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TestCases.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ATestCases : public AActor {
    GENERATED_BODY()
public:
    ATestCases();
};

